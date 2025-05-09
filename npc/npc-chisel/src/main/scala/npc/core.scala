package npc

import chisel3._
import chisel3.util._
import common._
import common.constants.RISCVConstants 
import _root_.circt.stage.{ChiselStage, FirtoolOption}

class Core extends Module with RISCVConstants {
    val io = IO(new Bundle {
        // AXI4
        val master = new AXI4IO
        val slave = Flipped(new AXI4IO)

        // External interrupt
        val interrupt = Input(Bool())

        // Debug signals
        // ifu
        val pc_debug = Output(UInt(32.W))
        val inst_debug = Output(UInt(32.W))
        val ifu_state_debug = Output(UInt(3.W))
        // idu
        val idu_state_debug = Output(UInt(2.W))
        // exu
        val jump_mispredict_debug = Output(Bool())
        val exu_state_debug = Output(UInt(2.W))
        val perf_jump_mispredict_count = Output(UInt(64.W))
        // lsu
        val lsu_state_debug = Output(UInt(3.W))
        val lsu_is_ld_or_st_debug = Output(Bool())
        val lsu_reg_inst_debug = Output(UInt(32.W))
        val dmem_wdata_debug = Output(UInt(32.W))
        val dmem_rdata_debug = Output(UInt(32.W))
        val lsu_reg_dmem_addr_debug = Output(UInt(32.W))
        val lsu_memory_ar_size = Output(UInt(3.W))
        val lsu_reg_pc_debug = Output(UInt(32.W))
        // wbu
        val wbu_state_debug = Output(UInt(2.W))
        val wb_data_debug = Output(UInt(32.W))
        val wb_wen_debug = Output(Bool())
        val wb_sel_debug = Output(UInt(2.W))
        val wbu_reg_dmem_rdata_debug = Output(UInt(32.W))
        val wbu_reg_inst_debug = Output(UInt(32.W))
        val wbu_reg_pc_debug = Output(UInt(32.W))
        // Arbiter
        val Arbiter_state_debug = Output(UInt(2.W))
        // ICache
        val icache_state_debug = Output(UInt(3.W))
        val icache_miss_count = Output(UInt(64.W)) 
    })

    // Set AXI4 default values
    AXI4Defaults(io.master)
    AXI4FlippedDefaults(io.slave)

    // Module instantiation
    val ifu = Module(new IFU)
    implicit val icacheParams = DefaultICacheParams
    val ICache = Module(new ICache)
    val idu = Module(new IDU)
    val exu = Module(new EXU)
    val lsu = Module(new LSU)
    val wbu = Module(new WBU)
    val regfile = Module(new RegisterFile)

    // Forward signals connection
    StageConnect(ifu.io.out, ICache.io.in) // IFU -> ICache
    StageConnect(ICache.io.out, idu.io.in) // ICache -> IDU
    StageConnect(idu.io.out, exu.io.in)    // IDU -> EXU
    StageConnect(exu.io.out, lsu.io.in)    // EXU -> LSU
    StageConnect(lsu.io.out, wbu.io.in)    // LSU -> WBU

    // Register file interface 
    regfile.io.clk      := clock
    regfile.io.rs1_addr := idu.io.rs1_addr
    regfile.io.rs2_addr := idu.io.rs2_addr
    regfile.io.rd_addr  := wbu.io.wb_addr
    regfile.io.rd_data  := wbu.io.wb_data
    regfile.io.wen      := wbu.io.wb_wen

    idu.io.rs1_data := regfile.io.rs1_data
    idu.io.rs2_data := regfile.io.rs2_data

    // Feedback signals
    // EXU -> IFU
    ifu.io.redirect_target := exu.io.pc_redirect_target
    // LSU -> WBU
    wbu.io.lsu_axi_resp_err := lsu.io.lsu_axi_resp_err

    // Memory interface
    // Module instantiation
    val arbiter = Module(new MemoryArbiter)
    // Connect arbiter to ifu, lsu.
    arbiter.io.ifu <> ICache.io.memory
    arbiter.io.lsu <> lsu.io.memory
    arbiter.io.ifu_handshake <> ICache.io.arbiter
    arbiter.io.lsu_handshake <> lsu.io.arbiter
    // Connect xbar to clint and arbiter.
    val xbar = Module(new Xbar)
    val clint = Module(new clint)
    xbar.io.in <> arbiter.io.axi
    xbar.io.clint <> clint.io.in
    xbar.io.soc <> io.master

    // Pipeline hazard resolution signals connection
    ifu.io.redirect_valid := exu.io.redirect_valid
    ICache.io.redirect_valid := exu.io.redirect_valid
    idu.io.exuResultBypass := exu.io.exuResultBypass
    idu.io.wb_addr_exu := exu.io.wb_addr_exu
    idu.io.ex_is_load := exu.io.ex_is_load
    idu.io.bypassedLsuData := lsu.io.bypassedLsuData
    idu.io.wb_addr_lsu := lsu.io.wb_addr_lsu
    idu.io.redirect_valid := exu.io.redirect_valid
    idu.io.lsu_finish := lsu.io.lsu_finish

    // Handle fence.i inst
    ICache.io.fenceIEnable := exu.io.fenceIEnable

    // Debus signals
    // ifu
    io.pc_debug := ifu.io.pc_debug
    io.inst_debug := 0.U
    io.ifu_state_debug := ifu.io.ifu_state_debug
    // idu
    io.idu_state_debug := idu.io.idu_state_debug
    // exu
    io.jump_mispredict_debug := exu.io.jump_mispredict_debug
    io.exu_state_debug := exu.io.exu_state_debug
    io.perf_jump_mispredict_count := exu.io.perf_jump_mispredict_count
    // lsu
    io.lsu_state_debug := lsu.io.lsu_state_debug
    io.lsu_is_ld_or_st_debug := lsu.io.lsu_is_ld_or_st_debug
    io.lsu_reg_inst_debug := lsu.io.lsu_reg_inst_debug
    io.dmem_rdata_debug := lsu.io.dmem_rdata_debug
    io.dmem_wdata_debug := lsu.io.dmem_wdata_debug
    io.lsu_reg_dmem_addr_debug := lsu.io.lsu_reg_dmem_addr_debug
    io.lsu_memory_ar_size := lsu.io.memory.ar.size
    io.lsu_reg_pc_debug := lsu.io.lsu_reg_pc_debug
    // wbu
    io.wbu_state_debug := wbu.io.wbu_state_debug
    io.wb_data_debug := wbu.io.wb_data_debug
    io.wb_wen_debug := wbu.io.wb_wen_debug
    io.wb_sel_debug := wbu.io.wb_sel_debug
    io.wbu_reg_dmem_rdata_debug := wbu.io.wbu_reg_dmem_rdata_debug
    io.wbu_reg_inst_debug := wbu.io.wbu_reg_inst_debug
    io.wbu_reg_pc_debug := wbu.io.wbu_reg_pc_debug
    // Arbiter
    io.Arbiter_state_debug := arbiter.io.Arbiter_state_debug
    // ICache
    io.icache_state_debug := ICache.io.icache_state_debug
    io.icache_miss_count := ICache.io.icache_miss_count
}

object Main extends App {
  println("Generating the core hardware")
  ChiselStage.emitSystemVerilogFile(new Core(),
    firtoolOpts = Array(
      "--lowering-options=noAlwaysComb,disallowLocalVariables,disallowPortDeclSharing,disallowExpressionInliningInPorts,disallowMuxInlining,locationInfoStyle=none",
      "-O=release",
      "--disable-all-randomization",
      "--preserve-values=named",
      "--export-module-hierarchy",
      "--split-verilog",              
      "-o=../vsrc/generated/"
    )
  )
}
