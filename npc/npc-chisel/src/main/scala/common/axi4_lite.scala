package common

import chisel3._
import chisel3.util._

class AXI4LiteIO extends Bundle {
  // Write Address Channel
  val aw = new Bundle {
    val valid = Output(Bool())        
    val ready = Input(Bool())         
    val addr = Output(UInt(32.W))     
  }

  // Write Data Channel
  val w = new Bundle {
    val valid = Output(Bool())       
    val ready = Input(Bool())        
    val data = Output(UInt(32.W))    
    val strb = Output(UInt(4.W))     
  }

  // Write Response Channel
  val b = new Bundle {
    val valid = Input(Bool())        
    val ready = Output(Bool())      
    val resp = Input(UInt(2.W))      
  }

  // Read Address Channel
  val ar = new Bundle {
    val valid = Output(Bool())      
    val ready = Input(Bool())        
    val addr = Output(UInt(32.W))   
  } 

  // Read Data Channel
  val r = new Bundle {
    val valid = Input(Bool())        
    val ready = Output(Bool())       
    val data = Input(UInt(32.W))      
    val resp = Input(UInt(2.W))      
  }
}

object AXI4LiteDefaults {
  def apply(axi: AXI4LiteIO): Unit = {
    axi.aw.valid := false.B
    axi.aw.addr := 0.U

    axi.w.valid := false.B
    axi.w.data := 0.U
    axi.w.strb := 0.U

    axi.b.ready := false.B

    axi.ar.valid := false.B
    axi.ar.addr := 0.U

    axi.r.ready := false.B
  }
}

object AXI4LiteFlippedDefaults {
  def apply(axi: AXI4LiteIO): Unit = {
    axi.aw.ready := false.B
    axi.w.ready := false.B
    axi.b.valid := false.B
    axi.b.resp := 0.U
    axi.ar.ready := false.B
    axi.r.valid := false.B
    axi.r.data := 0.U
    axi.r.resp := 0.U
  }
}

object AXI4LiteParameters {
  val OKAY   = 0.U(2.W)  
  val EXOKAY = 1.U(2.W)  
  val SLVERR = 2.U(2.W)  
  val DECERR = 3.U(2.W)  

  val ERROR = SLVERR  
}