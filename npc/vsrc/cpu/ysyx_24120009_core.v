`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_core (
    input wire clk,
    input wire rst,
    // Memory interface
    output wire [31:0] imem_addr,
    input wire [`ysyx_24120009_DATA_WIDTH-1:0] imem_rdata,
    // For debug purpose
    output [`ysyx_24120009_DATA_WIDTH-1:0] x1,
    output [`ysyx_24120009_DATA_WIDTH-1:0] x2,
    output [`ysyx_24120009_DATA_WIDTH-1:0] x3,
    output [`ysyx_24120009_DATA_WIDTH-1:0] pc_debug
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
    //
    wire [`ysyx_24120009_REG_ADDR_WIDTH-1:0] rs1_addr;
    wire [`ysyx_24120009_REG_ADDR_WIDTH-1:0] rs2_addr;
    wire [`ysyx_24120009_REG_ADDR_WIDTH-1:0] waddr;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] rdata1;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] rdata2;

    // Register File
    ysyx_24120009_RegisterFile #(
        .ADDR_WIDTH(`ysyx_24120009_REG_ADDR_WIDTH),
        .DATA_WIDTH(`ysyx_24120009_DATA_WIDTH)
    ) u_RegisterFile (
        .clk(clk),
        .wdata(reg_write_data),
        .waddr(waddr),
        .wen(rf_we),
        .raddr1(rs1_addr),
        .raddr2(rs2_addr),
        .rdata1(rdata1),
        .rdata2(rdata2),
        // For debug purpose
        .x1(x1),
        .x2(x2),
        .x3(x3)
    );
    assign pc_debug = pc;
        
        
    // Fetch instruction
    ysyx_24120009_IFU ifu (
        .clk(clk),
        .rst(rst),
        .pc_sel(pc_sel),
        .jump_reg_target(jump_reg_target),
        .br_target(br_target),
        .jmp_target(jmp_target),
        .pc_wen(1'b1),
        .pc_o(pc),
        .inst_o(inst),
        .inst_i(imem_rdata)
    );
    assign imem_addr = pc;


    // Instantiate IDU
    ysyx_24120009_IDU idu (
        // Instruction input
        .inst_i(inst),
        // Operands output
        .Op1(Op1),
        .Op2(Op2),
        .Op1Sel(op1_sel),
        .Op2Sel(op2_sel),
        // Register data
        .rs1_data_i(rdata1),
        .rs2_data_i(rdata2),
        .rd_addr_o(waddr),
        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        // Program counter input
        .pc_i(pc),
        // Target address outputs
        .jump_reg_target_o(jump_reg_target),
        .br_target_o(br_target),
        .jmp_target_o(jmp_target),
        // Branch condition outputs
        .br_eq(br_eq),
        .br_lt(br_lt),
        .br_ltu(br_ltu)
    );


    // Instantiate Control Logic
    ysyx_24120009_ControlLogic control (
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


endmodule