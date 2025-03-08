package common

import chisel3._
import chisel3.util._

class MemoryArbiter extends Module {
  val io = IO(new Bundle {
    // AXI4Lite buddle signals
    val ifu = Flipped(new AXI4IO) // Instruction Fetch Unit
    val lsu = Flipped(new AXI4IO) // Load Store Unit
    val axi = new AXI4IO

    // Handshake signals
    val ifu_handshake = Flipped(new ValidReadyBundle)
    val lsu_handshake = Flipped(new ValidReadyBundle)

    // Debug signals
    val Arbiter_state_debug = Output(UInt(2.W))
  })

  // Set default output values
  AXI4FlippedDefaults(io.ifu)
  AXI4FlippedDefaults(io.lsu)
  AXI4Defaults(io.axi)
  io.ifu_handshake.ready := false.B
  io.lsu_handshake.ready := false.B

  // State machine state definition
  val sIdle :: sBusy :: Nil = Enum(2)
  val state = RegInit(sIdle)

  // State machine logic
  switch(state) {
    is(sIdle) {
      // Arbiter is ready when state is idle
      io.ifu_handshake.ready := true.B
      io.lsu_handshake.ready := true.B
      // Switch state
      when(io.ifu_handshake.valid || io.lsu_handshake.valid) {
        state := sBusy
      } .otherwise {
        state := sIdle
      }
    }

    is(sBusy) {
      // Arbiter is not ready when state is busy
      io.ifu_handshake.ready := false.B
      io.lsu_handshake.ready := false.B
      // Bypass signals
      when(io.ifu_handshake.valid) {
        io.axi <> io.ifu
        state := sBusy
      } .elsewhen(io.lsu_handshake.valid) {
        io.axi <> io.lsu
        state := sBusy
      } .otherwise {
        state := sIdle
      }
    }
  }

  // Debug signals assignment
  io.Arbiter_state_debug := state

}