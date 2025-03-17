package common

import chisel3._
import chisel3.util._
import common._
import common.constants.RISCVConstants 

class clint extends Module with RISCVConstants {
  val io = IO(new Bundle {
    val in = Flipped(new AXI4IO)
  })  

  // Consts declaration
  val mtime_offset = 0xbff8.U(32.W)

  // Set default output values
  AXI4FlippedDefaults(io.in)

  // mtime register
  val mtime = RegInit(0.U(64.W))
  mtime := mtime + 1.U(64.W)

  // Timer AXI read logic
  io.in.ar.ready := true.B
  io.in.r.valid := true.B

  // Address decoding for mtime
  when (io.in.ar.addr === (CLINT_BASE + mtime_offset)) {
    io.in.r.data := mtime(31, 0) // Low 32 bits
  } .elsewhen (io.in.ar.addr === (CLINT_BASE + mtime_offset + 4.U)) {
    io.in.r.data := mtime(63, 32) // High 32 bits
  } .otherwise {
    io.in.r.data := 0.U(32.W) // Default value for invalid address
  }
}