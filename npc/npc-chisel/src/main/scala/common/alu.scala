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

  val alu_shamt = io.b(4,0).asUInt

  io.result := MuxCase(0.U, Array(
      (io.aluOp === ALU_ADD)  -> (io.a + io.b).asUInt,
      (io.aluOp === ALU_SUB)  -> (io.a - io.b).asUInt,
      (io.aluOp === ALU_AND)  -> (io.a & io.b).asUInt,
      (io.aluOp === ALU_OR)   -> (io.a | io.b).asUInt,
      (io.aluOp === ALU_XOR)  -> (io.a ^ io.b).asUInt,
      (io.aluOp === ALU_SLT)  -> (io.a.asSInt < io.b.asSInt).asUInt,
      (io.aluOp === ALU_SLTU) -> (io.a < io.b).asUInt,
      (io.aluOp === ALU_SLL)  -> ((io.a << alu_shamt)(31, 0)).asUInt,
      (io.aluOp === ALU_SRA)  -> (io.a.asSInt >> alu_shamt).asUInt,
      (io.aluOp === ALU_SRL)  -> (io.a >> alu_shamt).asUInt,
      (io.aluOp === ALU_COPY1)-> io.a
      ))
}