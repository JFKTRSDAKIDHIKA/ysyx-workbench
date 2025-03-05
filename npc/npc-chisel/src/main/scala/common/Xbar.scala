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
  })  

  // Set default output values
  AXI4LiteFlippedDefaults(io.in)
  AXI4LiteDefaults(io.uart)
  AXI4LiteDefaults(io.sram)

  // ???
  val isUart = Wire(Bool())
  val isMem  = Wire(Bool())
  isUart := (io.in.aw.addr >= UART_BASE_ADDR) && (io.in.aw.addr <= UART_BASE_ADDR + UART_ADDR_LEN)
  isMem  := (io.in.aw.addr >= MEM_BASE) || (io.in.ar.addr >= MEM_BASE)

  // State machine state definition
  val sIdle :: sUart :: sMem :: Nil = Enum(3)
  val state = RegInit(sIdle)

  // State machine logic
  switch(state) {
    is(sIdle) {
        when(isUart) {
            state := sUart
            io.uart <> io.in
        } .elsewhen(isMem) {
            state := sMem
            io.sram <> io.in
        } .otherwise {
            state := sIdle
        }
    }

    is(sUart) {
        when(isMem) {
            state := sMem
            io.sram <> io.in
        } .otherwise {
            state := sUart
        }
    }

    is(sMem) {
        when(isUart) {
            state := sUart
            io.uart <> io.in
        } .otherwise {
            state := sMem
        }
    }
  }

}