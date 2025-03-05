package npc

import chisel3._
import chisel3.util._

import common._
import common.constants.RISCVConstants 

class ExecuteMessage extends Message {
    val dmem_addr = UInt(32.W)       
    val result = UInt(32.W)         
    val rs2_data = UInt(32.W)     
    val wb_addr = UInt(5.W)       
}

class EXUIO extends Bundle {
  // Forward signals
  // Signals passed from IDU
  val in = Flipped(Decoupled(new DecodedMessage))
  // Signals passed to LSU
  val out = Decoupled(new ExecuteMessage)
}

class EXU extends Module with RISCVConstants {
  val io = IO(new EXUIO)

  // State machine state definition
  val sIdle :: sExecute :: sDone :: Nil = Enum(3)
  val state = RegInit(sIdle)

  // Set default values
  io.in.ready := false.B
  io.out.valid := false.B

  // State machine logic
  switch(state) {
    is(sIdle) {
      when(io.in.valid) {
        io.in.ready := true.B
        io.out.valid := false.B
        state := sExecute
      }
    }

    is(sExecute) {
      io.in.ready := false.B
      io.out.valid := false.B
      state := sDone
    }

    is(sDone) {
      io.in.ready := false.B
      io.out.valid := true.B
      when(io.out.ready) {
        state := sIdle
      }
    }
  }

  // Pipeline registers
  val exu_reg_inst = RegEnable(io.in.bits.inst, io.in.fire)
  val exu_reg_pc = RegEnable(io.in.bits.pc, io.in.fire)
  val exu_reg_rs2_data = RegEnable(io.in.bits.rs2_data, io.in.fire)
  val exu_reg_wb_addr = RegEnable(io.in.bits.wb_addr, io.in.fire)

  // ALU oprand
  val alu_op1 = io.in.bits.alu_op1
  val alu_op2 = io.in.bits.alu_op2

  // ALU operation selection
  val alu_op = Wire(UInt(5.W))

  // Control logic
  val opcode = exu_reg_inst(OPCODE_MSB, OPCODE_LSB)
  val funct3 = exu_reg_inst(FUNCT3_MSB, FUNCT3_LSB)
  val funct7 = exu_reg_inst(FUNCT7_MSB, FUNCT7_LSB)

  alu_op := MuxLookup(opcode, 0.U)(Seq(
    OPCODE_LUI   -> ALU_COPY1, // LUI: PASS_A
    OPCODE_AUIPC -> ALU_ADD, // AUIPC: ADD
    OPCODE_LOAD  -> ALU_ADD, // LOAD: ADD
    OPCODE_STORE -> ALU_ADD, // STORE: ADD
    OPCODE_ITYPE -> MuxLookup(funct3, 0.U)(Seq( // I-type
      0.U -> ALU_ADD, // ADD
      1.U -> ALU_SLL, // SLL
      2.U -> ALU_SLT, // SLT
      3.U -> ALU_SLTU, // SLTU
      4.U -> ALU_XOR, // XOR
      5.U -> Mux(funct7 === 0.U, ALU_SRL, ALU_SRA), // SRL/SRA
      6.U -> ALU_OR, // OR
      7.U -> ALU_AND // AND
    )),
    OPCODE_RTYPE -> MuxLookup(funct3, 0.U)(Seq( // R-type
      0.U -> Mux(funct7 === 0.U, ALU_ADD, ALU_SUB), // ADD/SUB
      1.U -> ALU_SLL, // SLL
      2.U -> ALU_SLT, // SLT
      3.U -> ALU_SLTU, // SLTU
      4.U -> ALU_XOR, // XOR
      5.U -> Mux(funct7 === 0.U, ALU_SRL, ALU_SRA), // SRL/SRA
      6.U -> ALU_OR, // OR
      7.U -> ALU_AND // AND
    ))
  ))

  // Instantiate ALU
  val alu_instance = Module(new ALU)
  alu_instance.io.a := alu_op1
  alu_instance.io.b := alu_op2
  alu_instance.io.aluOp := alu_op
  val alu_result = alu_instance.io.result

  // Assign output signals
  io.out.bits.inst := exu_reg_inst
  io.out.bits.pc := exu_reg_pc
  io.out.bits.dmem_addr := alu_result
  io.out.bits.result := alu_result
  io.out.bits.rs2_data := exu_reg_rs2_data
  io.out.bits.wb_addr := exu_reg_wb_addr
}


