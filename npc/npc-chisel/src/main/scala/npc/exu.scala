package npc

import chisel3._
import chisel3.util._

import common._
import common.constants.RISCVConstants 

class ExecuteMessage extends Message {
    val dmem_addr = UInt(32.W)       
    val result = UInt(32.W)         
    val rs2_data = UInt(32.W)     
    val csr_rdata = UInt(32.W)
}

class EXUIO extends Bundle {
  // Forward signals
  // Signals passed from IDU
  val in = Flipped(Decoupled(new DecodedMessage))
  // Signals passed to LSU
  val out = Decoupled(new ExecuteMessage)
  // Signals passed back to IFU
  val pc_redirect_target = Output(UInt(32.W))
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
  val exu_reg_csr_rdata = RegEnable(io.in.bits.csr_rdata, io.in.fire)

  // Control logic
  val opcode = exu_reg_inst(OPCODE_MSB, OPCODE_LSB)
  val funct3 = exu_reg_inst(FUNCT3_MSB, FUNCT3_LSB)
  val funct7 = exu_reg_inst(FUNCT7_MSB, FUNCT7_LSB)

  // ALU oprand
  val alu_op1 = io.in.bits.alu_op1
  val alu_op2 = io.in.bits.alu_op2

  // ALU operation selection
  val alu_op = Wire(UInt(5.W))

  alu_op := MuxLookup(opcode, 0.U)(Seq(
    OPCODE_LUI   -> ALU_COPY1, // LUI: PASS_A
    OPCODE_AUIPC -> ALU_ADD, // AUIPC: ADD
    OPCODE_LOAD  -> ALU_ADD, // LOAD: ADD
    OPCODE_STORE -> ALU_ADD, // STORE: ADD
    OPCODE_ITYPE -> MuxLookup(funct3, ALU_ADD)(Seq( // I-type
      FUNCT3_ADDI -> ALU_ADD, // ADD
      FUNCT3_SLLI -> ALU_SLL, // SLL
      FUNCT3_SLTI -> ALU_SLT, // SLT
      FUNCT3_SLTIU -> ALU_SLTU, // SLTU
      FUNCT3_XORI -> ALU_XOR, // XOR
      FUNCT3_SRLI_SRAI -> MuxLookup(funct7, ALU_SRL)(Seq(
        FUNCT7_SRLI -> ALU_SRL,
        FUNCT7_SRAI -> ALU_SRA
      )), // SRL/SRA
      FUNCT3_ORI -> ALU_OR, // OR
      FUNCT3_ANDI -> ALU_AND // AND
    )),
    OPCODE_RTYPE -> MuxLookup(funct3, ALU_ADD)(Seq( // R-type
      FUNCT3_ADD_SUB -> MuxLookup(funct7, ALU_ADD)(Seq(
          FUNCT7_ADD -> ALU_ADD,
          FUNCT7_SUB -> ALU_SUB
      )),
      FUNCT3_SLL -> ALU_SLL, // SLL
      FUNCT3_SLT -> ALU_SLT, // SLT
      FUNCT3_SLTU -> ALU_SLTU, // SLTU
      FUNCT3_XOR -> ALU_XOR, // XOR
      FUNCT3_SRL_SRA -> MuxLookup(funct7, ALU_SRL)(Seq( // SRL/SRA
        FUNCT7_SRL -> ALU_SRL,
        FUNCT7_SRA -> ALU_SRA
      )),
      FUNCT3_OR -> ALU_OR, // OR
      FUNCT3_AND -> ALU_AND // AND
    )),
    // Address calculation for control instructions reuses the ALU adder
    OPCODE_JAL -> ALU_ADD,
    OPCODE_JALR -> ALU_ADD,
    OPCODE_BRANCH -> ALU_ADD
  ))

  // Instantiate ALU module
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
  io.out.bits.csr_rdata := exu_reg_csr_rdata
  io.pc_redirect_target := alu_result
}


