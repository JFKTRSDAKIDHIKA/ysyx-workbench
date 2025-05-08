package npc

import chisel3._
import chisel3.util._

import common._
import common.constants.RISCVConstants 

class ExecuteMessage extends Message {
    val dmem_addr = UInt(32.W)       
    val result = UInt(32.W)         
    val rs2_data = UInt(32.W)     
}

class EXUIO extends Bundle {
  // Forward signals
  // Signals passed from IDU
  val in = Flipped(Decoupled(new DecodedMessage))
  // Signals passed to LSU
  val out = Decoupled(new ExecuteMessage)
  // Signals passed back to IFU
  val pc_redirect_target = Output(UInt(32.W))
  // Execution Unit's result forwarded to bypass pipeline hazards
  val exuResultBypass = Output(UInt(32.W))
  val wb_addr_exu = Output(UInt(5.W))
  val ex_is_load  = Output(Bool())
  // Signals to handle control hazard
  val redirect_valid = Output(Bool())  
  // Degus signals
  val jump_mispredict_debug = Output(Bool())
  val exu_state_debug = Output(UInt(2.W))
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
  val exu_reg_rs1_data = RegEnable(io.in.bits.rs1_data, io.in.fire)
  val exu_reg_rs2_data = RegEnable(io.in.bits.rs2_data, io.in.fire)
  val exu_reg_branch_taken = RegEnable(io.in.bits.branch_taken, io.in.fire)
  // ALU oprand
  val alu_op1 = RegEnable(io.in.bits.alu_op1, io.in.fire)
  val alu_op2 = RegEnable(io.in.bits.alu_op2, io.in.fire)

  // Control logic
  val opcode = exu_reg_inst(OPCODE_MSB, OPCODE_LSB)
  val funct3 = exu_reg_inst(FUNCT3_MSB, FUNCT3_LSB)
  val funct7 = exu_reg_inst(FUNCT7_MSB, FUNCT7_LSB)
  val imm_i = exu_reg_inst(31, 20)

  // Decode CSR instruction type
  val is_csr_op  = opcode === OPCODE_CSR
  val is_csrrw   = is_csr_op && funct3 === FUNCT3_CSRRW
  val is_csrrs   = is_csr_op && funct3 === FUNCT3_CSRRS
  val is_ecall   = is_csr_op && funct3 === FUNCT3_ECALL && imm_i === FUNCT12_ECALL
  val is_mret    = is_csr_op && funct3 === FUNCT3_ECALL && imm_i === FUNCT12_MRET
  val is_csr_read = is_csrrw || is_csrrs
  val is_exception_flow = is_ecall || is_mret

  // Handle control hazard
  val is_jal   = opcode === OPCODE_JAL
  val is_jalr  = opcode === OPCODE_JALR
  val is_branch = opcode === OPCODE_BRANCH
  val is_store = opcode === OPCODE_STORE
  val is_control_flow = is_jal || is_jalr || (is_branch && exu_reg_branch_taken) || is_exception_flow
  val pc_plus_4 = exu_reg_pc + 4.U
  val jump_mispredict = is_control_flow && (io.pc_redirect_target =/= pc_plus_4)

  // Write destination in EXU stage (branch and store instructions do not write back!)
  io.wb_addr_exu := Mux(is_branch || is_store, 0.U(5.W), exu_reg_inst(RD_MSB,  RD_LSB))

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

  // Generate CSR command signal
  val csr_cmd = WireDefault(CSR_CMD_NOP)
  when (is_csrrw) { csr_cmd := CSR_CMD_RW }
  when (is_csrrs) { csr_cmd := CSR_CMD_RS }
  when (is_ecall) { csr_cmd := CSR_CMD_RW } // ecall will write mepc
  when (is_mret)  { csr_cmd := CSR_CMD_NOP } // handled separately

  // Generate CSR interface values
  val csr_raddr = Wire(UInt(12.W))
  val csr_waddr = Wire(UInt(12.W))
  val csr_wdata = Wire(UInt(32.W))
  val csr_wen = Wire(Bool())

  csr_waddr := Mux(is_ecall, CSR_ADDR_MEPC, imm_i)
  csr_raddr := MuxCase(0.U, Seq(
    is_csrrw -> imm_i,
    is_csrrs -> imm_i,
    is_ecall -> CSR_ADDR_MTVEC,
    is_mret ->  CSR_ADDR_MEPC
  ))
  csr_wdata := MuxCase(0.U, Seq(
    is_csrrw -> exu_reg_rs1_data,
    is_csrrs -> exu_reg_rs1_data,
    is_ecall -> exu_reg_pc
  ))
  csr_wen := is_csrrw || is_csrrs || is_ecall

  // Connect to CSR module
  val csr_file = Module(new CSRFile)
  csr_file.io.csr_waddr := csr_waddr
  csr_file.io.csr_raddr := csr_raddr
  csr_file.io.csr_wdata := csr_wdata
  csr_file.io.csr_wen := csr_wen
  csr_file.io.csr_cmd := csr_cmd

  // Assign output signals
  io.out.bits.inst := exu_reg_inst
  io.out.bits.pc := exu_reg_pc
  io.out.bits.dmem_addr := alu_result
  io.out.bits.result := Mux(is_csr_read, csr_file.io.csr_rdata, alu_result)
  io.out.bits.rs2_data := exu_reg_rs2_data
  io.pc_redirect_target := Mux(is_exception_flow, csr_file.io.csr_rdata, alu_result)
  io.exuResultBypass := alu_result
  io.ex_is_load := (opcode === OPCODE_LOAD)
  io.redirect_valid := jump_mispredict
  io.jump_mispredict_debug := jump_mispredict
  io.exu_state_debug := state
}


