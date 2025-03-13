// Include definitions
`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_IDU (
    // Clock and reset signals
    input                                clk,
    input                                rst,
    // Signals passed from IFU
    input      [31:0]                                inst_i,
    input  [`ysyx_24120009_DATA_WIDTH-1:0] pc_i,
    input                                            inst_valid,
    // IDU interact with register file 
    input      [`ysyx_24120009_DATA_WIDTH-1:0]       rs1_data_i,
    input      [`ysyx_24120009_DATA_WIDTH-1:0]       rs2_data_i,
    output     wire [`ysyx_24120009_REG_ADDR_WIDTH-1:0]   rs1_addr,
    output     wire [`ysyx_24120009_REG_ADDR_WIDTH-1:0]   rs2_addr,
    // Siganls passed to EXU
    output     [`ysyx_24120009_REG_ADDR_WIDTH-1:0]   rd_addr_o,
    output     [`ysyx_24120009_DATA_WIDTH-1:0]    Op1,
    output     [`ysyx_24120009_DATA_WIDTH-1:0]    Op2,
    output     [`ysyx_24120009_DATA_WIDTH-1:0]    pc_o,
    output     [`ysyx_24120009_DATA_WIDTH-1:0]    inst_o,
    output     [`ysyx_24120009_DATA_WIDTH-1:0]    rs2_data_o,
    output                                        ID_done,
    // Signals passed back to IFU (Feedback signals)
    output [`ysyx_24120009_DATA_WIDTH-1:0] jump_reg_target_o,
    output [`ysyx_24120009_DATA_WIDTH-1:0] br_target_o,
    output [`ysyx_24120009_DATA_WIDTH-1:0] jmp_target_o,
    output reg    [2:0]                                 pc_sel,
    // debug signals 
    output [1:0] idu_state_debug
);

    // State definition
    typedef enum reg [1:0] {
        IDLE,
        ID,
        DONE
    } state_t;

    state_t state;

    // State machine logic
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
        end else begin
            case (state)
                IDLE: begin
                    if (inst_valid == 1'b1) begin
                        state <= ID;
                    end
                end

                ID: begin
                    state <= DONE;
                end

                DONE: begin
                    state <= IDLE;
                end
                default: begin
                    state <= IDLE;
                end
            endcase
        end
    end

    // Assign output and debug signals 
    assign ID_done = (state == DONE);
    assign idu_state_debug = state;

    // Get ready for pipeline
    ysyx_24120009_Reg #(
        .WIDTH(`ysyx_24120009_DATA_WIDTH),
        .RESET_VAL(`ysyx_24120009_RESET_PC)
    ) pc_reg_IDU (
        .clk (clk),
        .rst (rst),
        .din (pc_i),
        .dout(pc_o),
        .wen (1'b1)
    );

    ysyx_24120009_Reg #(
        .WIDTH(`ysyx_24120009_DATA_WIDTH),
        .RESET_VAL(`ysyx_24120009_RESET_PC)
    ) inst_reg_IDU (
        .clk (clk),
        .rst (rst),
        .din (inst_i),
        .dout(inst_o),
        .wen (1'b1)
    );

    // Internal signals declaration
    wire br_eq, br_lt, br_ltu;
    reg [1:0] Op1Sel;
    reg [1:0] Op2Sel;

    // Extract rs1, rs2 and rd fields from instruction
    wire [`ysyx_24120009_REG_ADDR_WIDTH-1:0]  rd_addr   = inst_o[11:7];
    assign  rs1_addr  = inst_o[19:15];
    assign  rs2_addr  = inst_o[24:20];

    // Immediate generation
    // 对 imm_12 做符号扩展至 64 位
    // 提取不同类型立即数字段
    wire [11:0] imm_i = inst_o[31:20];
    wire [11:0] imm_s = {inst_o[31:25], inst_o[11:7]};
    wire [11:0] imm_b = {inst_o[31], inst_o[7], inst_o[30:25], inst_o[11:8]};
    wire [19:0] imm_u = inst_o[31:12];
    wire [19:0] imm_j = {inst_o[31], inst_o[19:12], inst_o[20], inst_o[30:21]};

    // sign extension
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


    // calculate jump and branch target addresses
    assign jump_reg_target_o = rs1_data_i + imm_i_sext; // JALR 指令
    assign br_target_o       = pc_i + imm_b_sext;
    assign jmp_target_o      = pc_i + imm_j_sext; // JAL 指令


    // Branch condition generation
    assign br_eq  = (rs1_data_i == rs2_data_i); // BEQ 指令
    assign br_lt  = ($signed(rs1_data_i) < $signed(rs2_data_i)); // BLT 指令
    assign br_ltu = (rs1_data_i < rs2_data_i); // BLTU 指令

    // Signals passed to EXU
    assign rd_addr_o       = rd_addr;
    assign rs2_data_o = rs2_data_i;

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

    // Control Unit for IDU
    wire [2:0] funct3 = inst_o[14:12];
    wire [6:0] funct7 = inst_o[31:25];
    wire [6:0] opcode = inst_o[6:0];

    // pc_sel signal generation (stage 1)
    wire branch_taken;
    ysyx_24120009_MuxKey #(6, 3, 1) b_taken_mux (
        .out(branch_taken),
        .key(funct3),
        .lut({
            `ysyx_24120009_FUNCT3_BEQ, br_eq ? 1'b1: 1'b0,
            `ysyx_24120009_FUNCT3_BNE, ~br_eq ? 1'b1: 1'b0,
            `ysyx_24120009_FUNCT3_BLT, br_lt ? 1'b1: 1'b0,
            `ysyx_24120009_FUNCT3_BGE, ~br_lt ? 1'b1: 1'b0,
            `ysyx_24120009_FUNCT3_BLTU, br_ltu ? 1'b1: 1'b0,
            `ysyx_24120009_FUNCT3_BGEU, ~br_ltu ? 1'b1: 1'b0
        })
    );

    // pc_sel signal generation (stage 2)
    always @(*) begin
        if (opcode == `ysyx_24120009_OPCODE_JALR && funct3 == `ysyx_24120009_FUNCT3_JALR) begin
            pc_sel = 3'b001;
        end else if (opcode == `ysyx_24120009_OPCODE_J) begin
            pc_sel = 3'b011;
        end else if (opcode == `ysyx_24120009_OPCODE_B && branch_taken == 1'b1) begin
            pc_sel = 3'b010;
        end else begin
            pc_sel = 3'b000;
        end
    end

    // Op1Sel and Op2Sel signals generation
    always @(*) begin
        case (opcode)
            `ysyx_24120009_OPCODE_LUI: begin
                Op1Sel = 2'b01;
                Op2Sel = 2'b00;
            end
            `ysyx_24120009_OPCODE_AUIPC: begin
                Op1Sel = 2'b01;
                Op2Sel = 2'b00;
            end
            `ysyx_24120009_OPCODE_JALR: begin
                Op1Sel = 2'b00;
                Op2Sel = 2'b00;
            end
            `ysyx_24120009_OPCODE_J: begin
                Op1Sel = 2'b00;
                Op2Sel = 2'b00;
            end
            `ysyx_24120009_OPCODE_B: begin
                Op1Sel = 2'b00;
                Op2Sel = 2'b00;
            end
            `ysyx_24120009_OPCODE_LOAD: begin
                Op1Sel = 2'b00;
                Op2Sel = 2'b01;
            end
            `ysyx_24120009_OPCODE_S: begin
                Op1Sel = 2'b00;
                Op2Sel = 2'b10;
            end
            `ysyx_24120009_OPCODE_R: begin
                Op1Sel = 2'b00;
                Op2Sel = 2'b11;
            end
            `ysyx_24120009_OPCODE_I: begin
                Op1Sel = 2'b00;
                Op2Sel = 2'b01;
            end
            default: begin
                Op1Sel = 2'b00;
                Op2Sel = 2'b00;
            end
        endcase
    end
endmodule
