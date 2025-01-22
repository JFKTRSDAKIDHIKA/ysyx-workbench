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

    // Declare the register file (32-bit registers)
    reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];

    always @(posedge clk) begin
        if (wen && waddr != 0) begin
            rf[waddr] <= wdata;
        end
        rf[0] <= {DATA_WIDTH{1'b0}}; // Ensure rf[0] is always zero
    end

    assign rdata1 = rf[raddr1];
    assign rdata2 = rf[raddr2];
    // debug
    assign x2_debug = rf[2];

    import "DPI-C" function void get_register_values(input logic [31:0] rf[32]);
    // Declare a flat array to pass register values to DPI-C function
    logic [DATA_WIDTH-1:0] rf_flat [2**ADDR_WIDTH-1:0];

    always @(posedge clk) begin
        // 将原始多维数组的值展平到未打包的一维数组
        for (int i = 0; i < 2**ADDR_WIDTH; i = i + 1) begin
            rf_flat[i] = rf[i];  // 直接将每个寄存器的值存入一维数组
        end

        // 调用 DPI-C 函数传递展平后的数组
        get_register_values(rf_flat);
    end
endmodule