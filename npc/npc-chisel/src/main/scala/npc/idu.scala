package npc

import chisel3._
import chisel3.util._
import common._
import common.constants.RISCVConstants 

class DecodedMessage extends Message {
    val alu_op1 = Output(UInt(32.W))    
    val alu_op2 = Output(UInt(32.W))     
    val rs2_data = Output(UInt(32.W)) 
    val csr_rdata = Output(UInt(32.W))
    val branch_taken = Output(Bool())
}

class IDUIO extends Bundle {
    // Forward signals
    // Signals passed from IFU
    val in = Flipped(Decoupled(new ICacheRespBundle))
    // Signals passed to EXU
    val out = Decoupled(new DecodedMessage)

    // Feedback signals from IDU and WBU
    // val pc_sel = Output(UInt(3.W))
    // val pc_csr = Output(UInt(32.W))

    // Bypassed result from EXU and LSU to resolve data hazards in IDU stage.
    val exuResultBypass = Input(UInt(32.W))
    val wb_addr_exu = Input(UInt(5.W))
    val bypassedLsuData = Input(UInt(32.W))
    val wb_addr_lsu = Input(UInt(5.W))
    // Read after Load hazard
    val ex_is_load  = Input(Bool())
    val lsu_finish = Input(Bool())

    // Signals to handle control hazard
    val redirect_valid = Input(Bool())  

    // Interact with register file
    val rs1_data = Input(UInt(32.W))
    val rs2_data = Input(UInt(32.W))
    val rs1_addr = Output(UInt(5.W)) 
    val rs2_addr = Output(UInt(5.W))

    // Debug signals
    val idu_state_debug = Output(UInt(2.W))
}

class IDU extends Module with RISCVConstants{
    val io = IO(new IDUIO)

    // Pipeline registers
    val idu_reg_inst = RegEnable(io.in.bits.inst, io.in.fire)
    val idu_reg_pc = RegEnable(io.in.bits.pc, io.in.fire)

    // Set default values
    io.in.ready := false.B
    io.out.valid := false.B

    // Decode
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

    // Control signals
    val opcode = idu_reg_inst(OPCODE_MSB, OPCODE_LSB)
    val funct3 = idu_reg_inst(FUNCT3_MSB, FUNCT3_LSB)

    // Forwarding condition check
    val rs1_conflict_exu = (io.rs1_addr =/= 0.U) && (io.rs1_addr === io.wb_addr_exu)
    val rs2_conflict_exu = (io.rs2_addr =/= 0.U) && (io.rs2_addr === io.wb_addr_exu)
    val rs1_conflict_lsu = (io.rs1_addr =/= 0.U) && (io.rs1_addr === io.wb_addr_lsu)
    val rs2_conflict_lsu = (io.rs2_addr =/= 0.U) && (io.rs2_addr === io.wb_addr_lsu)
    val load_use_hazard = io.ex_is_load && (rs1_conflict_exu || rs2_conflict_exu)

    // Avoid combinational cycle
    val exuResultReg = RegNext(io.exuResultBypass)
    val lsuResultReg = RegNext(io.bypassedLsuData)

    // Read register values from rf and bypass signals
    val rs1_data = MuxCase(io.rs1_data, Seq(
      (load_use_hazard && rs1_conflict_lsu) -> lsuResultReg,
      rs1_conflict_exu -> exuResultReg,
      rs1_conflict_lsu -> lsuResultReg
    ))

    val rs2_data = MuxCase(io.rs2_data, Seq(
      (load_use_hazard && rs2_conflict_lsu) -> lsuResultReg,
      rs2_conflict_exu -> exuResultReg,
      rs2_conflict_lsu -> lsuResultReg
    ))

    // Generate branch condition
    val br_eq = rs1_data === rs2_data 
    val br_lt = rs1_data.asSInt < rs2_data.asSInt 
    val br_ltu = rs1_data.asUInt < rs2_data.asUInt 

    // Mux for branch taken signal
    io.out.bits.branch_taken := MuxLookup(funct3, false.B)(Seq(
        FUNCT3_BEQ -> br_eq,
        FUNCT3_BNE -> !br_eq,
        FUNCT3_BLT -> br_lt,
        FUNCT3_BGE -> !br_lt,
        FUNCT3_BLTU -> br_ltu,
        FUNCT3_BGEU -> !br_ltu
    ))

    // CSR interface    
    val csr_instance = Module(new CSRFile)
    csr_instance.io.csr_addr := MuxLookup(funct3, 0.U)(Seq(
        FUNCT3_CSRRW -> imm_i,
        FUNCT3_CSRRS -> imm_i,
        FUNCT3_ECALL -> CSR_ADDR_MEPC
    ))
    csr_instance.io.csr_wdata := MuxLookup(funct3, 0.U)(Seq(
        FUNCT3_CSRRW -> rs1_data,
        FUNCT3_CSRRS -> (rs1_data | csr_instance.io.csr_rdata),
        FUNCT3_ECALL -> idu_reg_pc
    )) 
    csr_instance.io.csr_wen := MuxLookup(opcode, false.B)(Seq(
        OPCODE_CSR -> MuxLookup(funct3, false.B)(Seq(
        FUNCT3_CSRRW -> true.B,
        FUNCT3_CSRRS -> true.B,
        FUNCT3_ECALL -> MuxLookup(imm_i, false.B)(Seq(
          FUNCT12_ECALL -> true.B,
          FUNCT12_MRET -> false.B
        ))
      ))
    ))
    /*
    io.pc_csr := MuxLookup(funct3, PC_4)(Seq(
        FUNCT3_ECALL -> MuxLookup(imm_i, PC_4)(Seq(
            FUNCT12_ECALL -> csr_instance.io.csr_mtvec,
            FUNCT12_MRET  -> csr_instance.io.csr_mepc
        )),
    ))
    */

    /*
    // pc_sel signal generation
    io.pc_sel := MuxLookup(opcode, PC_4)(Seq(
        OPCODE_JALR -> PC_REDIRECT,
        OPCODE_JAL  -> PC_REDIRECT,
        OPCODE_BRANCH -> Mux(branch_taken, PC_REDIRECT, PC_4),
        OPCODE_CSR -> MuxLookup(funct3, PC_4)(Seq(
            FUNCT3_CSRRW -> PC_4,
            FUNCT3_CSRRS -> PC_4,
            FUNCT3_ECALL -> PC_CSR
        ))
    ))
    */

    // Mux for alu_op1 and alu_op2 selection
    val alu_op1Sel = Wire(UInt(2.W))
    val alu_op2Sel = Wire(UInt(2.W))

    alu_op1Sel := MuxLookup(opcode, 0.U)(Seq(
        OPCODE_LUI    -> 1.U, // LUI
        OPCODE_AUIPC  -> 1.U, // AUIPC
        OPCODE_JALR   -> 0.U, // JALR
        OPCODE_JAL    -> 3.U, // JAL
        OPCODE_BRANCH -> 2.U, // Branch
        OPCODE_LOAD   -> 0.U, // LOAD
        OPCODE_STORE  -> 0.U, // STORE
        OPCODE_RTYPE  -> 0.U, // R-type
        OPCODE_ITYPE  -> 0.U  // I-type
    ))

    alu_op2Sel := MuxLookup(opcode, 0.U)(Seq(
        OPCODE_LUI    -> 0.U, // LUI
        OPCODE_AUIPC  -> 0.U, // AUIPC
        OPCODE_JALR   -> 1.U, // JALR
        OPCODE_JAL    -> 0.U, // JAL
        OPCODE_BRANCH -> 0.U, // Branch
        OPCODE_LOAD   -> 1.U, // LOAD
        OPCODE_STORE  -> 2.U, // STORE
        OPCODE_RTYPE  -> 3.U, // R-type
        OPCODE_ITYPE  -> 1.U  // I-type
    ))

    // Mux for alu_op1 and alu_op2
    val alu_op1 = MuxLookup(alu_op1Sel, 0.U)(Seq(
      0.U -> rs1_data,
      1.U -> imm_u_sext,
      2.U -> imm_b_sext,
      3.U -> imm_j_sext
    ))

    val alu_op2 = MuxLookup(alu_op2Sel, 0.U)(Seq(
        0.U -> idu_reg_pc,
        1.U -> imm_i_sext,
        2.U -> imm_s_sext,
        3.U -> rs2_data,
    ))

    // State machine state definition
    val sIdle :: sDecode :: sStall :: sDone :: Nil = Enum(4)
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
          when (load_use_hazard) {
            state := sStall
          }.otherwise {
            state := sDone
          }
      }

      is(sStall) {
        when (io.lsu_finish) {
          state := sDone
        }
      }

      is(sDone) {
        io.in.ready := false.B
        io.out.valid := true.B
          when(io.out.ready) {
            state := sIdle
          }
      }
    }

    // Assign output signals
    io.out.bits.inst := Mux(io.redirect_valid, BUBBLE, idu_reg_inst)  // Insert Bubble when mispredict next pc!
    io.out.bits.pc := idu_reg_pc
    io.out.bits.alu_op1 := alu_op1
    io.out.bits.alu_op2 := alu_op2
    io.out.bits.rs2_data := rs2_data
    io.out.bits.csr_rdata := csr_instance.io.csr_rdata
    io.idu_state_debug := state
}
