`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_ALU (
    input [`ysyx_24120009_DATA_WIDTH-1:0] A,
    input [`ysyx_24120009_DATA_WIDTH-1:0] B,
    input [4:0] ALUFun,
    output reg [`ysyx_24120009_DATA_WIDTH-1:0] Result
);

always @(*) begin
    case (ALUFun)
        5'b00000: Result = A + B; // Addition
        5'b00001: Result = A - B; // Subtraction
        5'b00010: Result = $signed (A) < $signed (B); // Less than signed
        5'b00011: Result = A < B; // Less than unsigned
        5'b00100: Result = A ^ B; // Bitwise XOR
        5'b00101: Result = A | B; // Bitwise OR
        5'b00110: Result = A & B; // Bitwise AND
        5'b00111: Result = A << B; // Shift left
        5'b01000: Result = A >> B; // Shift right
        5'b01001: Result = $signed(A) >>> B; // 算术右移



        // Add more cases here for other ALU functions
        default: Result = 32'b0; // Default case
    endcase
end

endmodule