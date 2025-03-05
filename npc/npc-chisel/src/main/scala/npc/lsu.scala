
package npc

import chisel3._
import chisel3.util._
import common._
import common.constants.RISCVConstants 

class LoadStoreMessage extends Message {
  val dmem_rdata = Output(UInt(32.W)) 
  val result = Output(UInt(32.W))    
  val wb_addr = Output(UInt(5.W))    
}

class LSUIO extends Bundle {
  // Forward signals
  // Signals passed from EXU
  val in = Flipped(Decoupled(new ExecuteMessage))
  // Signals passed to WBU
  val out = Decoupled(new LoadStoreMessage)
  // Memory interface
  val memory = new AXI4LiteIO
  // Debug signals
  val lsu_state_debug = Output(UInt(2.W))
  val lsu_is_ld_or_st_debug = Output(Bool())
  val lsu_reg_inst_debug = Output(UInt(32.W))
  val dmem_wdata_debug = Output(UInt(32.W))
  val dmem_rdata_debug = Output(UInt(32.W))
}

class LSU extends Module with RISCVConstants{
  val io = IO(new LSUIO)

  // Set AXI4-Lite default values
  AXI4LiteDefaults(io.memory)

  // Set default values
  io.in.ready := false.B
  io.out.valid := false.B

  // Pipeline registers
  val lsu_reg_inst = RegEnable(io.in.bits.inst, io.in.fire)
  val lsu_reg_pc = RegEnable(io.in.bits.pc, io.in.fire)
  val lsu_reg_dmem_addr = RegEnable(io.in.bits.dmem_addr, io.in.fire)
  val lsu_reg_result = RegEnable(io.in.bits.result, io.in.fire)
  val lsu_reg_rs2_data = RegEnable(io.in.bits.rs2_data, io.in.fire)
  val lsu_reg_wb_addr = RegEnable(io.in.bits.wb_addr, io.in.fire)

  // Control signals
  val opcode = lsu_reg_inst(OPCODE_MSB, OPCODE_LSB)
  val funct3 = lsu_reg_inst(FUNCT3_MSB, FUNCT3_LSB)
  val isLoad  = WireInit(false.B)  
  val isStore = WireInit(false.B)  

  // 'mem_access_control' signal generation
  val mem_access_control = Wire(UInt(3.W))
  mem_access_control := MuxLookup(Cat(opcode, funct3), 0.U)(Seq(
    Cat(OPCODE_LOAD, FUNCT3_LW)  -> 2.U, // LW
    Cat(OPCODE_LOAD, FUNCT3_LB)  -> 0.U, // LB
    Cat(OPCODE_LOAD, FUNCT3_LBU) -> 4.U, // LBU
    Cat(OPCODE_LOAD, FUNCT3_LH)  -> 1.U, // LH
    Cat(OPCODE_LOAD, FUNCT3_LHU) -> 5.U, // LHU
    Cat(OPCODE_STORE, FUNCT3_SW) -> 2.U, // SW
    Cat(OPCODE_STORE, FUNCT3_SB) -> 0.U, // SB
    Cat(OPCODE_STORE, FUNCT3_SH) -> 1.U  // SH
  ))

  // Instantiate alignment_network
  val alignment_network = Module(new AlignmentNetwork)
  alignment_network.io.data_in := io.memory.r.data
  alignment_network.io.dmem_addr := lsu_reg_dmem_addr
  alignment_network.io.control := mem_access_control
  val dmem_rdata_delay = ShiftRegister(alignment_network.io.data_out, 1, true.B)
  io.out.bits.dmem_rdata := dmem_rdata_delay

  // Instantiate write_mask_gen
  val write_mask_gen = Module(new WriteMaskGenerator)
  write_mask_gen.io.dmem_addr := lsu_reg_dmem_addr
  write_mask_gen.io.control := mem_access_control
  write_mask_gen.io.dmem_wdata_raw := lsu_reg_rs2_data

  // State machine state definition
  val sIdle :: sPrepare :: sMemAccess :: sDone :: Nil = Enum(4)
  val state = RegInit(sIdle)

  // State machine logic
  switch(state) {
    is(sIdle) {
      //Clear
      isLoad := false.B
      isStore := false.B
      // Read channel
      io.memory.ar.valid := false.B
      io.memory.r.ready := false.B
      // Write channel
      io.memory.aw.valid := false.B
      io.memory.w.valid := false.B
      io.memory.b.ready := false.B
      // Handshake
      when(io.in.valid) {
        io.in.ready := true.B
        state := sPrepare
      }
    }

    is(sPrepare) {
        io.in.ready := true.B
        isLoad := opcode === OPCODE_LOAD
        isStore := opcode === OPCODE_STORE
        state := Mux(isLoad || isStore, sMemAccess, sDone)
    }

    is(sMemAccess) {
      // Handshake
      io.in.ready := false.B
      isLoad := opcode === OPCODE_LOAD
      isStore := opcode === OPCODE_STORE
      // Read channel
      when(isLoad) {
        io.memory.ar.valid := true.B
        when(io.memory.ar.ready) {
          io.memory.ar.addr := lsu_reg_dmem_addr
        }
        io.memory.r.ready := true.B
        when(io.memory.r.valid) {

          state := sDone
        }
      // Write channel
      }.elsewhen(isStore) {
        io.memory.aw.valid := true.B
        io.memory.w.valid := true.B
        when(io.memory.aw.ready && io.memory.w.ready) {
          io.memory.aw.addr := lsu_reg_dmem_addr
          io.memory.w.data := write_mask_gen.io.dmem_wdata
          io.memory.w.strb := write_mask_gen.io.wmask
        }
        // Ensure mem write request maintain one cycle
        io.memory.b.ready := true.B
        when(io.memory.b.valid) {
          state := sDone
        }
       }
    }

    is(sDone) {
      // Clear
      isLoad := false.B
      isStore := false.B
      // Handshake
      io.in.ready := false.B
      io.out.valid := true.B
      // Read channel
      io.memory.ar.valid := false.B
      io.memory.r.ready := false.B
      // Write channel
      io.memory.aw.valid := false.B
      io.memory.w.valid := false.B
      io.memory.b.ready := false.B
      when(io.out.ready) {
        state := sIdle
      }
    }
  }

  // Assign output signals
  io.out.bits.inst := lsu_reg_inst
  io.out.bits.pc := lsu_reg_pc
  io.out.bits.result := lsu_reg_result
  io.out.bits.wb_addr := lsu_reg_wb_addr

  // Debug signals assignment
  io.lsu_state_debug := state
  io.lsu_is_ld_or_st_debug := isLoad || isStore
  io.lsu_reg_inst_debug := lsu_reg_inst
  io.dmem_wdata_debug := write_mask_gen.io.dmem_wdata
  io.dmem_rdata_debug := io.out.bits.dmem_rdata
}

