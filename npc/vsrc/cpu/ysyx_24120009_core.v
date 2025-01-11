`include "include/ysyx_24120009_defs.vh"

module ysyx_24120009_core (
    input wire clk,
    input wire rst,
    // Memory interface
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] mem_addr,
    output wire [31:0] mem_wdata,
    output wire mem_wen,
    input wire [31:0] mem_rdata
);

    // Internal signals
    wire [`ysyx_24120009_DATA_WIDTH-1:0] pc;
    wire [31:0] inst;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] reg_write_data;
    wire [4:0] alu_op;
    wire [1:0] op1_sel;
    wire [1:0] op2_sel;
    wire [2:0] pc_sel;
    wire rf_we;
    wire mem_en;
    wire mem_wen_internal;
    wire [1:0] wb_sel;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] Op1;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] Op2;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] pc_plus4;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] jump_reg_target;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] br_target;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] jmp_target;
    wire br_eq;
    wire br_lt;
    wire br_ltu;

    // Instruction Memory
    reg [`ysyx_24120009_DATA_WIDTH-1:0] inst_mem [0:255];
    initial begin
        $readmemh("inst_mem.hex", inst_mem);
    end

    // Register File
    reg [`ysyx_24120009_DATA_WIDTH-1:0] regfile [0:31];
    always @(posedge clk) begin
        if (rf_we) begin
            regfile[inst[11:7]] <= reg_write_data;
        end
    end

    // Fetch instruction
    assign inst = inst_mem[pc[`ysyx_24120009_DATA_WIDTH-1:2]];

    // Instantiate IDU
    ysyx_24120009_IDU idu (
        .inst_i(inst),
        .rd_o(),
        .Op1(Op1),
        .Op2(Op2),
        .Op1Sel(op1_sel),
        .Op2Sel(op2_sel),
        .rs1_data_i(),
        .rs2_data_i(),
        .pc_i(pc),
        .jump_reg_target_o(jump_reg_target),
        .br_target_o(br_target),
        .jmp_target_o(jmp_target),
        .br_eq(br_eq),
        .br_lt(br_lt),
        .br_ltu(br_ltu)
    );

    // Instantiate Control Logic
    ControlLogic control (
        .inst(inst),
        .br_eq(br_eq),
        .br_lt(br_lt),
        .br_ltu(br_ltu),
        .alu_op(alu_op),
        .op1_sel(op1_sel),
        .op2_sel(op2_sel),
        .pc_sel(pc_sel),
        .rf_we(rf_we),
        .mem_en(mem_en),
        .mem_wen(mem_wen_internal),
        .wb_sel(wb_sel)
    );

    // Instantiate EXU
    ysyx_24120009_EXU exu (
        .clk(clk),
        .rst(rst),
        .Op1(Op1),
        .Op2(Op2),
        .alu_op(alu_op),
        .wb_sel(wb_sel),
        .pc_plus4(pc_plus4),
        .reg_write_data(reg_write_data)
    );

    // Memory interface connections
    assign mem_addr = pc;
    assign mem_wdata = reg_write_data;
    assign mem_wen = mem_wen_internal;

endmodule