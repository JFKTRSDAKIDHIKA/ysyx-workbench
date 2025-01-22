module ysyx_24120009_RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
    input clk,
    input [DATA_WIDTH-1:0] wdata,
    input [ADDR_WIDTH-1:0] waddr,
    input wen,
    input [ADDR_WIDTH-1:0] raddr1,
    input [ADDR_WIDTH-1:0] raddr2,
    output [DATA_WIDTH-1:0] rdata1,
    output [DATA_WIDTH-1:0] rdata2,
    output [DATA_WIDTH-1:0] x2_debug
);
    // initialize the register file for simulation
    initial begin
        integer i;
        for (i = 0; i < 2**ADDR_WIDTH; i = i + 1) begin
            rf[i] = {DATA_WIDTH{1'b0}};
        end
    end

    import "DPI-C" function void get_register_values(input logic [31:0] rf[32]);
    always @(posedge clk) begin
        get_register_values(rf);  // 调用 DPI-C 函数，传递整个寄存器文件
    end

    // Declare the register file (32-bit registers)
    reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];

    always @(posedge clk) begin
        if (wen && waddr != 0) begin
            rf[5'b00010] <= wdata;
        end
        rf[0] <= {DATA_WIDTH{1'b0}}; // Ensure rf[0] is always zero
    end

    assign rdata1 = rf[raddr1];
    assign rdata2 = rf[raddr2];
    // debug
    assign x2_debug = rf[2];
endmodule