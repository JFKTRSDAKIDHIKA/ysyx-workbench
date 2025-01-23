`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_ALU (
    input [`ysyx_24120009_DATA_WIDTH-1:0] A,
    input [`ysyx_24120009_DATA_WIDTH-1:0] B,
    input [4:0] ALUFun,
    output reg [`ysyx_24120009_DATA_WIDTH-1:0] Result
);

    // Internal signals declaration
    wire [`ysyx_24120009_DATA_WIDTH-1:0] add_result     = A + B;                  // Addition
    wire [`ysyx_24120009_DATA_WIDTH-1:0] sub_result     = A - B;                  // Subtraction
    wire [`ysyx_24120009_DATA_WIDTH-1:0] slt_result     = {31'b0, $signed(A) < $signed(B)}; // Less than (signed)
    wire [`ysyx_24120009_DATA_WIDTH-1:0] sltu_result    = {31'b0, A < B};         // Less than (unsigned)
    wire [`ysyx_24120009_DATA_WIDTH-1:0] xor_result     = A ^ B;                  // Bitwise XOR
    wire [`ysyx_24120009_DATA_WIDTH-1:0] or_result      = A | B;                  // Bitwise OR
    wire [`ysyx_24120009_DATA_WIDTH-1:0] and_result     = A & B;                  // Bitwise AND
    wire [`ysyx_24120009_DATA_WIDTH-1:0] sll_result     = A << (B & 32'h1f);      // Logical shift left
    wire [`ysyx_24120009_DATA_WIDTH-1:0] srl_result     = A >> (B & 32'h1f);      // Logical shift right
    wire [`ysyx_24120009_DATA_WIDTH-1:0] sra_result = $signed(A) >>> (B & 32'h1f); // Arithmetic shift right
    wire [`ysyx_24120009_DATA_WIDTH-1:0] op1_result = A;                          // Pass A as result

    // Instantiate MuxKey module
    ysyx_24120009_MuxKey #(11, 5, `ysyx_24120009_DATA_WIDTH) alu_mux (
        .out(Result),
        .key(ALUFun),
        .lut({
            5'b00000, add_result,  // Addition
            5'b00001, sub_result,  // Subtraction
            5'b00010, slt_result,  // Signed less than
            5'b00011, sltu_result, // Unsigned less than
            5'b00100, xor_result,  // Bitwise XOR
            5'b00101, or_result,   // Bitwise OR
            5'b00110, and_result,  // Bitwise AND
            5'b00111, sll_result,  // Logical shift left
            5'b01000, srl_result,  // Logical shift right
            5'b01001, sra_result,  // Arithmetic shift right
            5'b01010, op1_result   // Pass A as result
        })
    );

endmodule