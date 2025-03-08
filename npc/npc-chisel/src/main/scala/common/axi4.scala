package common

import chisel3._
import chisel3.util._

object AXI4Constants {
  // AXI4 Burst Types
  val BURST_FIXED  = 2.U(2.W) // 00
  val BURST_INCR   = 1.U(2.W) // 01
  val BURST_WRAP   = 3.U(2.W) // 11

  // AXI4 Response Codes
  val RESP_OKAY    = 0.U(2.W) // 00
  val RESP_EXOKAY  = 1.U(2.W) // 01
  val RESP_SLVERR  = 2.U(2.W) // 10
  val RESP_DECERR  = 3.U(2.W) // 11
}

class AXI4IO extends Bundle {
  // Write Address Channel
  val aw = new Bundle {
    val addr   = Output(UInt(32.W)) // Write address
    val len    = Output(UInt(8.W))  // Burst length (0 to 15)
    val size   = Output(UInt(3.W))  // Burst size (0 = 1 byte, 1 = 2 bytes, ..., 4 = 16 bytes)
    val burst  = Output(UInt(2.W))  // Burst type
    val id     = Output(UInt(4.W))  // Transaction ID
    val valid  = Output(Bool())     // Valid signal
    val ready  = Input(Bool())      // Ready signal
  }

  // Write Data Channel
  val w = new Bundle {
    val data  = Output(UInt(32.W)) // Write data
    val strb  = Output(UInt(4.W))  // Byte enable
    val last  = Output(Bool())     // Last beat indicator
    val valid = Output(Bool())     // Valid signal
    val ready = Input(Bool())      // Ready signal
  }

  // Write Response Channel
  val b = new Bundle {
    val id    = Input(UInt(4.W))  // Transaction ID
    val resp  = Input(UInt(2.W))  // Response status
    val valid = Input(Bool())     // Valid signal
    val ready = Output(Bool())    // Ready signal
  }

  // Read Address Channel
  val ar = new Bundle {
    val addr   = Output(UInt(32.W)) // Read address
    val len    = Output(UInt(8.W))  // Burst length (0 to 15)
    val size   = Output(UInt(3.W))  // Burst size (0 = 1 byte, 1 = 2 bytes, ..., 4 = 16 bytes)
    val burst  = Output(UInt(2.W))  // Burst type
    val id     = Output(UInt(4.W))  // Transaction ID
    val valid  = Output(Bool())     // Valid signal
    val ready  = Input(Bool())      // Ready signal
  }

  // Read Data Channel
  val r = new Bundle {
    val id    = Input(UInt(4.W))  // Transaction ID
    val data  = Input(UInt(32.W)) // Read data
    val resp  = Input(UInt(2.W))  // Response status
    val last  = Input(Bool())     // Last beat indicator
    val valid = Input(Bool())     // Valid signal
    val ready = Output(Bool())    // Ready signal
  }
}

object AXI4Defaults {
  def apply(axi: AXI4IO): Unit = {
    // Write Address Channel
    axi.aw.valid := false.B
    axi.aw.addr := 0.U
    axi.aw.len := 0.U
    axi.aw.size := 2.U // 4 bytes
    axi.aw.burst := AXI4Constants.BURST_INCR
    axi.aw.id := 0.U

    // Write Data Channel
    axi.w.valid := false.B
    axi.w.data := 0.U
    axi.w.strb := 0.U
    axi.w.last := false.B

    // Write Response Channel
    axi.b.ready := false.B

    // Read Address Channel
    axi.ar.valid := false.B
    axi.ar.addr := 0.U
    axi.ar.len := 0.U
    axi.ar.size := 2.U // 4 bytes
    axi.ar.burst := AXI4Constants.BURST_INCR
    axi.ar.id := 0.U

    // Read Data Channel
    axi.r.ready := false.B
  }
}

object AXI4FlippedDefaults {
  def apply(axi: AXI4IO): Unit = {
    // Write Address Channel
    axi.aw.ready := false.B 

    // Write Data Channel
    axi.w.ready := false.B 

    // Write Response Channel
    axi.b.id := 0.U
    axi.b.resp := AXI4Constants.RESP_OKAY
    axi.b.valid := false.B

    // Read Address Channel
    axi.ar.ready := false.B

    // Read Data Channel
    axi.r.id := 0.U
    axi.r.data := 0.U
    axi.r.resp := AXI4Constants.RESP_OKAY
    axi.r.last := false.B
    axi.r.valid := false.B
  }
}