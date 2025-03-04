package common

import chisel3._
import chisel3.util._

class MemoryArbiter extends Module {
  val io = IO(new Bundle {
    val ifu = Flipped(new AXI4LiteIO) // Instruction Fetch Unit
    val lsu = Flipped(new AXI4LiteIO) // Load Store Unit
    val axi = new AXI4LiteIO
    // Debug signals
    val Arbiter_state_debug = Output(UInt(2.W))
  })

  // Set default output values
  AXI4LiteFlippedDefaults(io.ifu)
  AXI4LiteFlippedDefaults(io.lsu)
  AXI4LiteDefaults(io.axi)

  // Indicate which unit should be passed
  val isIFUActive = io.ifu.ar.valid || io.ifu.r.ready
  val isLSUActive = io.lsu.ar.valid || io.lsu.aw.valid || io.lsu.b.ready && !isIFUActive 

  // State machine state definition
  val sIdle :: sIFU :: sLSU :: Nil = Enum(3)
  val state = RegInit(sIdle)

  // State machine logic
  switch(state) {
    is(sIdle) {
      when(isIFUActive) {
        state := sIFU
      } .elsewhen(isLSUActive) {
        state := sLSU
      } .otherwise {
        state := sIdle
      }
    }

    is(sIFU) {
      io.axi <> io.ifu
      when(isIFUActive) {
        state := sIFU
      } .elsewhen(isLSUActive) {
        state := sLSU
      } .otherwise {
        state := sIdle
      }
    }

    is(sLSU) {
      io.axi <> io.lsu
      when(isIFUActive) {
        state := sIFU
      } .elsewhen(isLSUActive) {
        state := sLSU
      } .otherwise {
        state := sIdle
      }
      
    }
  }

  // Debug signals assignment
  io.Arbiter_state_debug := state

}