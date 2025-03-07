package common

import chisel3._
import chisel3.util._

class AlignmentNetwork extends Module {
  val io = IO(new Bundle {
    val data_in = Input(UInt(32.W))   
    val dmem_addr = Input(UInt(32.W)) 
    val control = Input(UInt(3.W))    
    val data_out = Output(UInt(32.W))
  })

  // signed/unsigned extent logic
  val zero_ext_byte = Cat(0.U(24.W), io.data_in(7, 0))
  val zero_ext_half = Cat(0.U(16.W), io.data_in(15, 0))
  val sign_ext_byte = Cat(Fill(24, io.data_in(7)), io.data_in(7, 0))
  val sign_ext_half = Cat(Fill(16, io.data_in(15)), io.data_in(15, 0))

  // Output select
  io.data_out := MuxLookup(io.control, 0.U)(Seq(
    4.U -> zero_ext_byte, // LBU
    5.U -> zero_ext_half, // LHU
    2.U -> io.data_in,    // LW
    0.U -> sign_ext_byte, // LB
    1.U -> sign_ext_half  // LH
  ))
}