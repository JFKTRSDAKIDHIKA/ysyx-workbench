// Control logic for RV32 instructions 
`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_ControlLogic (
    input  [31:0] inst,       // RV32 instruction input
    input         br_eq,      // Branch condition: rs1 == rs2 (unused here)
    input         br_lt,      // Branch condition: rs1 < rs2 (unused here)
    input         br_ltu,     // Branch condition: rs1 < rs2 (unsigned, unused here)
    output [4:0]  alu_op,     // ALU operation type
    output [1:0]  op1_sel,    // ALU operand 1 selection
    output [1:0]  op2_sel,    // ALU operand 2 selection
    output reg [2:0]  pc_sel,     // PC selection (next PC value)
    output        rf_we,      // Register file write enable
    output        mem_en,     // Memory enable 
    output        mem_wen,    // Memory write enable 
    output [1:0]  wb_sel,     // Write-back source selection
    output        is_ebreak,  // Flag for ebreak instruction
    output [2:0]  ctl_mem_access 
);

    localparam DATA_LEN  = 17;  // Length of control signals
    localparam KEY_LEN   = 17;  // Length of inst key
    localparam NR_KEY    = 38;  // Number of keys

    wire [6:0] opcode = inst[6:0];
    wire [2:0] funct3 = inst[14:12];
    wire [6:0] funct7 = inst[31:25];

    reg [KEY_LEN-1:0] inst_key;
    
    always @(*) begin
        case (opcode)  
            7'b1100111: begin
                case (funct3)
                    3'b000: inst_key = {opcode, funct3, 7'b0};  // opcode == 7'b1100111 && funct3 == 3'b000
                    default: inst_key = {opcode, funct3, 7'b1101111};  // 默认处理其他 funct3
                endcase
            end
            7'b0010011: begin
                case (funct3)
                    3'b101: inst_key = {opcode, funct3, funct7};  // opcode == 7'b0010011 && funct3 == 3'b101
                    default: inst_key = {opcode, funct3, 7'b0000000};  // 默认处理其他 funct3
                endcase
            end
            7'b0010111: begin
                inst_key = {opcode, 3'b0, 7'b0};  
            end
            7'b1101111: begin
                inst_key = {opcode, 3'b0, 7'b0};  
            end
            7'b0110111: begin
                inst_key = {opcode, 3'b0, 7'b0};  
            end
            7'b0100011: begin
                inst_key = {opcode, funct3, 7'b0}; 
            end
            7'b0000011: begin
                inst_key = {opcode, funct3, 7'b0};  
            end
            7'b1100011: begin
                inst_key = {opcode, funct3, 7'b0};  
            end
            default: begin
                inst_key = {opcode, funct3, funct7};  // 默认处理其他 opcode 和 funct3 的组合
            end
        endcase
    end

    wire [DATA_LEN-1:0] ctl_signals;
    ysyx_24120009_MuxKey #(NR_KEY, KEY_LEN, DATA_LEN) funct_mux (
        .out(ctl_signals),
        .key(inst_key),
        .lut({
        // opcode_func3_func7 | {alu_op, op1_sel, op2_sel, pc_sel, rf_we, mem_val, mem_wen, wb_sel}
        // R-type instructions(10)
        17'b0110011_000_0000000, 17'b00000_00_11_000_1_0_0_10, // ADD
        17'b0110011_000_0100000, 17'b00001_00_11_000_1_0_0_10, // SUB
        17'b0110011_001_0000000, 17'b00111_00_11_000_1_0_0_10, // SLL
        17'b0110011_010_0000000, 17'b00010_00_11_000_1_0_0_10, // SLT
        17'b0110011_011_0000000, 17'b00011_00_11_000_1_0_0_10, // SLTU
        17'b0110011_100_0000000, 17'b00100_00_11_000_1_0_0_10, // XOR
        17'b0110011_101_0000000, 17'b01000_00_11_000_1_0_0_10, // SRL
        17'b0110011_101_0100000, 17'b01001_00_11_000_1_0_0_10, // SRA
        17'b0110011_110_0000000, 17'b00101_00_11_000_1_0_0_10, // OR
        17'b0110011_111_0000000, 17'b00110_00_11_000_1_0_0_10, // AND
        // I-type instructions(14)
        17'b0010011_000_0000000, 17'b00000_00_01_000_1_0_0_10, // ADDI
        17'b0010011_010_0000000, 17'b00010_00_01_000_1_0_0_10, // SLTI
        17'b0010011_011_0000000, 17'b00011_00_01_000_1_0_0_10, // SLTIU
        17'b0010011_100_0000000, 17'b00100_00_01_000_1_0_0_10, // XORI
        17'b0010011_110_0000000, 17'b00101_00_01_000_1_0_0_10, // ORI
        17'b0010011_111_0000000, 17'b00110_00_01_000_1_0_0_10, // ANDI
        17'b0010011_001_0000000, 17'b00111_00_01_000_1_0_0_10, // SLLI
        17'b0010011_101_0000000, 17'b01000_00_01_000_1_0_0_10, // SRLI
        17'b0010011_101_0100000, 17'b01001_00_01_000_1_0_0_10, // SRAI
        17'b0000011_010_0000000, 17'b00000_00_01_000_1_1_0_11, // LW
        17'b0000011_000_0000000, 17'b00000_00_01_000_1_1_0_11, // LB
        17'b0000011_100_0000000, 17'b00000_00_01_000_1_1_0_11, // LBU
        17'b0000011_001_0000000, 17'b00000_00_01_000_1_1_0_11, // LH
        17'b0000011_101_0000000, 17'b00000_00_01_000_1_1_0_11, // LHU
        // B-type instructions(6)
        17'b1100011_000_0000000, 17'b00000_00_00_000_0_0_0_10, // BEQ
        17'b1100011_001_0000000, 17'b00000_00_00_000_0_0_0_10, // BNE
        17'b1100011_100_0000000, 17'b00000_00_00_000_0_0_0_10, // BLT
        17'b1100011_101_0000000, 17'b00000_00_00_000_0_0_0_10, // BGE
        17'b1100011_110_0000000, 17'b00000_00_00_000_0_0_0_10, // BLTU
        17'b1100011_111_0000000, 17'b00000_00_00_000_0_0_0_10, // BGEU
        // J-type instructions(1)
        17'b1101111_000_0000000, 17'b00000_00_00_011_1_0_0_01, // JAL
        // U-type instructions(2)
        17'b0010111_000_0000000, 17'b00000_01_00_000_1_0_0_10, // AUIPC
        17'b0110111_000_0000000, 17'b01010_01_00_000_1_0_0_10, // LUI
        // S-type instructions(3)
        17'b0100011_010_0000000, 17'b00000_00_10_000_0_1_1_00, // SW
        17'b0100011_000_0000000, 17'b00000_00_10_000_0_1_1_00, // SB
        17'b0100011_001_0000000, 17'b00000_00_10_000_0_1_1_00, // SH
        // JALR instruction(1)
        17'b1100111_000_0000000, 17'b00000_00_01_001_1_0_0_01, // JALR
        // ebreak instruction(1)
        17'b1110011_000_0000000, 17'b00000_00_00_000_0_0_0_00  // EBREAK
        })
    );

    //wire is_ebreak_internal = (inst == 32'b00000000000100000000000001110011);
    wire is_ebreak_internal = (inst == 32'h00100073);
    assign is_ebreak = is_ebreak_internal;

    // Decode control signals
    assign alu_op   = ctl_signals[16:12];
    assign op1_sel  = ctl_signals[11:10];
    assign op2_sel  = ctl_signals[9:8];
    assign rf_we    = ctl_signals[4];
    assign mem_en   = ctl_signals[3];
    assign mem_wen  = ctl_signals[2];
    assign wb_sel   = ctl_signals[1:0];

    always @(*) begin
        if (opcode == 7'b1100011) begin
            // 分支指令处理逻辑
            case (funct3)
                3'b000: pc_sel = br_eq ? 3'b010 : 3'b000;            // BEQ: rs1 == rs2
                3'b001: pc_sel = ~br_eq ? 3'b010 : 3'b000;           // BNE: rs1 != rs2
                3'b100: pc_sel = br_lt ? 3'b010 : 3'b000;            // BLT: rs1 < rs2 (signed)
                3'b101: pc_sel = ~br_lt ? 3'b010 : 3'b000;           // BGE: rs1 >= rs2 (signed)
                3'b110: pc_sel = br_ltu ? 3'b010 : 3'b000;           // BLTU: rs1 < rs2 (unsigned)
                3'b111: pc_sel = ~br_ltu ? 3'b010 : 3'b000;          // BGEU: rs1 >= rs2 (unsigned)
                default: pc_sel = 3'b000;                           // 默认不跳转
            endcase
        end else begin
            // 非分支指令的情况
            pc_sel = ctl_signals[7:5];
        end
    end

    ysyx_24120009_MuxKey #(8, 10, 3) mem_acces_ctl_mux (
    .out(ctl_mem_access),
    .key({opcode, funct3}),
    .lut({
        // opcode_func3 | ctl_mem_access
        10'b0000011_010, 3'b010, // LW
        10'b0000011_000, 3'b000, // LB
        10'b0000011_100, 3'b100, // LBU
        10'b0000011_001, 3'b001, // LH
        10'b0000011_101, 3'b101, // LHU
        10'b0100011_010, 3'b010, // SW
        10'b0100011_000, 3'b000, // SB
        10'b0100011_001, 3'b001  // SH
    })
    );

endmodule

    /*
    always @(*) begin
        case (opcode)
            7'b0010011: begin // I-type instructions
                case (funct3)
                    3'b000: begin // ADDI
                        alu_op_reg   = 5'b00000;
                        op1_sel_reg  = 2'b00;
                        op2_sel_reg  = 2'b01;
                        pc_sel_reg   = 3'b000;
                        rf_we_reg    = 1'b1;
                        mem_en_reg   = 1'b0;
                        mem_wen_reg  = 1'b0;
                        wb_sel_reg   = 2'b10;
                    end
                    3'b010: begin // slti
                        alu_op_reg   = 5'b00010;
                        op1_sel_reg  = 2'b00;
                        op2_sel_reg  = 2'b01;
                        pc_sel_reg   = 3'b000;
                        rf_we_reg    = 1'b1;
                        mem_en_reg   = 1'b0;
                        mem_wen_reg  = 1'b0;
                        wb_sel_reg   = 2'b10;
                    end
                    3'b011: begin // sltiu
                        alu_op_reg   = 5'b00011;
                        op1_sel_reg  = 2'b00;
                        op2_sel_reg  = 2'b01;
                        pc_sel_reg   = 3'b000;
                        rf_we_reg    = 1'b1;
                        mem_en_reg   = 1'b0;
                        mem_wen_reg  = 1'b0;
                        wb_sel_reg   = 2'b10;
                    end
                    3'b100: begin // xori
                        alu_op_reg   = 5'b00100;
                        op1_sel_reg  = 2'b00;
                        op2_sel_reg  = 2'b01;
                        pc_sel_reg   = 3'b000;
                        rf_we_reg    = 1'b1;
                        mem_en_reg   = 1'b0;
                        mem_wen_reg  = 1'b0;
                        wb_sel_reg   = 2'b10;
                    end
                    3'b110: begin // ori
                        alu_op_reg   = 5'b00101;
                        op1_sel_reg  = 2'b00;
                        op2_sel_reg  = 2'b01;
                        pc_sel_reg   = 3'b000;
                        rf_we_reg    = 1'b1;
                        mem_en_reg   = 1'b0;
                        mem_wen_reg  = 1'b0;
                        wb_sel_reg   = 2'b10;
                    end
                    3'b111: begin // andi
                        alu_op_reg   = 5'b00110;
                        op1_sel_reg  = 2'b00;
                        op2_sel_reg  = 2'b01;
                        pc_sel_reg   = 3'b000;
                        rf_we_reg    = 1'b1;
                        mem_en_reg   = 1'b0;
                        mem_wen_reg  = 1'b0;
                        wb_sel_reg   = 2'b10;
                    end
                    3'b101: begin // srli 和 srai
                        case (funct7)
                            7'b0000000: begin // srli
                                alu_op_reg   = 5'b01000;
                                op1_sel_reg  = 2'b00;
                                op2_sel_reg  = 2'b01;
                                pc_sel_reg   = 3'b000;
                                rf_we_reg    = 1'b1;
                                mem_en_reg   = 1'b0;
                                mem_wen_reg  = 1'b0;
                                wb_sel_reg   = 2'b10;
                            end
                            7'b0100000: begin // srai
                                alu_op_reg   = 5'b01001; 
                                op1_sel_reg  = 2'b00;
                                op2_sel_reg  = 2'b01;
                                pc_sel_reg   = 3'b000;
                                rf_we_reg    = 1'b1;
                                mem_en_reg   = 1'b0;
                                mem_wen_reg  = 1'b0;
                                wb_sel_reg   = 2'b10;
                            end
                            default: begin // 未知的 func7，预留
                                alu_op_reg   = 5'bxxxxx; // 默认无效操作
                                op1_sel_reg  = 2'bxx;
                                op2_sel_reg  = 2'bxx;
                                pc_sel_reg   = 3'bxxx;
                                rf_we_reg    = 1'bx;
                                mem_en_reg   = 1'bx;
                                mem_wen_reg  = 1'bx;
                                wb_sel_reg   = 2'bxx;
                            end
                        endcase
                    end
                    3'b001: begin // slli
                        alu_op_reg   = 5'b00111;
                        op1_sel_reg  = 2'b00;
                        op2_sel_reg  = 2'b01;
                        pc_sel_reg   = 3'b000;
                        rf_we_reg    = 1'b1;
                        mem_en_reg   = 1'b0;
                        mem_wen_reg  = 1'b0;
                        wb_sel_reg   = 2'b10;
                    end
                    // Add more I-type instructions here
                    default: begin
                        alu_op_reg   = 5'bxxxxx;
                        op1_sel_reg  = 2'bxx;
                        op2_sel_reg  = 2'bxx;
                        pc_sel_reg   = 3'b000;
                        rf_we_reg    = 1'b0;
                        mem_en_reg   = 1'b0;
                        mem_wen_reg  = 1'b0;
                        wb_sel_reg   = 2'b00;
                    end
                endcase
            end
            7'b0110011: begin // R-type instructions
                case (funct3)
                    3'b000: begin // ADD, SUB
                        case (funct7)
                            7'b0000000: begin // ADD
                                alu_op_reg   = 5'b00000;
                                op1_sel_reg  = 2'b00;
                                op2_sel_reg  = 2'b11;
                                pc_sel_reg   = 3'b000;
                                rf_we_reg    = 1'b1;
                                mem_en_reg   = 1'b0;
                                mem_wen_reg  = 1'b0;
                                wb_sel_reg   = 2'b10;
                            end
                            7'b0100000: begin // SUB
                                alu_op_reg   = 5'b00001; 
                                op1_sel_reg  = 2'b00;
                                op2_sel_reg  = 2'b11;
                                pc_sel_reg   = 3'b000;
                                rf_we_reg    = 1'b1;
                                mem_en_reg   = 1'b0;
                                mem_wen_reg  = 1'b0;
                                wb_sel_reg   = 2'b10;
                            end
                            default: begin // 未知的 func7，预留
                                alu_op_reg   = 5'bxxxxx; // 默认无效操作
                                op1_sel_reg  = 2'bxx;
                                op2_sel_reg  = 2'bxx;
                                pc_sel_reg   = 3'bxxx;
                                rf_we_reg    = 1'bx;
                                mem_en_reg   = 1'bx;
                                mem_wen_reg  = 1'bx;
                                wb_sel_reg   = 2'bxx;
                            end
                        endcase
                    end
                    3'b001: begin // SLL
                        alu_op_reg   = 5'b00111;
                        op1_sel_reg  = 2'b00;
                        op2_sel_reg  = 2'b11;
                        pc_sel_reg   = 3'b000;
                        rf_we_reg    = 1'b1;
                        mem_en_reg   = 1'b0;
                        mem_wen_reg  = 1'b0;
                        wb_sel_reg   = 2'b10;
                    end
                    3'b010: begin // SLT
                        alu_op_reg   = 5'b00010;
                        op1_sel_reg  = 2'b00;
                        op2_sel_reg  = 2'b11;
                        pc_sel_reg   = 3'b000;
                        rf_we_reg    = 1'b1;
                        mem_en_reg   = 1'b0;
                        mem_wen_reg  = 1'b0;
                        wb_sel_reg   = 2'b10;
                    end
                    3'b011: begin // SLTU
                        alu_op_reg   = 5'b00011;
                        op1_sel_reg  = 2'b00;
                        op2_sel_reg  = 2'b11;
                        pc_sel_reg   = 3'b000;
                        rf_we_reg    = 1'b1;
                        mem_en_reg   = 1'b0;
                        mem_wen_reg  = 1'b0;
                        wb_sel_reg   = 2'b10;
                    end
                    3'b100: begin // XOR
                        alu_op_reg   = 5'b00100;
                        op1_sel_reg  = 2'b00;
                        op2_sel_reg  = 2'b11;
                        pc_sel_reg   = 3'b000;
                        rf_we_reg    = 1'b1;
                        mem_en_reg   = 1'b0;
                        mem_wen_reg  = 1'b0;
                        wb_sel_reg   = 2'b10;
                    end
                    3'b101: begin // SRL 和 SRA
                        case (funct7)
                            7'b0000000: begin // SRL
                                alu_op_reg   = 5'b01000;
                                op1_sel_reg  = 2'b00;
                                op2_sel_reg  = 2'b11;
                                pc_sel_reg   = 3'b000;
                                rf_we_reg    = 1'b1;
                                mem_en_reg   = 1'b0;
                                mem_wen_reg  = 1'b0;
                                wb_sel_reg   = 2'b10;
                            end
                            7'b0100000: begin // SRA
                                alu_op_reg   = 5'b01001; 
                                op1_sel_reg  = 2'b00;
                                op2_sel_reg  = 2'b11;
                                pc_sel_reg   = 3'b000;
                                rf_we_reg    = 1'b1;
                                mem_en_reg   = 1'b0;
                                mem_wen_reg  = 1'b0;
                                wb_sel_reg   = 2'b10;
                            end
                            default: begin // 未知的 func7，预留
                                alu_op_reg   = 5'bxxxxx; // 默认无效操作
                                op1_sel_reg  = 2'bxx;
                                op2_sel_reg  = 2'bxx;
                                pc_sel_reg   = 3'bxxx;
                                rf_we_reg    = 1'bx;
                                mem_en_reg   = 1'bx;
                                mem_wen_reg  = 1'bx;
                                wb_sel_reg   = 2'bxx;
                            end
                        endcase
                    end
                    3'b110: begin // OR
                        alu_op_reg   = 5'b00101;
                        op1_sel_reg  = 2'b00;
                        op2_sel_reg  = 2'b11;
                        pc_sel_reg   = 3'b000;
                        rf_we_reg    = 1'b1;
                        mem_en_reg   = 1'b0;
                        mem_wen_reg  = 1'b0;
                        wb_sel_reg   = 2'b10;
                    end
                    3'b111: begin // AND
                        alu_op_reg   = 5'b00110;
                        op1_sel_reg  = 2'b00;
                        op2_sel_reg  = 2'b11;
                        pc_sel_reg   = 3'b000;
                        rf_we_reg    = 1'b1;
                        mem_en_reg   = 1'b0;
                        mem_wen_reg  = 1'b0;
                        wb_sel_reg   = 2'b10;
                    end
                endcase
            end    
            7'b1100011: begin // B-type instructions
                case (funct3)
                    3'b000: begin // BEQ
                        case (br_eq)
                            1'b0: begin // Branch not taken
                                alu_op_reg   = 5'b01000;
                                op1_sel_reg  = 2'b00;
                                op2_sel_reg  = 2'b11;
                                pc_sel_reg   = 3'b000;
                                rf_we_reg    = 1'b0;
                                mem_en_reg   = 1'b0;
                                mem_wen_reg  = 1'b0;
                                wb_sel_reg   = 2'b10;
                            end
                            1'b1: begin // Branch taken
                                alu_op_reg   = 5'b01001; 
                                op1_sel_reg  = 2'b00;
                                op2_sel_reg  = 2'b11;
                                pc_sel_reg   = 3'b010;
                                rf_we_reg    = 1'b0;
                                mem_en_reg   = 1'b0;
                                mem_wen_reg  = 1'b0;
                                wb_sel_reg   = 2'b10;
                            end
                            default: begin // 未知的 func7，预留
                                alu_op_reg   = 5'bxxxxx; // 默认无效操作
                                op1_sel_reg  = 2'bxx;
                                op2_sel_reg  = 2'bxx;
                                pc_sel_reg   = 3'bxxx;
                                rf_we_reg    = 1'bx;
                                mem_en_reg   = 1'bx;
                                mem_wen_reg  = 1'bx;
                                wb_sel_reg   = 2'bxx;
                            end
                        endcase
                    end
                    3'b100: begin // BLT
                        case (br_lt)
                            1'b0: begin // Branch not taken
                                alu_op_reg   = 5'b01000;
                                op1_sel_reg  = 2'b00;
                                op2_sel_reg  = 2'b11;
                                pc_sel_reg   = 3'b000;
                                rf_we_reg    = 1'b0;
                                mem_en_reg   = 1'b0;
                                mem_wen_reg  = 1'b0;
                                wb_sel_reg   = 2'b10;
                            end
                            1'b1: begin // Branch taken
                                alu_op_reg   = 5'b01001; 
                                op1_sel_reg  = 2'b00;
                                op2_sel_reg  = 2'b11;
                                pc_sel_reg   = 3'b010;
                                rf_we_reg    = 1'b0;
                                mem_en_reg   = 1'b0;
                                mem_wen_reg  = 1'b0;
                                wb_sel_reg   = 2'b10;
                            end
                            default: begin // 未知的 func7，预留
                                alu_op_reg   = 5'bxxxxx; // 默认无效操作
                                op1_sel_reg  = 2'bxx;
                                op2_sel_reg  = 2'bxx;
                                pc_sel_reg   = 3'bxxx;
                                rf_we_reg    = 1'bx;
                                mem_en_reg   = 1'bx;
                                mem_wen_reg  = 1'bx;
                                wb_sel_reg   = 2'bxx;
                            end
                        endcase
                    end
                    3'b110: begin // BLTU
                        case (br_ltu)
                            1'b0: begin // Branch not taken
                                alu_op_reg   = 5'b01000;
                                op1_sel_reg  = 2'b00;
                                op2_sel_reg  = 2'b11;
                                pc_sel_reg   = 3'b000;
                                rf_we_reg    = 1'b0;
                                mem_en_reg   = 1'b0;
                                mem_wen_reg  = 1'b0;
                                wb_sel_reg   = 2'b10;
                            end
                            1'b1: begin // Branch taken
                                alu_op_reg   = 5'b01001; 
                                op1_sel_reg  = 2'b00;
                                op2_sel_reg  = 2'b11;
                                pc_sel_reg   = 3'b010;
                                rf_we_reg    = 1'b0;
                                mem_en_reg   = 1'b0;
                                mem_wen_reg  = 1'b0;
                                wb_sel_reg   = 2'b10;
                            end
                            default: begin // 未知的 func7，预留
                                alu_op_reg   = 5'bxxxxx; // 默认无效操作
                                op1_sel_reg  = 2'bxx;
                                op2_sel_reg  = 2'bxx;
                                pc_sel_reg   = 3'bxxx;
                                rf_we_reg    = 1'bx;
                                mem_en_reg   = 1'bx;
                                mem_wen_reg  = 1'bx;
                                wb_sel_reg   = 2'bxx;
                            end
                        endcase
                    end
                    default: begin
                        alu_op_reg   = 5'bxxxxx;
                        op1_sel_reg  = 2'bxx;
                        op2_sel_reg  = 2'bxx;
                        pc_sel_reg   = 3'b000;
                        rf_we_reg    = 1'b0;
                        mem_en_reg   = 1'b0;
                        mem_wen_reg  = 1'b0;
                        wb_sel_reg   = 2'b00;
                    end
                endcase
            end
            7'b1100111: begin // I-type instruction (jalr)
                        alu_op_reg   = 5'b00000;
                        op1_sel_reg  = 2'b00;
                        op2_sel_reg  = 2'b01;
                        pc_sel_reg   = 3'b001;
                        rf_we_reg    = 1'b1;
                        mem_en_reg   = 1'b0;
                        mem_wen_reg  = 1'b0;
                        wb_sel_reg   = 2'b01;
            end
            7'b1110011: begin // System instructions
                case (funct3)
                    3'b000: begin // EBREAK
                        $display("EBREAK: Simulation exiting...");
                         simulation_exit(); // 通知仿真环境结束仿真
                    end
                    // Add more system instructions here
                    default: begin
                        alu_op_reg   = 5'bxxxxx;
                        op1_sel_reg  = 2'bxx;
                        op2_sel_reg  = 2'bxx;
                        pc_sel_reg   = 3'b000;
                        rf_we_reg    = 1'b0;
                        mem_en_reg   = 1'b0;
                        mem_wen_reg  = 1'b0;
                        wb_sel_reg   = 2'b00;
                    end
                endcase
            end
            // Add more opcode cases here
            default: begin
                        alu_op_reg   = 5'bxxxxx;
                        op1_sel_reg  = 2'bxx;
                        op2_sel_reg  = 2'bxx;
                        pc_sel_reg   = 3'b000;
                        rf_we_reg    = 1'b0;
                        mem_en_reg   = 1'b0;
                        mem_wen_reg  = 1'b0;
                        wb_sel_reg   = 2'b00;
            end
        endcase
    end
    */