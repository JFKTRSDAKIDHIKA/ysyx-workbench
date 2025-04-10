package common
package constants
{

import chisel3._
import chisel3.util._
import scala.math._

trait RISCVConstants
{
   
   // PC Select Signal
   val PC_4   = 0.asUInt(3.W)  // PC + 4
   val PC_BR  = 1.asUInt(3.W)  // branch_target
   val PC_J   = 2.asUInt(3.W)  // jump_target
   val PC_JR  = 3.asUInt(3.W)  // jump_reg_target
   val PC_EXC = 4.asUInt(3.W)  // exception
   val PC_CSR = 5.asUInt(3.W)  // CSR target

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

   // Funct3 constants for branch instructions 
   val FUNCT3_BEQ      = "b000".U(3.W) // Branch if Equal
   val FUNCT3_BNE      = "b001".U(3.W) // Branch if Not Equal
   val FUNCT3_BLT      = "b100".U(3.W) // Branch if Less Than
   val FUNCT3_BGE      = "b101".U(3.W) // Branch if Greater Than or Equal
   val FUNCT3_BLTU     = "b110".U(3.W) // Branch if Less Than (Unsigned)
   val FUNCT3_BGEU     = "b111".U(3.W) // Branch if Greater Than or Equal (Unsigned)

   // Funct3 constants for I-type instructions
   val FUNCT3_ADDI     = "b000".U(3.W) // Add Immediate
   val FUNCT3_SLLI     = "b001".U(3.W) // Shift Left Logical Immediate
   val FUNCT3_SLTI     = "b010".U(3.W) // Set Less Than Immediate
   val FUNCT3_SLTIU    = "b011".U(3.W) // Set Less Than Immediate Unsigned
   val FUNCT3_XORI     = "b100".U(3.W) // XOR Immediate
   val FUNCT3_SRLI_SRAI = "b101".U(3.W) // Shift Right Logical/Arithmetic Immediate
   val FUNCT3_ORI      = "b110".U(3.W) // OR Immediate
   val FUNCT3_ANDI     = "b111".U(3.W) // AND Immediate

   // Funct7 constants for Logical/Arithmetic Immediate instructions
   val FUNCT7_SRLI = "b0000000".U(7.W) // Shift Right Logical Immediate
   val FUNCT7_SRAI = "b0100000".U(7.W) // Shift Right Arithmetic Immediate

   // Funct3 constants for R-type instructions
   val FUNCT3_ADD_SUB  = "b000".U(3.W) // Add and Subtract
   val FUNCT3_SLL      = "b001".U(3.W) // Shift Left Logical
   val FUNCT3_SLT      = "b010".U(3.W) // Set Less Than
   val FUNCT3_SLTU     = "b011".U(3.W) // Set Less Than Unsigned
   val FUNCT3_XOR      = "b100".U(3.W) // XOR
   val FUNCT3_SRL_SRA  = "b101".U(3.W) // Shift Right Logical and Shift Right Arithmetic
   val FUNCT3_OR       = "b110".U(3.W) // OR
   val FUNCT3_AND      = "b111".U(3.W) // AND

   // Funct7 constants for R-type instructions
   val FUNCT7_ADD = "b0000000".U(7.W) // Add
   val FUNCT7_SUB = "b0100000".U(7.W) // Subtract
   val FUNCT7_SRL = "b0000000".U(7.W) // Shift Right Logical
   val FUNCT7_SRA = "b0100000".U(7.W) // Shift Right Arithmetic

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

   // Define meaningful constants
   val MEM_ACCESS_WORD   = 2.U  // Word (32-bit)
   val MEM_ACCESS_BYTE   = 0.U  // Byte (8-bit)
   val MEM_ACCESS_BYTE_U = 4.U  // Byte unsigned (8-bit)
   val MEM_ACCESS_HALF   = 1.U  // Halfword (16-bit)
   val MEM_ACCESS_HALF_U = 5.U  // Halfword unsigned (16-bit)

   // Writeback Select Signal
   val WB_ALU  = 2.asUInt(3.W)
   val WB_MEM  = 3.asUInt(3.W)
   val WB_PC4  = 1.asUInt(3.W)
   val WB_CSR  = 4.asUInt(3.W)
   val WB_X    = 0.asUInt(3.W)

   // Define write address types
   val UART_ADDR =  0.U(3.W)
   val SRAM_ADDR =  1.U(3.W)
   val FLASH_ADDR = 2.U(3.W)
   val SPI_ADDR = 3.U(3.W)
   val PSRAM_ADDR = 4.U(3.W)
   val SDRAM_ADDR = 5.U(3.W)
   val OTHER_ADDR = 6.U(3.W)

   // PC reset vector
   val RESET_VECTOR = 0x30000000L.U(32.W) 

   // Device
   val UART_BASE_ADDR = 0x10000000L.U(32.W)
   val UART_TOP_ADDR  = 0x10000fffL.U(32.W)

   // SRAM
   val SRAM_BASE   = 0x0f000000L.U(32.W) 
   val SRAM_TOP    = 0x0fffffffL.U(32.W)

   // PSRAM
   val PSRAM_BASE = 0x80000000L.U(32.W)
   val PSRAM_TOP  = 0x9fffffffL.U(32.W)

   // SDRAM
   val SDRAM_BASE = 0xa0000000L.U(32.W)
   val SDRAM_TOP  = 0xbfffffffL.U(32.W)

   // FLASH
   val FLASH_BASE   = 0x30000000L.U(32.W) 
   val FLASH_TOP    = 0x3fffffffL.U(32.W)

   // SPI master
   val SPI_BASE   = 0x10001000L.U(32.W) 
   val SPI_TOP    = 0x10001fffL.U(32.W)

   // CLINT
   val CLINT_BASE = 0x02000000L.U(32.W)
   val CLINT_TOP  = 0x0200ffffL.U(32.W)

   // Memoey config
   val MEM_BASE   = 0x80000000L.U(32.W) 
   val MEM_TOP    = 0x80ffffffL.U(32.W)

   // CSR 
   val CSR_ADDR_MSTATUS = 0x300.U(12.W) // Machine Status Register
   val CSR_ADDR_MTVEC = 0x305.U(12.W) // Machine Trap Vector Register
   val CSR_ADDR_MEPC  = 0x341.U(12.W) // Machine Exception Program Counter
   val CSR_ADDR_MCAUSE = 0x342.U(12.W) // Machine Cause Register

   // Funct3 constants for CSR instructions
   val FUNCT3_CSRRW  = "b001".U(3.W) // CSR Read and Write
   val FUNCT3_CSRRS  = "b010".U(3.W) // CSR Read and Set
   val FUNCT3_ECALL  = "b000".U(3.W) // Environment Call
   val FUNCT3_MRET   = "b000".U(3.W) // Environment Break

   // Funct12 constants for CSR instructions
   val FUNCT12_ECALL  = "b000000000000".U(12.W)
   val FUNCT12_MRET   = "b001100000010".U(12.W)

   // The Bubble Instruction (Machine generated NOP)
   // Insert (XOR x0,x0,x0) which is different from software compiler
   // generated NOPs which are (ADDI x0, x0, 0).
   // Reasoning for this is to let visualizers and stat-trackers differentiate
   // between software NOPs and machine-generated Bubbles in the pipeline.
   val BUBBLE  = 0x4033.U(32.W)
}

}


