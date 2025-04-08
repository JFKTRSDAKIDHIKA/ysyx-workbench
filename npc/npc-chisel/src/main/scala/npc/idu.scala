package npc

import chisel3._
import chisel3.util._
import common._
import common.constants.RISCVConstants 

class DecodedMessage extends Message {
    val wb_addr = Output(UInt(5.W))  
    val alu_op1 = Output(UInt(32.W))    
    val alu_op2 = Output(UInt(32.W))     
    val rs2_data = Output(UInt(32.W)) 
    val csr_rdata = Output(UInt(32.W))
}

class IDUIO extends Bundle {
    // Forward signals
    // Signals passed from IFU
    val in = Flipped(Decoupled(new Message))
    // Signals passed to EXU
    val out = Decoupled(new DecodedMessage)

    // Feedback signals from IDU and WBU
    val jump_reg_target = Output(UInt(32.W))
    val br_target = Output(UInt(32.W))
    val jmp_target = Output(UInt(32.W))
    val pc_sel = Output(UInt(3.W))
    val pc_csr = Output(UInt(32.W))

    // Interact with register file
    val rs1_data = Input(UInt(32.W))
    val rs2_data = Input(UInt(32.W))
    val rs1_addr = Output(UInt(5.W)) 
    val rs2_addr = Output(UInt(5.W))
}

class IDU extends Module with RISCVConstants{
    val io = IO(new IDUIO)

    // Pipeline registers
    val idu_reg_inst = RegEnable(io.in.bits.inst, io.in.fire)
    val idu_reg_pc = RegEnable(io.in.bits.pc, io.in.fire)

    // Set default values
    io.in.ready := false.B
    io.out.valid := false.B

    // State machine state definition
    val sIdle :: sDecode :: sDone :: Nil = Enum(3)
    val state = RegInit(sIdle)

    // State machine logic
    switch(state) {
      is(sIdle) {
        io.out.valid := false.B
        when(io.in.valid) {
          io.in.ready := true.B
          state := sDecode
        }
      }

      is(sDecode) {
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

    // Decode
    val wb_addr  = idu_reg_inst(RD_MSB,  RD_LSB)
    io.rs1_addr := idu_reg_inst(RS1_MSB, RS1_LSB)
    io.rs2_addr := idu_reg_inst(RS2_MSB,  RS2_LSB)

    // immediates
    val imm_i = idu_reg_inst(31, 20)
    val imm_s = Cat(idu_reg_inst(31, 25), idu_reg_inst(11, 7))
    val imm_b = Cat(idu_reg_inst(31), idu_reg_inst(7), idu_reg_inst(30, 25), idu_reg_inst(11, 8))
    val imm_u = idu_reg_inst(31, 12)
    val imm_j = Cat(idu_reg_inst(31), idu_reg_inst(19, 12), idu_reg_inst(20), idu_reg_inst(30, 21))

    // sign-extend immediates
    val imm_i_sext = Cat(Fill(20,imm_i(11)), imm_i)
    val imm_s_sext = Cat(Fill(20,imm_s(11)), imm_s)
    val imm_b_sext = Cat(Fill(19,imm_b(11)), imm_b, 0.U)
    val imm_u_sext = Cat(imm_u, Fill(12,0.U))
    val imm_j_sext = Cat(Fill(11,imm_j(19)), imm_j, 0.U)

    // Branch/Jump Target Calculation
    io.jump_reg_target := (io.rs1_data.asUInt + imm_i_sext.asUInt) & ~1.U(32.W) 
    io.br_target := idu_reg_pc + imm_b_sext
    io.jmp_target := idu_reg_pc + imm_j_sext 

    // Control signals
    val opcode = idu_reg_inst(OPCODE_MSB, OPCODE_LSB)
    val funct3 = idu_reg_inst(FUNCT3_MSB, FUNCT3_LSB)

    // Generate branch condition
    val br_eq = io.rs1_data === io.rs2_data 
    val br_lt = io.rs1_data.asSInt < io.rs2_data.asSInt 
    val br_ltu = io.rs1_data.asUInt < io.rs2_data.asUInt 

    // Mux for branch taken signal
    val branch_taken = MuxLookup(funct3, false.B)(Seq(
        FUNCT3_BEQ -> br_eq,
        FUNCT3_BNE -> !br_eq,
        FUNCT3_BLT -> br_lt,
        FUNCT3_BGE -> !br_lt,
        FUNCT3_BLTU -> br_ltu,
        FUNCT3_BGEU -> !br_ltu
    ))

    // CSR interface    
    val csr_instance = Module(new CSRFile)
    val csr_funct12 = idu_reg_inst(CSR_ADDR_MSB, CSR_ADDR_LSB)
    csr_instance.io.csr_addr := MuxLookup(funct3, 0.U)(Seq(
        FUNCT3_CSRRW -> csr_funct12,
        FUNCT3_CSRRS -> csr_funct12,
        FUNCT3_ECALL -> CSR_ADDR_MEPC
    ))
    csr_instance.io.csr_wdata := MuxLookup(funct3, 0.U)(Seq(
        FUNCT3_CSRRW -> io.rs1_data,
        FUNCT3_CSRRS -> (io.rs1_data | csr_instance.io.csr_rdata),
        FUNCT3_ECALL -> idu_reg_pc
    )) 
    csr_instance.io.csr_wen := RegNext(
      MuxLookup(opcode, false.B)(Seq(
        OPCODE_CSR -> MuxLookup(funct3, false.B)(Seq(
          FUNCT3_CSRRW -> true.B,
          FUNCT3_CSRRS -> true.B,
          FUNCT3_ECALL -> MuxLookup(csr_funct12, false.B)(Seq(
            FUNCT12_ECALL -> true.B,
            FUNCT12_MRET -> false.B
          ))
        ))
      ))
    )
    io.pc_csr := MuxLookup(funct3, PC_4)(Seq(
        FUNCT3_ECALL -> MuxLookup(csr_funct12, PC_4)(Seq(
            FUNCT12_ECALL -> csr_instance.io.csr_mtvec,
            FUNCT12_MRET  -> csr_instance.io.csr_mepc
        )),
    ))

    // pc_sel signal generation
    io.pc_sel := MuxLookup(opcode, PC_4)(Seq(
        OPCODE_JALR -> PC_JR,
        OPCODE_JAL  -> PC_J,
        OPCODE_BRANCH -> Mux(branch_taken, PC_BR, PC_4),
        OPCODE_CSR -> MuxLookup(funct3, PC_4)(Seq(
            FUNCT3_CSRRW -> PC_4,
            FUNCT3_CSRRS -> PC_4,
            FUNCT3_ECALL -> PC_CSR
        ))
    ))

    // Mux for alu_op1 and alu_op2 selection
    val alu_op1Sel = Wire(UInt(2.W))
    val alu_op2Sel = Wire(UInt(2.W))

    alu_op1Sel := MuxLookup(opcode, 0.U)(Seq(
        OPCODE_LUI    -> 1.U, // LUI
        OPCODE_AUIPC  -> 1.U, // AUIPC
        OPCODE_JALR   -> 0.U, // JALR
        OPCODE_JAL    -> 0.U, // JAL
        OPCODE_BRANCH -> 0.U, // Branch
        OPCODE_LOAD   -> 0.U, // LOAD
        OPCODE_STORE  -> 0.U, // STORE
        OPCODE_RTYPE  -> 0.U, // R-type
        OPCODE_ITYPE  -> 0.U  // I-type
    ))

    alu_op2Sel := MuxLookup(opcode, 0.U)(Seq(
        OPCODE_LUI    -> 0.U, // LUI
        OPCODE_AUIPC  -> 0.U, // AUIPC
        OPCODE_JALR   -> 0.U, // JALR
        OPCODE_JAL    -> 0.U, // JAL
        OPCODE_BRANCH -> 0.U, // Branch
        OPCODE_LOAD   -> 1.U, // LOAD
        OPCODE_STORE  -> 2.U, // STORE
        OPCODE_RTYPE  -> 3.U, // R-type
        OPCODE_ITYPE  -> 1.U  // I-type
    ))

    // Mux for alu_op1 and alu_op2
    val alu_op1 = MuxLookup(alu_op1Sel, 0.U)(Seq(
      0.U -> io.rs1_data,
      1.U -> imm_u_sext
    ))

    val alu_op2 = MuxLookup(alu_op2Sel, 0.U)(Seq(
        0.U -> idu_reg_pc,
        1.U -> imm_i_sext,
        2.U -> imm_s_sext,
        3.U -> io.rs2_data
    ))

    // Assign output signals
    io.out.bits.inst := idu_reg_inst
    io.out.bits.pc := idu_reg_pc
    io.out.bits.wb_addr := wb_addr
    io.out.bits.alu_op1 := alu_op1
    io.out.bits.alu_op2 := alu_op2
    io.out.bits.rs2_data := io.rs2_data
    io.out.bits.csr_rdata := csr_instance.io.csr_rdata
}
