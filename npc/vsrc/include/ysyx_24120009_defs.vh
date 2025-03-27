`define ysyx_24120009_DATA_WIDTH    32
`define ysyx_24120009_REG_ADDR_WIDTH 5

// PC 初值 = 0x80000000
`define ysyx_24120009_RESET_PC      32'h80000000

// RISC-V 每条指令 4 字节
`define ysyx_24120009_PC_STEP       32'd4

// RISC-V 指令定义
`define ysyx_24120009_OPCODE_JALR  7'b1100111
`define ysyx_24120009_FUNCT3_JALR  3'b000
`define ysyx_24120009_OPCODE_J  7'b1101111
`define ysyx_24120009_OPCODE_B  7'b1100011
`define ysyx_24120009_FUNCT3_BEQ  3'b000
`define ysyx_24120009_FUNCT3_BNE  3'b001
`define ysyx_24120009_FUNCT3_BLT  3'b100
`define ysyx_24120009_FUNCT3_BGE  3'b101
`define ysyx_24120009_FUNCT3_BLTU  3'b110
`define ysyx_24120009_FUNCT3_BGEU  3'b111
`define ysyx_24120009_OPCODE_AUIPC  7'b0010111
`define ysyx_24120009_OPCODE_LUI  7'b0110111
`define ysyx_24120009_OPCODE_LOAD  7'b0000011
`define ysyx_24120009_OPCODE_S  7'b0100011
`define ysyx_24120009_OPCODE_R  7'b0110011
`define ysyx_24120009_OPCODE_I  7'b0010011
`define ysyx_24120009_OPCODE_CSR  7'b1110011

// ALU 操作类型
`define ALU_OP_ADD      5'b00000  // Addition
`define ALU_OP_SUB      5'b00001  // Subtraction
`define ALU_OP_SLT      5'b00010  // Signed less than
`define ALU_OP_SLTU     5'b00011  // Unsigned less than
`define ALU_OP_XOR      5'b00100  // Bitwise XOR
`define ALU_OP_OR       5'b00101  // Bitwise OR
`define ALU_OP_AND      5'b00110  // Bitwise AND
`define ALU_OP_SLL      5'b00111  // Logical shift left
`define ALU_OP_SRL      5'b01000  // Logical shift right
`define ALU_OP_SRA      5'b01001  // Arithmetic shift right
`define ALU_OP_PASS_A   5'b01010  // Pass A as result
