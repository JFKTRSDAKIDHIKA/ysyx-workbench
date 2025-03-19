package common

import chisel3._
import chisel3.util._

import common.constants.RISCVConstants 

class MemoryController extends Module with RISCVConstants {
  val io = IO(new Bundle {
    val dmem_addr = Input(UInt(32.W)) 
    val dmem_wdata_raw = Input(UInt(32.W)) 
    val control = Input(UInt(3.W))    
    val wmask = Output(UInt(8.W))    
    val dmem_wdata = Output(UInt(32.W))  
    val dmem_rw_size = Output(UInt(3.W))  
  })

  // base mask
  val base_mask = MuxLookup(io.control, 0.U)(Seq(
    MEM_ACCESS_WORD -> "b1111".U(8.W), // SW
    MEM_ACCESS_HALF -> "b0011".U(8.W), // SH
    MEM_ACCESS_BYTE -> "b0001".U(8.W)  // SB
  ))

  // 根据地址偏移量调整掩码
  val shift_amount = io.dmem_addr(1, 0)

  // Determine address type based on io.dmem_addr
  val rw_address_type = MuxCase(OTHER_ADDR, Array(
    ((io.dmem_addr >= UART_BASE_ADDR) && (io.dmem_addr <= UART_TOP_ADDR)) -> UART_ADDR,
    ((io.dmem_addr >= SRAM_BASE) && (io.dmem_addr <= SRAM_TOP)) -> SRAM_ADDR,
    ((io.dmem_addr >= FLASH_BASE) && (io.dmem_addr <= FLASH_TOP)) -> FLASH_ADDR,
    ((io.dmem_addr >= SPI_BASE) && (io.dmem_addr <= SPI_TOP)) -> SPI_ADDR,
    ((io.dmem_addr >= PSRAM_BASE) && (io.dmem_addr <= PSRAM_TOP)) -> PSRAM_ADDR
  ))

  // Output assignments
  io.wmask := MuxLookup(rw_address_type, 1.U(8.W))(Seq(
    // UART supports narrow transfer
    UART_ADDR -> 1.U(8.W),
    // SRAM does not support narrow transfer
    SRAM_ADDR -> (base_mask << (shift_amount * 1.U)),
    // SPI does not support narrow transfer
    SPI_ADDR -> (base_mask << (shift_amount * 1.U)),
    // PSRAM supports narrow transfer
    PSRAM_ADDR -> (base_mask << (shift_amount * 1.U))
  ))

  io.dmem_wdata := MuxLookup(rw_address_type, io.dmem_wdata_raw << (shift_amount * 8.U))(Seq(
    // UART supports narrow transfer
    UART_ADDR -> io.dmem_wdata_raw,
    // SRAM does not support narrow transfer
    SRAM_ADDR -> (io.dmem_wdata_raw << (shift_amount * 8.U)),
    // SPI does not support narrow transfer
    SPI_ADDR -> (io.dmem_wdata_raw << (shift_amount * 8.U)),
    // PSRAM supports narrow transfer
    PSRAM_ADDR -> (io.dmem_wdata_raw << (shift_amount * 8.U))
  ))

  io.dmem_rw_size := MuxLookup(rw_address_type, 2.U(3.W))(Seq(
    // UART supports narrow transfer
    UART_ADDR -> MuxLookup(io.control, 2.U(3.W))(Seq(
          MEM_ACCESS_WORD -> 2.U(3.W), 
          MEM_ACCESS_BYTE -> 0.U(3.W), 
          MEM_ACCESS_BYTE_U -> 0.U(3.W), 
          MEM_ACCESS_HALF -> 1.U(3.W), 
          MEM_ACCESS_HALF_U -> 1.U(3.W) 
    )),
    // SRAM does not support narrow transfer
    SRAM_ADDR -> 2.U(3.W),
    // FLASH does not support narrow transfer
    FLASH_ADDR -> 2.U(3.W),
    // SPI does not support narrow transfer
    SPI_ADDR -> 2.U(3.W),
    // PSRAM supports narrow transfer
    PSRAM_ADDR -> MuxLookup(io.control, 2.U(3.W))(Seq(
          MEM_ACCESS_WORD -> 2.U(3.W), 
          MEM_ACCESS_BYTE -> 0.U(3.W), 
          MEM_ACCESS_BYTE_U -> 0.U(3.W), 
          MEM_ACCESS_HALF -> 1.U(3.W), 
          MEM_ACCESS_HALF_U -> 1.U(3.W) 
    ))
  ))
}