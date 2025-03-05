package npc

import chisel3._
import chisel3.util._
import common._
import common.constants.RISCVConstants 

class Core extends Module with RISCVConstants {
    val io = IO(new Bundle {
        // Debug signals
        // ifu
        val pc_debug = Output(UInt(32.W))
        val inst_debug = Output(UInt(32.W))
        val ifu_state_debug = Output(UInt(3.W))
        // lsu
        val lsu_state_debug = Output(UInt(3.W))
        val lsu_is_ld_or_st_debug = Output(Bool())
        val lsu_reg_inst_debug = Output(UInt(32.W))
        val dmem_wdata_debug = Output(UInt(32.W))
        val dmem_rdata_debug = Output(UInt(32.W))
        // wbu
        val wbu_state_debug = Output(UInt(2.W))
        val wb_data_debug = Output(UInt(32.W))
        val wb_wen_debug = Output(Bool())
        val wb_sel_debug = Output(UInt(2.W))
        val wbu_reg_dmem_rdata_debug = Output(UInt(32.W))
        // Arbiter
        val Arbiter_state_debug = Output(UInt(2.W))
    })

    // Module instantiation
    val ifu = Module(new IFU)
    val idu = Module(new IDU)
    val exu = Module(new EXU)
    val lsu = Module(new LSU)
    val wbu = Module(new WBU)
    val regfile = Module(new RegisterFile)

    // Forward signals connection
    StageConnect(ifu.io.out, idu.io.in) // IFU -> IDU
    StageConnect(idu.io.out, exu.io.in) // IDU -> EXU
    StageConnect(exu.io.out, lsu.io.in) // EXU -> LSU
    StageConnect(lsu.io.out, wbu.io.in) // LSU -> WBU

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
    // IDU -> IFU
    ifu.io.jump_reg_target := idu.io.jump_reg_target
    ifu.io.br_target       := idu.io.br_target
    ifu.io.jmp_target      := idu.io.jmp_target
    ifu.io.pc_sel          := idu.io.pc_sel
    // WBU -> IFU
    ifu.io.pc_wen          := wbu.io.pc_wen

    // Memory interface
    val arbiter = Module(new MemoryArbiter)
    val sram = Module(new SramAxi4LiteWrapper)
    sram.io.clk := clock
    sram.io.rst := reset
    arbiter.io.ifu <> ifu.io.memory
    arbiter.io.lsu <> lsu.io.memory
    arbiter.io.axi <> sram.io.axi
    arbiter.io.ifu_handshake <> ifu.io.arbiter
    arbiter.io.lsu_handshake <> lsu.io.arbiter

    // Debus signals
    // ifu
    io.pc_debug := ifu.io.pc_debug
    io.inst_debug := ifu.io.inst_debug
    io.ifu_state_debug := ifu.io.ifu_state_debug
    // lsu
    io.lsu_state_debug := lsu.io.lsu_state_debug
    io.lsu_is_ld_or_st_debug := lsu.io.lsu_is_ld_or_st_debug
    io.lsu_reg_inst_debug := lsu.io.lsu_reg_inst_debug
    io.dmem_rdata_debug := lsu.io.dmem_rdata_debug
    io.dmem_wdata_debug := lsu.io.dmem_wdata_debug
    // wbu
    io.wbu_state_debug := wbu.io.wbu_state_debug
    io.wb_data_debug := wbu.io.wb_data_debug
    io.wb_wen_debug := wbu.io.wb_wen_debug
    io.wb_sel_debug := wbu.io.wb_sel_debug
    io.wbu_reg_dmem_rdata_debug := wbu.io.wbu_reg_dmem_rdata_debug
    // Arbiter
    io.Arbiter_state_debug := arbiter.io.Arbiter_state_debug
}

object Main extends App {
    println("Generating the core hardware")
    emitVerilog(new Core(), Array("--target-dir", "generated"))
}