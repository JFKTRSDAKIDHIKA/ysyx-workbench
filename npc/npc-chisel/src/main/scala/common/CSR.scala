package common

import chisel3._
import chisel3.util._
import common.constants.RISCVConstants
import scala.collection.immutable.Map 

class CSRFile extends Module with RISCVConstants {
  val io = IO(new Bundle {
    val csr_raddr = Input(UInt(12.W))
    val csr_waddr = Input(UInt(12.W))
    val csr_wdata = Input(UInt(32.W))
    val csr_wen   = Input(Bool())
    val csr_cmd   = Input(UInt(2.W))
    val csr_rdata = Output(UInt(32.W))

    val mtvec_out = Output(UInt(32.W))
    val mepc_out  = Output(UInt(32.W))
  })

  // Declare and initialize CSR registers
  val mstatus   = RegInit(0.U(32.W))
  val mtvec     = RegInit(0.U(32.W))
  val mepc      = RegInit(0.U(32.W))
  val mcause    = RegInit(0.U(32.W))
  val mvendorid = 0x79737978.U(32.W) // Read-only
  val marchid   = 24120009.U(32.W)  // Read-only

  // Writable CSR map: maps address constants to their respective register references
  val csrWritableMap = Map(
    CSR_ADDR_MSTATUS -> mstatus,
    CSR_ADDR_MTVEC   -> mtvec,
    CSR_ADDR_MEPC    -> mepc,
    CSR_ADDR_MCAUSE  -> mcause
  )

  // Read logic for CSR file:
  io.csr_rdata := MuxLookup(io.csr_raddr, 0.U(32.W))(
    csrWritableMap.toSeq ++ Seq(
      CSR_ADDR_MVENDORID -> mvendorid,
      CSR_ADDR_MARCHID   -> marchid
    )
  )

  // Write logic:
  when(io.csr_wen) {
    switch(io.csr_waddr) {
      is(CSR_ADDR_MSTATUS) {
        mstatus := MuxLookup(io.csr_cmd, mstatus)(Seq(
          CSR_CMD_RW -> io.csr_wdata,
          CSR_CMD_RS -> (mstatus | io.csr_wdata),
          CSR_CMD_RC -> (mstatus & ~io.csr_wdata)
        ))
      }
      is(CSR_ADDR_MTVEC) {
        mtvec := MuxLookup(io.csr_cmd, mtvec)(Seq(
          CSR_CMD_RW -> io.csr_wdata,
          CSR_CMD_RS -> (mtvec | io.csr_wdata),
          CSR_CMD_RC -> (mtvec & ~io.csr_wdata)
        ))
      }
      is(CSR_ADDR_MEPC) {
        mepc := MuxLookup(io.csr_cmd, mepc)(Seq(
          CSR_CMD_RW -> io.csr_wdata,
          CSR_CMD_RS -> (mepc | io.csr_wdata),
          CSR_CMD_RC -> (mepc & ~io.csr_wdata)
        ))
      }
      is(CSR_ADDR_MCAUSE) {
        mcause := MuxLookup(io.csr_cmd, mcause)(Seq(
          CSR_CMD_RW -> io.csr_wdata,
          CSR_CMD_RS -> (mcause | io.csr_wdata),
          CSR_CMD_RC -> (mcause & ~io.csr_wdata)
        ))
      }
      is(CSR_ADDR_MVENDORID) {
        // printf("Warning: Attempted write to read-only CSR mvendorid\n")
      }
      is(CSR_ADDR_MARCHID) {
        // printf("Warning: Attempted write to read-only CSR marchid\n")
      }
    }
  }

  // Expose mtvec and mepc for use in exception handling logic
  io.mtvec_out := mtvec
  io.mepc_out  := mepc
}