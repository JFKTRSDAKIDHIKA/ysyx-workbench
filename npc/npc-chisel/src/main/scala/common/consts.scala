package common
package constants
{

import chisel3._
import chisel3.util._
import scala.math._

trait RISCVConstants
{
   // abstract out instruction decode magic numbers
   val RD_MSB  = 11
   val RD_LSB  = 7
   val RS1_MSB = 19
   val RS1_LSB = 15
   val RS2_MSB = 24
   val RS2_LSB = 20

   val CSR_ADDR_MSB = 31
   val CSR_ADDR_LSB = 20

   val X0 = 0.U

   // Opcode bit range (bits 6 to 0)
   val OPCODE_MSB = 6
   val OPCODE_LSB = 0

   // Funct3 bit range (bits 14 to 12)
   val FUNCT3_MSB = 14
   val FUNCT3_LSB = 12

   // Funct7 bit range (bits 31 to 25)
   val FUNCT7_MSB = 31
   val FUNCT7_LSB = 25

   // Define opcode constants for RISC-V instructions
   val OPCODE_LUI      = "b0110111".U(7.W) // Load Upper Immediate
   val OPCODE_AUIPC    = "b0010111".U(7.W) // Add Upper Immediate to PC
   val OPCODE_RTYPE    = "b0110011".U(7.W) // Register-Register Operations (R-type)
   val OPCODE_ITYPE    = "b0010011".U(7.W) // Immediate Operations (I-type)
   val OPCODE_LOAD     = "b0000011".U(7.W) // Load Instructions
   val OPCODE_STORE    = "b0100011".U(7.W) // Store Instruction
   val OPCODE_BRANCH   = "b1100011".U(7.W) // Branch Instructions
   val OPCODE_CSR      = "b1110011".U(7.W) // Control and Status Register Instructions
   val OPCODE_JAL      = "b1101111".U(7.W) // Jump and Link
   val OPCODE_JALR     = "b1100111".U(7.W) // Jump and Link Register

   // Funct3 constants for LOAD and STORE instructions
   val FUNCT3_LB       = "b000".U(3.W) // Load Byte
   val FUNCT3_LH       = "b001".U(3.W) // Load Halfword
   val FUNCT3_LW       = "b010".U(3.W) // Load Word
   val FUNCT3_LBU      = "b100".U(3.W) // Load Byte Unsigned
   val FUNCT3_LHU      = "b101".U(3.W) // Load Halfword Unsigned
   val FUNCT3_SB       = "b000".U(3.W) // Store Byte
   val FUNCT3_SH       = "b001".U(3.W) // Store Halfword
   val FUNCT3_SW       = "b010".U(3.W) // Store Word

   // Define ALU opcode constants
   val ALU_ADD  = "b00000".U(5.W) // Addition
   val ALU_SUB  = "b00001".U(5.W) // Subtraction
   val ALU_AND  = "b00010".U(5.W) // Bitwise AND
   val ALU_OR   = "b00011".U(5.W) // Bitwise OR
   val ALU_XOR  = "b00100".U(5.W) // Bitwise XOR
   val ALU_SLT  = "b00101".U(5.W) // Signed less than
   val ALU_SLTU = "b00110".U(5.W) // Unsigned less than
   val ALU_SLL  = "b00111".U(5.W) // Logical left shift
   val ALU_SRA  = "b01000".U(5.W) // Arithmetic right shift
   val ALU_SRL  = "b01001".U(5.W) // Logical right shift
   val ALU_COPY1 = "b01111".U(5.W) // Copy operand A

   // PC reset vector
   val RESET_VECTOR = 0x80000000L.U(32.W) // 32位宽度，支持大整数

   // The Bubble Instruction (Machine generated NOP)
   // Insert (XOR x0,x0,x0) which is different from software compiler
   // generated NOPs which are (ADDI x0, x0, 0).
   // Reasoning for this is to let visualizers and stat-trackers differentiate
   // between software NOPs and machine-generated Bubbles in the pipeline.
   val BUBBLE  = 0x4033.U(32.W)
}

}


