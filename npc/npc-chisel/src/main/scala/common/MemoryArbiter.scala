package common

import chisel3._
import chisel3.util._

// Transaction-Based FIFO Arbiter
class MemoryArbiter extends Module {
  val io = IO(new Bundle {
    val ifu = Flipped(new AXI4IO) 
    val lsu = Flipped(new AXI4IO) 
    val axi = new AXI4IO 

    // Handshake signals to indicate pending requests
    val ifu_handshake = Flipped(new ValidReadyBundle) 
    val lsu_handshake = Flipped(new ValidReadyBundle) 

    // Debug signals
    val Arbiter_state_debug = Output(UInt(2.W)) 
  })

  // Set default output values
  AXI4FlippedDefaults(io.ifu)
  AXI4FlippedDefaults(io.lsu)
  AXI4Defaults(io.axi)       

  // Default handshake ready signals (will be overwritten by state logic)
  io.ifu_handshake.ready := false.B
  io.lsu_handshake.ready := false.B

  // State machine state definition
  val sIdle :: sGrantIFU :: sGrantLSU :: Nil = Enum(3)
  val state = RegInit(sIdle)

  // Register to implement FIFO tie-breaking for simultaneous requests in sIdle
  val last_granted_lsu = RegInit(false.B)

  // Registers to remember if the currently granted transaction is a read or write burst
  val ifu_granted_is_read = RegInit(false.B)
  val lsu_granted_is_read = RegInit(false.B)

  // State Machine Logic 
  switch(state) {
    is(sIdle) {
      // Check for pending requests and transition state
      when(io.ifu_handshake.valid && io.lsu_handshake.valid) {
        // Both IFU and LSU have pending requests. Apply FIFO tie-breaking.
        when(last_granted_lsu) {
          // LSU was granted last in a tie-break, so IFU gets priority this time
          state := sGrantIFU
          io.ifu_handshake.ready := true.B
          io.lsu_handshake.ready := false.B
          last_granted_lsu := false.B // Remember IFU was just granted in this tie
        } .otherwise {
          // IFU was granted last (or it's the very first request), so LSU gets priority
          state := sGrantLSU
          io.ifu_handshake.ready := false.B
          io.lsu_handshake.ready := true.B
          last_granted_lsu := true.B // Remember LSU was just granted in this tie
        }
      } .elsewhen(io.ifu_handshake.valid) {
        // Only IFU has a pending request, grant IFU.
        state := sGrantIFU
        io.ifu_handshake.ready := true.B
        io.lsu_handshake.ready := false.B
      } .elsewhen(io.lsu_handshake.valid) {
        // Only LSU has a pending request, grant LSU.
        state := sGrantLSU
        io.ifu_handshake.ready := false.B
        io.lsu_handshake.ready := true.B
        last_granted_lsu := true.B // LSU was just granted (not a tie, but update state)
      } .otherwise {
        // No requests, stay in idle.
        state := sIdle
        io.ifu_handshake.ready := false.B
        io.lsu_handshake.ready := false.B
      }
    }

    is(sGrantIFU) {
      // Arbiter is busy, not ready for *new* requests via handshake signals
      io.ifu_handshake.ready := false.B
      io.lsu_handshake.ready := false.B

      // Connect IFU's AXI signals to the main AXI bus
      io.axi <> io.ifu

      // Determine if the currently granted IFU transaction is complete.
      val ifu_transaction_complete = !io.ifu_handshake.valid

      // Check if the current transaction is finished
      when(ifu_transaction_complete) {
        // The granted IFU transaction is done.
        // Check if LSU has a pending request (FIFO for requests arriving while busy)
        when(io.lsu_handshake.valid) {
          // LSU requested while we were busy with IFU, grant LSU next.
          state := sGrantLSU
          io.ifu_handshake.ready := false.B
          io.lsu_handshake.ready := true.B
          last_granted_lsu := true.B // LSU is now the one granted
        } .otherwise {
          // No pending LSU request, go back to idle.
          state := sIdle
        }
      } .otherwise {
        // IFU transaction is not finished, stay in grant state.
        state := sGrantIFU
      }
    }

    is(sGrantLSU) {
      // Arbiter is busy, not ready for *new* requests via handshake signals
      io.ifu_handshake.ready := false.B
      io.lsu_handshake.ready := false.B

      // Connect LSU's AXI signals to the main AXI bus
      io.axi <> io.lsu

      // Determine if the currently granted LSU transaction is complete.
      val lsu_transaction_complete = !io.lsu_handshake.valid

      // Check if the current transaction is finished
      when(lsu_transaction_complete) {
        // The granted LSU transaction is done.
        // Check if IFU has a pending request (FIFO for requests arriving while busy)
        when(io.ifu_handshake.valid) {
          // IFU requested while we were busy with LSU, grant IFU next.
          state := sGrantIFU
          io.ifu_handshake.ready := true.B
          io.lsu_handshake.ready := false.B
          last_granted_lsu := false.B // IFU is now the one granted
          ifu_granted_is_read := io.ifu.ar.valid // Remember IFU transaction type
        } .otherwise {
          // No pending IFU request, go back to idle.
          state := sIdle
        }
      } .otherwise {
        // LSU transaction is not finished, stay in grant state.
        state := sGrantLSU
      }
    }
  }

  // Debug signals assignment
  io.Arbiter_state_debug := state

}