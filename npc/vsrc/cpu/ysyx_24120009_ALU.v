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
        // Add more cases here for other ALU functions
        default: Result = 32'b0; // Default case
    endcase
end

endmodule