
package npc

import chisel3._
import chisel3.util._
import common._
import common.constants.RISCVConstants 
import common.AXI4Constants

class LoadStoreMessage extends Message {
  val dmem_rdata = Output(UInt(32.W)) 
  val result = Output(UInt(32.W))    
  val csr_rdata = Output(UInt(32.W))
}

class LSUIO extends Bundle {
  // Forward signals
  // Signals passed from EXU
  val in = Flipped(Decoupled(new ExecuteMessage))
  // Signals passed to WBU
  val out = Decoupled(new LoadStoreMessage)

  // Feedback signals
  // Signals pass backed to IFU
  val lsu_axi_resp_err = Output(Bool())

  // Bypassed data from LSU to avoid pipeline stalls caused by memory dependencies.
  val bypassedLsuData = Output(UInt(32.W))
  val wb_addr_lsu = Output(UInt(5.W))
  val lsu_finish = Output(Bool())

  // Memory interface
  val memory = new AXI4IO

  // Arbiter handshake
  val arbiter = new ValidReadyBundle

  // Debug signals
  val lsu_state_debug = Output(UInt(3.W))
  val lsu_is_ld_or_st_debug = Output(Bool())
  val lsu_reg_inst_debug = Output(UInt(32.W))
  val dmem_wdata_debug = Output(UInt(32.W))
  val dmem_rdata_debug = Output(UInt(32.W))
  val lsu_reg_dmem_addr_debug = Output(UInt(32.W))
  val lsu_reg_pc_debug = Output(UInt(32.W))
}

class LSU extends Module with RISCVConstants{
  val io = IO(new LSUIO)

  // Set AXI4-Lite default values
  AXI4Defaults(io.memory)

  // Set default values
  io.in.ready := false.B
  io.out.valid := false.B
  io.arbiter.valid := false.B
  io.lsu_axi_resp_err := false.B

  // Pipeline registers
  val lsu_reg_inst = RegEnable(io.in.bits.inst, io.in.fire)
  val lsu_reg_pc = RegEnable(io.in.bits.pc, io.in.fire)
  val lsu_reg_dmem_addr = RegEnable(io.in.bits.dmem_addr, io.in.fire)
  val lsu_reg_result = RegEnable(io.in.bits.result, io.in.fire)
  val lsu_reg_rs2_data = RegEnable(io.in.bits.rs2_data, io.in.fire)
  val lsu_reg_csr_rdata = RegEnable(io.in.bits.csr_rdata, io.in.fire)

  // Control signals
  val opcode = lsu_reg_inst(OPCODE_MSB, OPCODE_LSB)
  val funct3 = lsu_reg_inst(FUNCT3_MSB, FUNCT3_LSB)
  val isLoad  = WireInit(false.B)  
  val isStore = WireInit(false.B)  

  // Write destination in LSU stage
  val is_branch = opcode === OPCODE_BRANCH
  val is_store = opcode === OPCODE_STORE
  // branch and store instructions do not write back!
  io.wb_addr_lsu := Mux(is_branch || is_store, 0.U(5.W), lsu_reg_inst(RD_MSB,  RD_LSB))

  // 'mem_access_control' signal generation
  val mem_access_control = Wire(UInt(3.W))
  mem_access_control := MuxLookup(funct3, 0.U)(Seq(
    FUNCT3_W  -> MEM_ACCESS_WORD,   // W
    FUNCT3_B  -> MEM_ACCESS_BYTE,   // B
    FUNCT3_BU -> MEM_ACCESS_BYTE_U, // BU
    FUNCT3_H  -> MEM_ACCESS_HALF,   // H
    FUNCT3_HU -> MEM_ACCESS_HALF_U, // HU
  ))

  // Instantiate UnifiedMemoryController
  val UnifiedMemoryController = Module(new UnifiedMemoryController)
  UnifiedMemoryController.io.data_in := io.memory.r.data
  UnifiedMemoryController.io.dmem_addr := lsu_reg_dmem_addr
  UnifiedMemoryController.io.control := mem_access_control
  UnifiedMemoryController.io.dmem_wdata_raw := lsu_reg_rs2_data

  // Coordinate between wbu and lsu
  val delayedData = RegInit(0.U(32.W))
  delayedData := UnifiedMemoryController.io.data_out
  io.out.bits.dmem_rdata := delayedData

  // State machine state definition
  val sIdle :: sArbiterPrepare :: sPrepare :: sMemAccess :: sDone :: Nil = Enum(5)
  val state = RegInit(sIdle)

  // State machine logic
  switch(state) {
    is(sIdle) {
      // Arbiter interface
      io.arbiter.valid := false.B
      // Forward signals
      io.in.ready := false.B
      io.out.valid := false.B
      // Clear some signals
      isLoad := false.B
      isStore := false.B
      // Read channel
      io.memory.ar.valid := false.B
      io.memory.r.ready := false.B
      io.memory.ar.len := 0.U
      io.memory.ar.size := 2.U
      io.memory.ar.burst := AXI4Constants.BURST_INCR
      io.memory.ar.id := 0.U
      // Write channel
      io.memory.aw.valid := false.B
      io.memory.w.valid := false.B
      io.memory.b.ready := false.B
      io.memory.aw.len := 0.U
      io.memory.aw.size := 2.U
      io.memory.aw.burst := AXI4Constants.BURST_INCR
      io.memory.aw.id := 0.U
      io.memory.w.last := 1.B
      // Start memory access
      when(io.in.valid) {
        io.in.ready := true.B
        state := sArbiterPrepare
      }
    }

    is(sArbiterPrepare) {
      // tell if the instruction is a load or stor
      isLoad := opcode === OPCODE_LOAD
      isStore := opcode === OPCODE_STORE
      when (isLoad || isStore) {
        // Arbiter interface
        io.arbiter.valid := true.B
      } .otherwise {
        state := sDone
      }
      // Wait arbiter ready
      when(io.arbiter.ready) {
        state := sPrepare
      }      
    }

    is(sPrepare) {
        // Arbiter interface
        io.arbiter.valid := true.B
        // Forward signals
        io.in.ready := false.B
        io.out.valid := false.B
        // tell if the instruction is a load or stor
        isLoad := opcode === OPCODE_LOAD
        isStore := opcode === OPCODE_STORE
        // Start memory access
        when(isLoad) {
          // Read channel
          io.memory.ar.valid := true.B
          io.memory.ar.addr := lsu_reg_dmem_addr
          io.memory.ar.len := 0.U
          io.memory.ar.size := UnifiedMemoryController.io.dmem_rw_size
          io.memory.ar.burst := AXI4Constants.BURST_INCR
          io.memory.ar.id := 0.U
          // Wait memory ready to process request
          when(io.memory.ar.ready) {
            state := sMemAccess
          }
        } .elsewhen(isStore) {
          // Write channel
          io.memory.aw.valid := true.B
          io.memory.w.valid := true.B
          io.memory.aw.addr := lsu_reg_dmem_addr
          io.memory.w.data := UnifiedMemoryController.io.dmem_wdata
          io.memory.w.strb := UnifiedMemoryController.io.wmask
          io.memory.aw.len := 0.U
          io.memory.aw.size := UnifiedMemoryController.io.dmem_rw_size
          io.memory.aw.burst := AXI4Constants.BURST_INCR
          io.memory.aw.id := 0.U
          io.memory.w.last := 1.B
          when(io.memory.aw.ready && io.memory.w.ready) {
            state := sMemAccess
          }
        } .otherwise {
          state := sDone
        }
    }

    is(sMemAccess) {
      // Arbiter interface
      io.arbiter.valid := true.B
      // Forward signals
      io.in.ready := false.B
      io.out.valid := false.B
      // tell if the instruction is a load or stor
      isLoad := opcode === OPCODE_LOAD
      isStore := opcode === OPCODE_STORE
      // Read channel
      when(isLoad) {
        // Keep addr valid during memory access to facilitate address forwarding in the Xbar module.
        io.memory.ar.addr := lsu_reg_dmem_addr
        // Read channel
        io.memory.ar.valid := false.B
        io.memory.r.ready := true.B
        io.memory.ar.len := 0.U
        io.memory.ar.size := UnifiedMemoryController.io.dmem_rw_size
        io.memory.ar.burst := AXI4Constants.BURST_INCR
        io.memory.ar.id := 0.U
        // Wait memory return data valid
        when(io.memory.r.valid) {
          io.lsu_axi_resp_err := MuxLookup(io.memory.r.resp, false.B)(Seq(
            AXI4Constants.RESP_OKAY -> false.B,
            AXI4Constants.RESP_EXOKAY -> false.B,
            AXI4Constants.RESP_SLVERR -> true.B,
            AXI4Constants.RESP_DECERR -> true.B
          ))
          state := sDone
        }
      // Write channel
      }.elsewhen(isStore) {
        // Keep addr valid during memory access to facilitate address forwarding in the Xbar module.
        io.memory.aw.addr := lsu_reg_dmem_addr
        // Write channel
        io.memory.aw.valid := false.B
        io.memory.w.valid := false.B
        io.memory.b.ready := true.B
        io.memory.aw.len := 0.U
        io.memory.aw.size := UnifiedMemoryController.io.dmem_rw_size
        io.memory.aw.burst := AXI4Constants.BURST_INCR
        io.memory.aw.id := 0.U
        io.memory.w.last := 1.B
        // Wait memeory finish write
        when(io.memory.b.valid) {
            io.lsu_axi_resp_err := MuxLookup(io.memory.b.resp, false.B)(Seq(
                AXI4Constants.RESP_OKAY -> false.B,
                AXI4Constants.RESP_EXOKAY -> false.B,
                AXI4Constants.RESP_SLVERR -> true.B,
                AXI4Constants.RESP_DECERR -> true.B
            ))
          state := sDone
        }
       }
    }

    is(sDone) {
      // Arbiter interface
      io.arbiter.valid := false.B
      // Forward signals
      io.in.ready := false.B
      io.out.valid := true.B  // Lsu finish
      // Clear
      isLoad := false.B
      isStore := false.B
      // Read channel
      io.memory.ar.valid := false.B
      io.memory.r.ready := false.B
      io.memory.ar.len := 0.U
      io.memory.ar.size := 2.U
      io.memory.ar.burst := AXI4Constants.BURST_INCR
      io.memory.ar.id := 0.U
      // Write channel
      io.memory.aw.valid := false.B
      io.memory.w.valid := false.B
      io.memory.b.ready := false.B
      io.memory.aw.len := 0.U
      io.memory.aw.size := 2.U
      io.memory.aw.burst := AXI4Constants.BURST_INCR
      io.memory.aw.id := 0.U
      io.memory.w.last := 1.B
      when(io.out.ready) {
        state := sIdle
      }
    }
  }

  // Assign output signals
  io.out.bits.inst := lsu_reg_inst
  io.out.bits.pc := lsu_reg_pc
  io.out.bits.result := lsu_reg_result
  io.out.bits.csr_rdata := lsu_reg_csr_rdata
  io.bypassedLsuData := delayedData

  // Debug signals assignment
  io.lsu_finish := (state === sDone)
  io.lsu_state_debug := state
  io.lsu_is_ld_or_st_debug := isLoad || isStore
  io.lsu_reg_inst_debug := lsu_reg_inst
  io.lsu_reg_pc_debug := lsu_reg_pc
  io.dmem_wdata_debug := UnifiedMemoryController.io.dmem_wdata
  io.dmem_rdata_debug := io.memory.r.data
  io.lsu_reg_dmem_addr_debug := lsu_reg_dmem_addr
}

