// Include definitions
`include "include/ysyx_24120009_defs.vh"

module ysyx_24120009_IDU (
    // the instruction to be decoded
    input      [31:0]                                inst_i,
    // register file access
    output     [`ysyx_24120009_REG_ADDR_WIDTH-1:0]   rd_o,
    output     [`ysyx_24120009_REG_ADDR_WIDTH-1:0]   Op1,
    output     [`ysyx_24120009_REG_ADDR_WIDTH-1:0]   Op2,
    input      [1:0]                                 Op1Sel,
    input      [1:0]                                 Op2Sel,
    input      [`ysyx_24120009_DATA_WIDTH-1:0]       rs1_data_i,
    input      [`ysyx_24120009_DATA_WIDTH-1:0]       rs2_data_i,
    // 跳转目标地址
    input  [`ysyx_24120009_DATA_WIDTH-1:0] pc_i,
    output [`ysyx_24120009_DATA_WIDTH-1:0] jump_reg_target_o,
    output [`ysyx_24120009_DATA_WIDTH-1:0] br_target_o,
    output [`ysyx_24120009_DATA_WIDTH-1:0] jmp_target_o;
    // 分支条件
    output br_eq, br_lt, br_ltu;
);

    // -----------------------------
    // 1) 提取指令字段
    // -----------------------------
    wire [4:0]  wb_addr   = inst_i[11:7];
    wire [4:0]  rs1_addr  = inst_i[19:15];
    wire [4:0]  rs2_addr  = inst_i[24:20];

    // -----------------------------
    // 2) 立即数扩展
    // -----------------------------
    // 对 imm_12 做符号扩展至 64 位
        // 提取不同类型立即数字段
    wire [11:0] imm_i = inst_i[31:20];
    wire [11:0] imm_s = {inst_i[31:25], inst_i[11:7]};
    wire [12:0] imm_b = {inst_i[31], inst_i[7], inst_i[30:25], inst_i[11:8]};
    wire [19:0] imm_u = inst_i[31:12];
    wire [20:0] imm_j = {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]};
    wire [4:0]  imm_z = inst_i[19:15];

    // 符号扩展（Sign Extend）
    wire [`ysyx_24120009_DATA_WIDTH-1:0] imm_i_sext;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] imm_s_sext;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] imm_b_sext;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] imm_u_sext;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] imm_j_sext;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] imm_z_sext;

    assign imm_i_sext = {{52{imm_i[11]}}, imm_i}; // I 型：imm[11] 符号位扩展
    assign imm_s_sext = {{52{imm_s[11]}}, imm_s}; // S 型：imm[11] 符号位扩展
    assign imm_b_sext = {{51{imm_b[12]}}, imm_b, 1'b0}; // B 型：imm[12] 符号位扩展，并在最低位补 0
    assign imm_u_sext = {imm_u, 12'b0}; // U 型：高 20 位直接用 imm_u，低 12 位补 0
    assign imm_j_sext = {{43{imm_j[20]}}, imm_j, 1'b0}; // J 型：imm[20] 符号位扩展，并在最低位补 0
    assign imm_z_sext = {59'b0, imm_z}; // Z 型：imm_z 高位填充 0


    // -----------------------------
    // 2.1) 计算跳转目标地址
    // -----------------------------
    // 计算跳转目标地址
    assign jump_reg_target_o = rs1_data_i + imm_i_sext; // JALR 指令
    assign br_target_o       = pc_i + imm_b_sext; // 分支指令
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
    assign rd_o       = wb_addr;
    assign Op1  = Op1Sel ? rs1_data_i : imm_u;
    MuxKey #(3, 2, `ysyx_24120009_REG_ADDR_WIDTH) Op2SelMux (
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
