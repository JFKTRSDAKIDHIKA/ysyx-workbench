package npc

import chisel3._
import chisel3.util._
import common._
import common.constants.RISCVConstants

/**
 * Minimal IFU module with simple Decoupled handshake.
 *
 * Sends the current PC downstream whenever the downstream is ready.
 */
class IFU extends Module with RISCVConstants {
  val io = IO(new Bundle {
    // Forward signals
    // Signals passed to ICache
    val out = Decoupled(new ICacheRequestBundle)

    // Redirect control signal from EXU or IDU
    val redirect_valid = Input(Bool())
    val redirect_target = Input(UInt(32.W))

    // Debug signals
    val pc_debug = Output(UInt(32.W))
    val ifu_state_debug = Output(UInt(3.W))
  })

  // Internal Registers 
  val pc_reg = RegInit(RESET_VECTOR) // Current PC
  val next_pc = Wire(UInt(32.W))     // Next PC logic

  // Determine next PC: redirect has priority
  next_pc := Mux(io.redirect_valid, io.redirect_target, pc_reg + 4.U)

  // Only send PC when downstream is ready
  io.out.valid := io.out.ready      // valid iff downstream is ready
  io.out.bits.pc := pc_reg

  // Update PC when data was accepted by downstream
  when(io.out.fire) {
    pc_reg := next_pc
  }

  // Debug signals
  io.pc_debug := pc_reg
  io.ifu_state_debug := 0.U  // No state machine used
}

