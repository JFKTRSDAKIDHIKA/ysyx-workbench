package common

import chisel3._
import chisel3.util._
import common._
import common.constants.RISCVConstants 

class Xbar extends Module with RISCVConstants {
  val io = IO(new Bundle {
    val in = Flipped(new AXI4IO)
    val soc = new AXI4IO
    val clint = new AXI4IO
  })  

  // Set default output values
  AXI4FlippedDefaults(io.in)
  AXI4Defaults(io.soc)
  AXI4Defaults(io.clint)

  // Address range check functions
  private def isCLINTAddress(addr: UInt): Bool = {
    addr >= CLINT_BASE && addr < CLINT_TOP
  }

  // Bypass logic
  when(isCLINTAddress(io.in.aw.addr) || isCLINTAddress(io.in.ar.addr)) {
    io.clint <> io.in
  }.otherwise {
    io.soc <> io.in
  }
}