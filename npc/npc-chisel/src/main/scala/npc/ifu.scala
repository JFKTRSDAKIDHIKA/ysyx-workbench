package npc

import chisel3._
import chisel3.util._
import common._
import common.constants.RISCVConstants 
import chisel3.util.HasBlackBoxInline

class IFU extends Module with RISCVConstants {
  val io = IO(new Bundle {
    // Forward signals
    val out = Decoupled(new Message)

    // Feedback signals from IDU, LSU, EXU and WBU
    // val pc_sel = Input(UInt(3.W))
    val pc_wen = Input(Bool())
    // val pc_csr = Input(UInt(32.W))
    val pc_redirect_target = Input(UInt(32.W))

    // Signals to handle Control Hazard
    val redirect_valid = Input(Bool())  

    // AXI4-Lite memory interface
    val memory = new AXI4IO

    // Arbiter handshake
    val arbiter = new ValidReadyBundle

    // Degus signals
    val pc_debug = Output(UInt(32.W))
    val inst_debug = Output(UInt(32.W))
    val ifu_state_debug = Output(UInt(3.W))
  })

  // Degus signals assignment
  io.pc_debug := io.out.bits.pc
  io.inst_debug := io.out.bits.inst

  // Set AXI4 default values
  AXI4Defaults(io.memory)

  // Set default values
  io.out.valid := false.B
  io.out.bits.inst := 0.U 
  io.arbiter.valid := false.B

  // Internal signals and registers declaration
  val pc = RegInit(RESET_VECTOR) // Program Counter
  val if_inst_buffer = RegInit(0.U(32.W)) 
  val pc_next = Wire(UInt(32.W))
  val pc_plus4 = pc + 4.U 
  val exception = 0.U(32.W) 

  /*
  pc_next := MuxLookup(io.pc_sel, pc_plus4)(Seq(
    PC_4 -> pc_plus4,
    PC_REDIRECT -> io.pc_redirect_target,
    PC_EXC -> exception,
    PC_CSR -> io.pc_csr
  ))
  */
  // Calculate next pc (Speculative execuation)
  pc_next := Mux(io.redirect_valid, io.pc_redirect_target, pc_plus4)

  // Output current pc
  io.out.bits.pc := pc

  // State machine state definition
  val sIdle :: sFetchReq :: sFetchPrepare :: sFetchWait :: sFetchDone :: Nil = Enum(5)
  val state = RegInit(sIdle)

  // State machine logic
  switch(state) {
    is(sIdle) {
      // Arbiter interface
      io.arbiter.valid := false.B
      // Forward signals
      io.out.valid := false.B
      io.out.bits.inst := if_inst_buffer 
      // Read Address Channel
      io.memory.ar.addr := pc 
      io.memory.ar.valid := false.B
      io.memory.ar.len := 0.U
      io.memory.ar.size := 2.U
      io.memory.ar.burst := AXI4Constants.BURST_INCR
      io.memory.ar.id := 0.U
      // Read Data Channel
      io.memory.r.ready := false.B
      // Start fetch instruction
      state := sFetchPrepare
    }

    is(sFetchPrepare) {
      // Arbiter interface
      io.arbiter.valid := true.B
      // Wait arbiter ready
      when(io.arbiter.ready) {
        state := sFetchReq
      }      
    }

    is(sFetchReq) {
      // Arbiter interface
      io.arbiter.valid := true.B
      // Forward signals
      io.out.valid := false.B
      io.out.bits.inst := if_inst_buffer 
      // Read Address Channel
      io.memory.ar.addr := pc 
      io.memory.ar.valid := true.B  // Send memory read request
      io.memory.ar.len := 0.U
      io.memory.ar.size := 2.U
      io.memory.ar.burst := AXI4Constants.BURST_INCR
      io.memory.ar.id := 0.U
      // Read Data Channel
      io.memory.r.ready := false.B
      // Wait memory ready to process request
      when(io.memory.ar.ready) {
        state := sFetchWait
      }
    }

    is(sFetchWait) {
      // Arbiter interface
      io.arbiter.valid := true.B
      // Forward signals
      io.out.valid := false.B
      io.out.bits.inst := if_inst_buffer 
      // Read Address Channel
      io.memory.ar.addr := pc 
      io.memory.ar.valid := false.B // Clear memory read request
      io.memory.ar.len := 0.U
      io.memory.ar.size := 2.U
      io.memory.ar.burst := AXI4Constants.BURST_INCR
      io.memory.ar.id := 0.U
      // Read Data Channel
      io.memory.r.ready := true.B // Ready to read data from memory
      // Wait fetched instruction data valid
      when(io.memory.r.valid) {
        if_inst_buffer := io.memory.r.data 
        state := sFetchDone
      }
    }

    is(sFetchDone) {
      // Arbiter interface
      io.arbiter.valid := false.B  // arbiter.valid signal maintains hign during instruction fetch
      // Forward signals
      io.out.valid := true.B
      io.out.bits.inst := if_inst_buffer 
      // Read Address Channel
      io.memory.ar.addr := pc 
      io.memory.ar.valid := false.B
      io.memory.ar.len := 0.U
      io.memory.ar.size := 2.U
      io.memory.ar.burst := AXI4Constants.BURST_INCR
      io.memory.ar.id := 0.U
      // Read Data Channel
      io.memory.r.ready := false.B
      // Wait idu ready to process instruction
      when(io.out.ready) {
        state := sIdle
        // Update PC value
        pc := pc_next
      }
    }
  }

  // Debug signals assignment
  io.ifu_state_debug := state
}



