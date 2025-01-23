`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_EXU (
    input wire clk,
    input wire rst,
    input wire [`ysyx_24120009_DATA_WIDTH-1:0] Op1,
    input wire [`ysyx_24120009_DATA_WIDTH-1:0] Op2,
    input wire [4:0] alu_op,
    input wire [1:0] wb_sel,
    input wire [`ysyx_24120009_DATA_WIDTH-1:0] pc_plus4,
    input wire [`ysyx_24120009_DATA_WIDTH-1:0] dmem_rdata,
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] dmem_addr,
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] reg_write_data
);
    wire [`ysyx_24120009_DATA_WIDTH-1:0] result;
    assign dmem_addr = result;

    ysyx_24120009_ALU alu_instance (
       .A(Op1),
       .B(Op2),
      .ALUFun(alu_op),
      .Result(result)
    );

    ysyx_24120009_MuxKeyWithDefault #(
        .NR_KEY(4),
        .KEY_LEN(2),
        .DATA_LEN(`ysyx_24120009_DATA_WIDTH)
    ) wb_mux (
        .out(reg_write_data),
        .key(wb_sel),
        .default_out({`ysyx_24120009_DATA_WIDTH{1'b0}}),
        .lut({
            2'b00, {`ysyx_24120009_DATA_WIDTH{1'b0}}, // Example value, replace with actual data
            2'b01, pc_plus4,
            2'b10, result,
            2'b11, dmem_rdata // data memory read data
        })
    );

endmodule