package npc

import chisel3._
import chisel3.util._
import common._
import common.constants.RISCVConstants 
import chisel3.util.HasBlackBoxInline

class IFU extends Module with RISCVConstants {
  val io = IO(new Bundle {
    // Forward signals
    val out = Decoupled(new Message)

    // Feedback signals from IDU and WBU
    val pc_sel = Input(UInt(3.W))
    val jump_reg_target = Input(UInt(32.W))
    val br_target = Input(UInt(32.W))
    val jmp_target = Input(UInt(32.W))
    val pc_wen = Input(Bool())

    // AXI4-Lite memory interface
    val memory = new AXI4LiteIO

    // Degus signals
    val pc_debug = Output(UInt(32.W))
    val inst_debug = Output(UInt(32.W))
    val ifu_state_debug = Output(UInt(2.W))
  })

  // Degus signals assignment
  io.pc_debug := io.out.bits.pc
  io.inst_debug := io.out.bits.inst

  // Set AXI4-Lite default values
  AXI4LiteDefaults(io.memory)

  // Set default values
  io.out.valid := false.B
  io.out.bits.inst := 0.U 

  // Internal signals and registers declaration
  val pc = RegInit(RESET_VECTOR) // Program Counter
  val if_inst_buffer = RegInit(0.U(32.W)) 
  val pc_next = Wire(UInt(32.W))
  val pc_plus4 = pc + 4.U 
  val exception = 0.U(32.W) 

  // Calculate next pc
  pc_next := MuxLookup(io.pc_sel, pc_plus4)(Seq(
    0.U -> pc_plus4,
    1.U -> io.jump_reg_target,
    2.U -> io.br_target,
    3.U -> io.jmp_target,
    4.U -> exception
  ))

  // Output current pc
  io.out.bits.pc := pc

  // Handle ebreak instruction
  val ebreakHandler = Module(new EBreakHandler)
  ebreakHandler.io.inst := io.out.bits.inst

  // Update pc value
  when(io.pc_wen) {
    pc := pc_next
  }

  // State machine state definition
  val sIdle :: sFetchReq :: sFetchWait :: sFetchDone :: Nil = Enum(4)
  val state = RegInit(sFetchReq)

  // State machine logic
  switch(state) {
    is(sIdle) {
      io.out.valid := false.B
      io.out.bits.inst := if_inst_buffer 
      io.memory.ar.addr := pc 
      io.memory.ar.valid := false.B
      io.memory.r.ready := false.B
      when(io.pc_wen) {
        state := sFetchReq
      }
    }

    is(sFetchReq) {
      io.out.valid := false.B
      io.out.bits.inst := if_inst_buffer 
      io.memory.ar.addr := pc 
      io.memory.ar.valid := true.B
      io.memory.r.ready := false.B
      when(io.memory.ar.ready) {
        state := sFetchWait
      }
    }

    is(sFetchWait) {
      io.out.valid := false.B
      io.out.bits.inst := if_inst_buffer 
      io.memory.ar.addr := pc 
      io.memory.ar.valid := false.B
      io.memory.r.ready := true.B
      when(io.memory.r.valid) {
        if_inst_buffer := io.memory.r.data 
        state := sFetchDone
      }
    }

    is(sFetchDone) {
      io.out.valid := true.B
      io.out.bits.inst := if_inst_buffer 
      io.memory.ar.addr := pc 
      io.memory.ar.valid := false.B
      io.memory.r.ready := false.B
      when(io.out.ready) {
        state := sIdle
      }
    }
  }

  // Debug signals assignment
  io.ifu_state_debug := state
}

class EBreakHandler extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val inst = Input(UInt(32.W)) 
  })

  setInline("EBreakHandler.v",
    """
      |
      |module EBreakHandler(
      |    input wire [31:0] inst
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
      |endmodule
    """.stripMargin)
}