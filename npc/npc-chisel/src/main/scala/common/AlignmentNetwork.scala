package common

import chisel3._
import chisel3.util._

import common.constants.RISCVConstants 

class AlignmentNetwork extends Module with RISCVConstants {
  val io = IO(new Bundle {
    val data_in = Input(UInt(32.W))   
    val dmem_addr = Input(UInt(32.W)) 
    val control = Input(UInt(3.W))    
    val data_out = Output(UInt(32.W))
})

/*
  AXI4-Lite does not support the 'ar.size' parameter, and the data width for each transfer is fixed at 32 bits. 
  Therefore, when reading data, it is necessary to select the corresponding Byte or Half from the 32-bit data read. 
  However, since AXI4 supports the `ar.size` parameter, the "select the corresponding Byte or Half" functionality 
  needs to be removed from the AlignmentNetwork module. The software can ensure that the addresses accessed by the 
  compiled instructions meet specific alignment requirements.
*/

  // Determine address type based on io.dmem_addr
  val rw_address_type = MuxCase(OTHER_ADDR, Array(
    ((io.dmem_addr >= UART_BASE_ADDR) && (io.dmem_addr <= UART_TOP_ADDR)) -> UART_ADDR,
    ((io.dmem_addr >= SRAM_BASE) && (io.dmem_addr <= SRAM_TOP)) -> SRAM_ADDR,
    ((io.dmem_addr >= FLASH_BASE) && (io.dmem_addr <= FLASH_TOP)) -> FLASH_ADDR,
    ((io.dmem_addr >= SPI_BASE) && (io.dmem_addr <= SPI_TOP)) -> SPI_ADDR,
    ((io.dmem_addr >= PSRAM_BASE) && (io.dmem_addr <= PSRAM_TOP)) -> PSRAM_ADDR,
    ((io.dmem_addr >= SDRAM_BASE) && (io.dmem_addr <= SDRAM_TOP)) -> SDRAM_ADDR
))

  // shift logic
  val shift_amount = io.dmem_addr(1, 0)
  val shifted_data = io.data_in >> (shift_amount * 8.U)

  // signed/unsigned extent logic
  val zero_ext_byte = Cat(0.U(24.W), shifted_data(7, 0))
  val zero_ext_half = Cat(0.U(16.W), shifted_data(15, 0))
  val sign_ext_byte = Cat(Fill(24, shifted_data(7)), shifted_data(7, 0))
  val sign_ext_half = Cat(Fill(16, shifted_data(15)), shifted_data(15, 0))

  val aligned_data_out = MuxLookup(io.control, 0.U)(Seq(
    4.U -> zero_ext_byte, // LBU
    5.U -> zero_ext_half, // LHU
    2.U -> io.data_in,    // LW
    0.U -> sign_ext_byte, // LB
    1.U -> sign_ext_half  // LH
  ))

  // Output select
  io.data_out := MuxLookup(rw_address_type, aligned_data_out)(Seq(
    // UART supports narrow transfer
    UART_ADDR -> io.data_in,
    // SRAM does not support narrow transfer
    SRAM_ADDR -> aligned_data_out,
    // SPI does not support narrow transfer
    SPI_ADDR -> aligned_data_out,
    // PSRAM supports narrow transfer
    PSRAM_ADDR -> aligned_data_out,
    // SDRAM ???
    SDRAM_ADDR -> aligned_data_out
  ))
}