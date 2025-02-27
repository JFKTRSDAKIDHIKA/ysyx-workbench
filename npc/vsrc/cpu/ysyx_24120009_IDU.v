// Include definitions
`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_IDU (
    // the instruction to be decoded
    input      [31:0]                                inst_i,
    // register file access
    input      [`ysyx_24120009_DATA_WIDTH-1:0]       rs1_data_i,
    input      [`ysyx_24120009_DATA_WIDTH-1:0]       rs2_data_i,
    output     wire [`ysyx_24120009_REG_ADDR_WIDTH-1:0]   rs1_addr,
    output     wire [`ysyx_24120009_REG_ADDR_WIDTH-1:0]   rs2_addr,
    output     [`ysyx_24120009_REG_ADDR_WIDTH-1:0]   rd_addr_o,
    // Operands output
    output     [`ysyx_24120009_DATA_WIDTH-1:0]    Op1,
    output     [`ysyx_24120009_DATA_WIDTH-1:0]    Op2,
    input      [1:0]                                 Op1Sel,
    input      [1:0]                                 Op2Sel,    
    // Jump target addresses
    input  [`ysyx_24120009_DATA_WIDTH-1:0] pc_i,
    output [`ysyx_24120009_DATA_WIDTH-1:0] jump_reg_target_o,
    output [`ysyx_24120009_DATA_WIDTH-1:0] br_target_o,
    output [`ysyx_24120009_DATA_WIDTH-1:0] jmp_target_o,
    // Branch conditions
    output br_eq, br_lt, br_ltu
);

    // -----------------------------
    // 1) 提取指令字段
    // -----------------------------
    wire [`ysyx_24120009_REG_ADDR_WIDTH-1:0]  wb_addr   = inst_i[11:7];
    assign  rs1_addr  = inst_i[19:15];
    assign  rs2_addr  = inst_i[24:20];

    // -----------------------------
    // 2) 立即数扩展
    // -----------------------------
    // 对 imm_12 做符号扩展至 64 位
        // 提取不同类型立即数字段
    wire [11:0] imm_i = inst_i[31:20];
    wire [11:0] imm_s = {inst_i[31:25], inst_i[11:7]};
    wire [11:0] imm_b = {inst_i[31], inst_i[7], inst_i[30:25], inst_i[11:8]};
    wire [19:0] imm_u = inst_i[31:12];
    wire [19:0] imm_j = {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]};
    wire [4:0]  imm_z = inst_i[19:15];

    // 符号扩展（Sign Extend）
    wire [`ysyx_24120009_DATA_WIDTH-1:0] imm_i_sext;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] imm_s_sext;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] imm_b_sext;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] imm_u_sext;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] imm_j_sext;

    // sign extend bits should be consistent with macro ysyx_24120009_DATA_WIDTH
    assign imm_i_sext = {{20{imm_i[11]}}, imm_i}; 
    assign imm_s_sext = {{20{imm_s[11]}}, imm_s}; 
    assign imm_b_sext = {{19{imm_b[11]}}, imm_b, 1'b0}; 
    assign imm_u_sext = {imm_u, 12'b0}; 
    assign imm_j_sext = {{11{imm_j[19]}}, imm_j, 1'b0}; 


    // -----------------------------
    // 2.1) 计算跳转目标地址
    // -----------------------------
    // 计算跳转目标地址
    assign jump_reg_target_o = rs1_data_i + imm_i_sext; // JALR 指令
    assign br_target_o       = pc_i + imm_b_sext;
    assign jmp_target_o      = pc_i + imm_j_sext; // JAL 指令


    // -----------------------------
    // 2.2) 生成分支条件
    // -----------------------------
    // 生成分支条件
    assign br_eq  = (rs1_data_i == rs2_data_i); // BEQ 指令
    assign br_lt  = ($signed(rs1_data_i) < $signed(rs2_data_i)); // BLT 指令
    assign br_ltu = (rs1_data_i < rs2_data_i); // BLTU 指令

    // -----------------------------
    // 3) 输出给 EXU 和寄存器文件
    // -----------------------------
    assign rd_addr_o       = wb_addr;
    ysyx_24120009_MuxKey #(2, 2, `ysyx_24120009_DATA_WIDTH) op1_sel_mux (
        .out(Op1),
        .key(Op1Sel),
        .lut({
            2'b00, rs1_data_i,
            2'b01, imm_u_sext
        })
    );

    ysyx_24120009_MuxKey #(4, 2, `ysyx_24120009_DATA_WIDTH) op2_sel_mux (
        .out(Op2),
        .key(Op2Sel),
        .lut({
            2'b00, pc_i,
            2'b01, imm_i_sext,
            2'b10, imm_s_sext,
            2'b11, rs2_data_i
        })
    );


endmodule
