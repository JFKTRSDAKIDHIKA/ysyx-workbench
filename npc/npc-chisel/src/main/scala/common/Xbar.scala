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

  // Bypass logic
  when(io.in.aw.addr >= UART_BASE_ADDR && io.in.aw.addr <= UART_BASE_ADDR + UART_ADDR_LEN) {
    io.uart <> io.in
  } .elsewhen(io.in.aw.addr >= MEM_BASE || io.in.ar.addr >= MEM_BASE) {
    io.sram <> io.in
  } .otherwise {
    io.uart <> io.in
  }

  // Debug signal assignment
  io.aw_addr_debug := io.in.aw.addr
}