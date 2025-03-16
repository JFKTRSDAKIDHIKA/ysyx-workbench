package common

import chisel3._
import chisel3.util._

class Message extends Bundle {
  val inst = Output(UInt(32.W)) 
  val pc = Output(UInt(32.W))
}

object StageConnect {
  def apply[T <: Data](left: DecoupledIO[T], right: DecoupledIO[T]): Unit = {
    left.ready := right.ready

    right.valid := left.valid

    right.bits := left.bits
  }
}

class ValidReadyBundle extends Bundle {
  val valid = Output(Bool())  
  val ready = Input(Bool()) 
}


