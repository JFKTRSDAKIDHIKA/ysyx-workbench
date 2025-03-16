package common 

import chisel3._
import chisel3.util._

import common.constants.RISCVConstants 

class ALU extends Module with RISCVConstants {
  val io = IO(new Bundle {
    val a = Input(UInt(32.W))
    val b = Input(UInt(32.W))
    val aluOp = Input(UInt(5.W))
    val result = Output(UInt(32.W))
  })

  val alu_shamt = io.b(4, 0)

  io.result := MuxLookup(io.aluOp, ALU_ADD)(Seq(
    ALU_ADD   -> (io.a + io.b),
    ALU_SUB   -> (io.a - io.b),
    ALU_AND   -> (io.a & io.b),
    ALU_OR    -> (io.a | io.b),
    ALU_XOR   -> (io.a ^ io.b),
    ALU_SLT   -> (io.a.asSInt < io.b.asSInt).asUInt,
    ALU_SLTU  -> (io.a < io.b),
    ALU_SLL   -> ((io.a << alu_shamt)(31, 0)),
    ALU_SRL   -> (io.a >> alu_shamt),
    ALU_SRA   -> (io.a.asSInt >> alu_shamt).asUInt,
    ALU_COPY1 -> io.a
  ))
}
