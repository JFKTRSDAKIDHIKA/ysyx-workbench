module ysyx_24120009_RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
    input clk,
    input [DATA_WIDTH-1:0] wdata,
    input [ADDR_WIDTH-1:0] waddr,
    input wen,
    input [ADDR_WIDTH-1:0] raddr1,
    input [ADDR_WIDTH-1:0] raddr2,
    output [DATA_WIDTH-1:0] rdata1,
    output [DATA_WIDTH-1:0] rdata2,
    // debug
    output [DATA_WIDTH-1:0] x2_debug
);    
    // DPI-C function to get the register values
    import "DPI-C" function void get_register_values(input logic [31:0] rf[31:0]);

    // initialize the register file 
    initial begin
        integer i;
        for (i = 0; i < 2**ADDR_WIDTH; i = i + 1) begin
            rf[i] = {DATA_WIDTH{1'b0}};
        end
    end

    // signal declaration
    reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];

    // procedural block
    always @(posedge clk) begin
        if (wen && waddr != 0) begin
            rf[waddr] <= wdata;
        end
    end

    always @(*) begin
        get_register_values(rf);
    end

    // signal assignments
    assign rdata1 = rf[raddr1];
    assign rdata2 = rf[raddr2];
    // debug
    assign x2_debug = rf[2];


endmodule