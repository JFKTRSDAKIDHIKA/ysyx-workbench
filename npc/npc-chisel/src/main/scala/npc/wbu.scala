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

  // Feedback signals 
  val pc_wen = Output(Bool())
  val lsu_axi_resp_err = Input(Bool())

  // Debug signals
  val wbu_state_debug = Output(UInt(2.W))
  val wb_data_debug = Output(UInt(32.W))
  val wb_wen_debug = Output(Bool())
  val wb_sel_debug = Output(UInt(2.W))
  val wbu_reg_dmem_rdata_debug = Output(UInt(32.W))
  val wbu_reg_inst_debug = Output(UInt(32.W))
  val wbu_reg_pc_debug = Output(UInt(32.W))
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
  val wbu_reg_csr_rdata = RegEnable(io.in.bits.csr_rdata, io.in.fire)

  // Control signal
  val opcode = wbu_reg_inst(OPCODE_MSB, OPCODE_LSB)
  val funct3 = wbu_reg_inst(FUNCT3_MSB, FUNCT3_LSB)
  val funct7 = wbu_reg_inst(FUNCT7_MSB, FUNCT7_LSB)

  // PC + 4
  val pc_plus4 = wbu_reg_pc + 4.U

  // Write back select signal generation
  val wb_sel = Wire(UInt(3.W))
  wb_sel := MuxLookup(opcode, WB_X)(Seq(
    OPCODE_LUI    -> WB_ALU, // LUI
    OPCODE_AUIPC  -> WB_ALU, // AUIPC
    OPCODE_RTYPE  -> WB_ALU, // R-type
    OPCODE_ITYPE  -> WB_ALU, // I-type
    OPCODE_LOAD   -> WB_MEM, // LOAD
    OPCODE_BRANCH -> WB_X, // Branch
    OPCODE_CSR    -> WB_CSR, // CSR
    OPCODE_JAL    -> WB_PC4, // JAL
    OPCODE_JALR   -> WB_PC4  // JALR
  ))

  // Write back data selection
  val wb_data = Wire(UInt(32.W))
  wb_data := MuxLookup(wb_sel, WB_X)(Seq(
    WB_X   -> 0.U,             
    WB_PC4 -> pc_plus4,        
    WB_ALU -> wbu_reg_result,     
    WB_MEM -> wbu_reg_dmem_rdata,
    WB_CSR -> wbu_reg_csr_rdata
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
    OPCODE_JALR   -> true.B, // JALR
    OPCODE_CSR    -> true.B  // CSR
  ))

  // Assign output signals
  io.wb_data := wb_data
  io.wb_addr := wbu_reg_inst(RD_MSB,  RD_LSB)
  io.wb_wen := wb_wen && (state === sWB)
  io.pc_wen := (state === sDone)

  // Handle ebreak instruction and lsu memory access error
  val ebreakHandler = Module(new EBreakHandler)
  ebreakHandler.io.inst := wbu_reg_inst
  ebreakHandler.io.lsu_axi_resp_err := io.lsu_axi_resp_err

  // Debug signals assignment
  io.wbu_state_debug := state
  io.wb_data_debug := wb_data
  io.wb_wen_debug := io.wb_wen
  io.wb_sel_debug := wb_sel
  io.wbu_reg_dmem_rdata_debug := wbu_reg_dmem_rdata
  io.wbu_reg_inst_debug := wbu_reg_inst
  io.wbu_reg_pc_debug := wbu_reg_pc
}

class EBreakHandler extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val inst = Input(UInt(32.W)) 
    val lsu_axi_resp_err = Input(Bool())
  })

  setInline("EBreakHandler.v",
    """
      |
      |module EBreakHandler(
      |    input wire [31:0] inst,
      |    input wire        lsu_axi_resp_err
      |);
      |
      |import "DPI-C" function void simulation_exit();
      |
      |    always @(*) begin
      |        if (inst == 32'h00100073) begin
      |            $display("EBREAK: Simulation exiting...");
      |            simulation_exit(); // 通知仿真环境结束
      |        end
      |    end
      |
      |    always @(*) begin
      |        if (lsu_axi_resp_err == 1'b1) begin
      |            $display("LSU memory access error...");
      |            simulation_exit(); // 通知仿真环境结束
      |        end
      |    end
      |
      |endmodule
    """.stripMargin)
}