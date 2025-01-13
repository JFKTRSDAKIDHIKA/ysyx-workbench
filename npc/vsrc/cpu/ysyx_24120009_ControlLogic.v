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
    output [2:0]  pc_sel,     // PC selection (next PC value)
    output        rf_we,      // Register file write enable
    output        mem_en,     // Memory enable 
    output        mem_wen,    // Memory write enable 
    output [1:0]  wb_sel      // Write-back source selection
);

    wire [6:0] opcode = inst[6:0];
    wire [2:0] funct3 = inst[14:12];

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
            7'b1110011: begin // System instructions
                case (funct3)
                    3'b000: begin // EBREAK
                        pc_sel_reg   = 3'b100;
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

    assign alu_op   = alu_op_reg;
    assign op1_sel  = op1_sel_reg;
    assign op2_sel  = op2_sel_reg;
    assign pc_sel   = pc_sel_reg;
    assign rf_we    = rf_we_reg;
    assign mem_en   = mem_en_reg;
    assign mem_wen  = mem_wen_reg;
    assign wb_sel   = wb_sel_reg;

endmodule
