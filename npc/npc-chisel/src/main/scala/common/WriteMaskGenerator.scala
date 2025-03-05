package common

import chisel3._
import chisel3.util._

class WriteMaskGenerator extends Module {
  val io = IO(new Bundle {
    val dmem_addr = Input(UInt(32.W)) 
    val dmem_wdata_raw = Input(UInt(32.W)) 
    val control = Input(UInt(3.W))    
    val wmask = Output(UInt(8.W))    
    val dmem_wdata = Output(UInt(32.W))  
  })

  // base mask
  val base_mask = MuxLookup(io.control, 0.U)(Seq(
    2.U -> "b1111".U(8.W), // SW
    1.U -> "b0011".U(8.W), // SH
    0.U -> "b0001".U(8.W)  // SB
  ))

  // 根据地址偏移量调整掩码
  val shift_amount = io.dmem_addr(1, 0)
  io.wmask := base_mask << (shift_amount * 1.U)

  io.dmem_wdata := io.dmem_wdata_raw << (shift_amount * 8.U)
}