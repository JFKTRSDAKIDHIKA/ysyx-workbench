package common

import chisel3._
import chisel3.util._
import common._
import common.constants.RISCVConstants 

class Xbar extends Module with RISCVConstants {
  val io = IO(new Bundle {
    val in = Flipped(new AXI4LiteIO)
    val uart = new AXI4LiteIO
    val sram = new AXI4LiteIO

    // Debug signals
    val aw_addr_debug = Output(UInt(32.W))    
  })  

  // Set default output values
  AXI4LiteFlippedDefaults(io.in)
  AXI4LiteDefaults(io.uart)
  AXI4LiteDefaults(io.sram)

  // Address range check functions
  private def isUartAddress(addr: UInt): Bool = {
    addr >= UART_BASE_ADDR && addr < (UART_BASE_ADDR + UART_ADDR_LEN)
  }

  private def isSramAddress(addr: UInt): Bool = {
    addr >= MEM_BASE && addr < MEM_TOP
  }

  // Bypass logic
  when(isUartAddress(io.in.aw.addr) || isUartAddress(io.in.ar.addr)) {
    io.uart <> io.in
  }.elsewhen(isSramAddress(io.in.aw.addr) || isSramAddress(io.in.ar.addr)) {
    io.sram <> io.in
  }.otherwise {
    // Unmapped address: return error response
    io.in.b.resp := AXI4LiteParameters.ERROR
    io.in.b.valid     := true.B
    io.in.r.resp := AXI4LiteParameters.ERROR
    io.in.r.valid     := true.B
    // Ready signals for unhandled addresses
    io.in.aw.ready    := true.B
    io.in.ar.ready    := true.B
    io.in.w.ready     := true.B
  }

  // Debug signal assignment
  io.aw_addr_debug := io.in.aw.addr
}