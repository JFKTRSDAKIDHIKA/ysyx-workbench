package npc

import chisel3._
import chisel3.util._
import common._
import common.constants.RISCVConstants 

class WBU_IO extends Bundle {
  // Forward signals
  // Signals passed from LSU
  val in = Flipped(Decoupled(new LoadStoreMessage))

  // Register file interface
  val wb_data = Output(UInt(32.W)) 
  val wb_addr = Output(UInt(5.W))         
  val wb_wen = Output(Bool())         

  // Feedback signals (WBU -> IFU)
  val pc_wen = Output(Bool())

  // Debug signals
  val wbu_state_debug = Output(UInt(2.W))
  val wb_data_debug = Output(UInt(32.W))
  val wb_wen_debug = Output(Bool())
  val wb_sel_debug = Output(UInt(2.W))
  val wbu_reg_dmem_rdata_debug = Output(UInt(32.W))
}

class WBU extends Module with RISCVConstants{
  val io = IO(new WBU_IO)

  // Set default values
  io.in.ready := false.B
  io.wb_data := 0.U
  io.wb_addr := 0.U
  io.wb_wen := false.B
  io.wbu_state_debug := 0.U

  // Internal state machine state declaration
  val sIdle :: sWB :: sDone :: Nil = Enum(3)
  val state = RegInit(sIdle)
  
  // State machine logic
  switch(state) {
    is(sIdle) {
      io.in.ready := false.B
      when(io.in.valid) {
        io.in.ready := true.B
        state := sWB
      }
    }

    is(sWB) {
      io.in.ready := false.B
      state := sDone
    }

    is(sDone) {
      io.in.ready := false.B
      state := sIdle
    }
  }

  // Pipeline registers
  val wbu_reg_inst = RegEnable(io.in.bits.inst, io.in.fire)
  val wbu_reg_pc = RegEnable(io.in.bits.pc, io.in.fire)
  val wbu_reg_result = RegEnable(io.in.bits.result, io.in.fire)
  val wbu_reg_dmem_rdata = RegEnable(io.in.bits.dmem_rdata, io.in.fire)
  val wbu_reg_wb_addr = RegEnable(io.in.bits.wb_addr, io.in.fire)

  // Control signal
  val opcode = wbu_reg_inst(OPCODE_MSB, OPCODE_LSB)
  val funct3 = wbu_reg_inst(FUNCT3_MSB, FUNCT3_LSB)
  val funct7 = wbu_reg_inst(FUNCT7_MSB, FUNCT7_LSB)

  // PC + 4
  val pc_plus4 = wbu_reg_pc + 4.U

  // Write back select signal generation
  val wb_sel = Wire(UInt(2.W))
  wb_sel := MuxLookup(opcode, 0.U)(Seq(
    OPCODE_LUI    -> 2.U, // LUI
    OPCODE_AUIPC  -> 2.U, // AUIPC
    OPCODE_RTYPE  -> 2.U, // R-type
    OPCODE_ITYPE  -> 2.U, // I-type
    OPCODE_LOAD   -> 3.U, // LOAD
    OPCODE_BRANCH -> 0.U, // Branch
    OPCODE_CSR    -> 0.U, // CSR
    OPCODE_JAL    -> 1.U, // JAL
    OPCODE_JALR   -> 1.U  // JALR
  ))

  // Write back data selection
  val wb_data = Wire(UInt(32.W))
  wb_data := MuxLookup(wb_sel, 0.U)(Seq(
    0.U -> 0.U,             
    1.U -> pc_plus4,        
    2.U -> wbu_reg_result,     
    3.U -> wbu_reg_dmem_rdata   
  ))

  // Register file write enable signal generation
  val wb_wen = Wire(Bool())
  wb_wen := MuxLookup(opcode, false.B)(Seq(
    OPCODE_LUI    -> true.B, // LUI
    OPCODE_AUIPC  -> true.B, // AUIPC
    OPCODE_RTYPE  -> true.B, // R-type
    OPCODE_ITYPE  -> true.B, // I-type
    OPCODE_LOAD   -> true.B, // LOAD
    OPCODE_JAL    -> true.B, // JAL
    OPCODE_JALR   -> true.B  // JALR
  ))

  // Assign output signals
  io.wb_data := wb_data
  io.wb_addr := wbu_reg_wb_addr
  io.wb_wen := wb_wen && (state === sWB)
  io.pc_wen := (state === sDone)

  // Debug signals assignment
  io.wbu_state_debug := state
  io.wb_data_debug := wb_data
  io.wb_wen_debug := io.wb_wen
  io.wb_sel_debug := wb_sel
  io.wbu_reg_dmem_rdata_debug := wbu_reg_dmem_rdata
}


