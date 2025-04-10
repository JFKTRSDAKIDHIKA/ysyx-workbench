package common

import chisel3._
import chisel3.util._
import common._
import common.constants.RISCVConstants 

class CSRFile extends Module with RISCVConstants {
  val io = IO(new Bundle {
    val csr_addr = Input(UInt(12.W))
    val csr_wdata = Input(UInt(32.W))
    val csr_rdata = Output(UInt(32.W))
    val csr_wen = Input(Bool())
    val csr_mtvec = Output(UInt(32.W))
    val csr_mepc = Output(UInt(32.W))
  })

  // CSR register file
  val mstatus = RegInit(0.U(32.W)) // Machine Status Register
  val mtvec   = RegInit(0.U(32.W)) // Machine Trap Vector Register
  val mepc    = RegInit(0.U(32.W)) // Machine Exception Program Counter
  val mcause  = RegInit(0.U(32.W)) // Machine Cause Register

  // Read CSR value
  io.csr_rdata := MuxLookup(io.csr_addr, 0.U(32.W))(Seq(
    CSR_ADDR_MSTATUS -> mstatus,
    CSR_ADDR_MTVEC   -> mtvec,
    CSR_ADDR_MEPC    -> mepc,
    CSR_ADDR_MCAUSE  -> mcause
  ))

  // Write CSR value
  when(io.csr_wen) {
    switch(io.csr_addr) {
      is(CSR_ADDR_MSTATUS) { mstatus := io.csr_wdata }
      is(CSR_ADDR_MTVEC)   { mtvec   := io.csr_wdata }
      is(CSR_ADDR_MEPC)    { mepc    := io.csr_wdata }
      is(CSR_ADDR_MCAUSE)  { mcause  := io.csr_wdata }
    }
  }

  // Output CSR values
  io.csr_mtvec := mtvec
  io.csr_mepc := mepc
}


