// Control logic for RV32 instructions 
`include "vsrc/include/ysyx_24120009_defs.vh"
import "DPI-C" function void simulation_exit();


module ysyx_24120009_ControlLogic (
    input  [31:0] inst,       // RV32 instruction input
    input         br_eq,      // Branch condition: rs1 == rs2 (unused here)
    input         br_lt,      // Branch condition: rs1 < rs2 (unused here)
    input         br_ltu,     // Branch condition: rs1 < rs2 (unsigned, unused here)
    output [4:0]  alu_op,     // ALU operation type
    output [1:0]  op1_sel,    // ALU operand 1 selection
    output [1:0]  op2_sel,    // ALU operand 2 selection
    output [2:0]  pc_sel,     // PC selection (next PC value)
    output        rf_we,      // Register file write enable
    output        mem_en,     // Memory enable 
    output        mem_wen,    // Memory write enable 
    output [1:0]  wb_sel      // Write-back source selection
);

    wire [6:0] opcode = inst[6:0];
    wire [2:0] funct3 = inst[14:12];
    wire [6:0] func7 = inst[31:25];

    // Default outputs
    reg [4:0] alu_op_reg;
    reg [1:0] op1_sel_reg;
    reg [1:0] op2_sel_reg;
    reg [2:0] pc_sel_reg;
    reg       rf_we_reg;
    reg       mem_en_reg;
    reg       mem_wen_reg;
    reg [1:0] wb_sel_reg;

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
                        case (func7)
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
                        case (func7)
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
                        case (func7)
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

    assign alu_op   = alu_op_reg;
    assign op1_sel  = op1_sel_reg;
    assign op2_sel  = op2_sel_reg;
    assign pc_sel   = pc_sel_reg;
    assign rf_we    = rf_we_reg;
    assign mem_en   = mem_en_reg;
    assign mem_wen  = mem_wen_reg;
    assign wb_sel   = wb_sel_reg;

endmodule
