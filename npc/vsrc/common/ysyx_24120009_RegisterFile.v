module ysyx_24120009_RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
    input clk,
    input [DATA_WIDTH-1:0] wdata,
    input [ADDR_WIDTH-1:0] waddr,
    input wen,
    input [ADDR_WIDTH-1:0] raddr1,
    input [ADDR_WIDTH-1:0] raddr2,
    output [DATA_WIDTH-1:0] rdata1,
    output [DATA_WIDTH-1:0] rdata2,
    // For debug purpose
    output [DATA_WIDTH-1:0] x1,
    output [DATA_WIDTH-1:0] x2,
    output [DATA_WIDTH-1:0] x3
);
    // initialize the register file for simulation
    initial begin
        integer i;
        for (i = 0; i < 2**ADDR_WIDTH; i = i + 1) begin
            rf[i] = {DATA_WIDTH{1'b0}};
        end
    end

    reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];

    always @(posedge clk) begin
        if (wen && waddr != 0) begin
            rf[waddr] <= wdata;
        end
        rf[0] <= {DATA_WIDTH{1'b0}}; // 确保 rf[0] 始终为零
    end

    assign rdata1 = rf[raddr1];
    assign rdata2 = rf[raddr2];

    // Debug output for x1, x2, x3
    assign x1 = rf[1]; // x1 寄存器
    assign x2 = rf[2]; // x2 寄存器
    assign x3 = rf[3]; // x3 寄存器
endmodule