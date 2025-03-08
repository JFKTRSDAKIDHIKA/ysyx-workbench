package common

import chisel3._
import chisel3.util._

import common.constants.RISCVConstants 

class WriteMaskGenerator extends Module with RISCVConstants {
  val io = IO(new Bundle {
    val dmem_addr = Input(UInt(32.W)) 
    val dmem_wdata_raw = Input(UInt(32.W)) 
    val control = Input(UInt(3.W))    
    val wmask = Output(UInt(8.W))    
    val dmem_wdata = Output(UInt(32.W))  
    val awsize = Output(UInt(3.W))  
  })

  // base mask
  val base_mask = MuxLookup(io.control, 0.U)(Seq(
    2.U -> "b1111".U(8.W), // SW
    1.U -> "b0011".U(8.W), // SH
    0.U -> "b0001".U(8.W)  // SB
  ))

  // 根据地址偏移量调整掩码
  val shift_amount = io.dmem_addr(1, 0)

  // Check if the address is within the UART range
  val is_uart_addr = (io.dmem_addr >= UART_BASE_ADDR) && (io.dmem_addr <= UART_TOP_ADDR)
  // Check if the address is within the SRAM range
  val is_mem_addr = (io.dmem_addr >= SRAM_BASE) && (io.dmem_addr <= SRAM_TOP)

  // Output assignments
  io.wmask := Mux(is_uart_addr, 1.U(8.W), base_mask << (shift_amount * 1.U))
  io.dmem_wdata := Mux(is_uart_addr, io.dmem_wdata_raw, io.dmem_wdata_raw << (shift_amount * 8.U))
  io.awsize := MuxLookup(Cat(is_uart_addr, is_mem_addr), 2.U(3.W))(Seq(
    2.U -> MuxLookup(io.control, 2.U(3.W))(Seq(
          MEM_ACCESS_WORD -> 2.U(3.W), 
          MEM_ACCESS_BYTE -> 0.U(3.W), 
          MEM_ACCESS_BYTE_U -> 0.U(3.W), 
          MEM_ACCESS_HALF -> 1.U(3.W), 
          MEM_ACCESS_HALF_U -> 1.U(3.W) 
        )),
    1.U -> 2.U(3.W)
  ))
}