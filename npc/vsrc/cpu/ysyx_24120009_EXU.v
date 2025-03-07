`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_EXU (
    // Clock and reset signals
    input wire clk,
    input wire rst,
    // Signals passed from IDU
    input wire [`ysyx_24120009_DATA_WIDTH-1:0] Op1,
    input wire [`ysyx_24120009_DATA_WIDTH-1:0] Op2,
    input     [`ysyx_24120009_DATA_WIDTH-1:0] pc_i,
    input wire [`ysyx_24120009_DATA_WIDTH-1:0] inst_i,
    input      [`ysyx_24120009_DATA_WIDTH-1:0] rs2_data_i,
    input    [`ysyx_24120009_REG_ADDR_WIDTH-1:0]   rd_addr_i,
    input wire                                   ID_done,
    // Signals passed to MEM
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] dmem_addr,
    output     [`ysyx_24120009_DATA_WIDTH-1:0]    inst_o,
    output     [`ysyx_24120009_DATA_WIDTH-1:0]    pc_o,
    output     [`ysyx_24120009_DATA_WIDTH-1:0]    result,
    output     [`ysyx_24120009_DATA_WIDTH-1:0]    rs2_data_o,
    output     [`ysyx_24120009_REG_ADDR_WIDTH-1:0]   rd_addr_o,
    output                                           EXU_done,
    // Debug signals
    output wire [4:0] alu_op_debug,
    output wire [`ysyx_24120009_DATA_WIDTH-1:0]    inst_from_EXU_to_MEM_debug
);

    // State definition
    typedef enum reg [1:0] {
        IDLE,
        EXE,
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
                    if (ID_done == 1) begin
                        state <= EXE;
                    end
                end

                EXE: begin
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
    assign EXU_done = (state == DONE);

    // Get ready for pipeline
    ysyx_24120009_Reg #(
        .WIDTH(`ysyx_24120009_DATA_WIDTH),
        .RESET_VAL(`ysyx_24120009_RESET_PC)
    ) inst_reg_EXU (
        .clk (clk),
        .rst (rst),
        .din (inst_i),
        .dout(inst_o),
        .wen (1'b1)
    );

    ysyx_24120009_Reg #(
        .WIDTH(`ysyx_24120009_DATA_WIDTH),
        .RESET_VAL(`ysyx_24120009_RESET_PC)
    ) pc_reg_EXU (
        .clk (clk),
        .rst (rst),
        .din (pc_i),
        .dout(pc_o),
        .wen (1'b1)
    );

    ysyx_24120009_Reg #(
        .WIDTH(`ysyx_24120009_DATA_WIDTH),
        .RESET_VAL(`ysyx_24120009_RESET_PC)
    ) rs2_reg_EXU (
        .clk (clk),
        .rst (rst),
        .din (rs2_data_i),
        .dout(rs2_data_o),
        .wen (1'b1)
    );

    ysyx_24120009_Reg #(
        .WIDTH(`ysyx_24120009_REG_ADDR_WIDTH),
        .RESET_VAL(5'b0)
    ) rd_addr_reg_EXU (
        .clk (clk),
        .rst (rst),
        .din (rd_addr_i),
        .dout(rd_addr_o),
        .wen (1'b1)
    );    

    // Module instantiation
    ysyx_24120009_ALU alu_instance (
       .A(Op1),
       .B(Op2),
      .ALUFun(alu_op),
      .Result(result)
    );

    // internal signal declaration and signal assignment
    assign dmem_addr = result;
    reg [4:0] alu_op;
    assign alu_op_debug = alu_op;
    assign inst_from_EXU_to_MEM_debug = inst_o;

    // Control Unit for EXE
    wire [2:0] funct3 = inst_o[14:12];
    wire [6:0] funct7 = inst_o[31:25];
    wire [6:0] opcode = inst_o[6:0];

    always @(*) begin
        case (opcode)
            `ysyx_24120009_OPCODE_AUIPC: begin
                alu_op = `ALU_OP_ADD;
            end
            `ysyx_24120009_OPCODE_LUI: begin
                alu_op = `ALU_OP_PASS_A;
            end
             `ysyx_24120009_OPCODE_I: begin
                case (funct3)
                    3'b000: alu_op = `ALU_OP_ADD;
                    3'b001: alu_op = `ALU_OP_SLL;
                    3'b010: alu_op = `ALU_OP_SLT;
                    3'b011: alu_op = `ALU_OP_SLTU;
                    3'b100: alu_op = `ALU_OP_XOR;
                    3'b101: begin
                        case (funct7)
                            7'b0000000: alu_op = `ALU_OP_SRL;
                            7'b0100000: alu_op = `ALU_OP_SRA;
                            default:    alu_op = `ALU_OP_ADD;
                        endcase
                    end
                    3'b110: alu_op = `ALU_OP_OR;
                    3'b111: alu_op = `ALU_OP_AND;
                    default: alu_op = `ALU_OP_ADD;
                endcase
            end
            `ysyx_24120009_OPCODE_R: begin
                case (funct3)
                    3'b000: begin
                        case (funct7)
                            7'b0000000: alu_op = `ALU_OP_ADD;
                            7'b0100000: alu_op = `ALU_OP_SUB;
                            default:    alu_op = `ALU_OP_ADD;
                        endcase
                    end
                    3'b001: alu_op = `ALU_OP_SLL;
                    3'b010: alu_op = `ALU_OP_SLT;
                    3'b011: alu_op = `ALU_OP_SLTU;
                    3'b100: alu_op = `ALU_OP_XOR;
                    3'b101: begin
                        case (funct7)
                            7'b0000000: alu_op = `ALU_OP_SRL;
                            7'b0100000: alu_op = `ALU_OP_SRA;
                            default:    alu_op = `ALU_OP_ADD;
                        endcase
                    end
                    3'b110: alu_op = `ALU_OP_OR;
                    3'b111: alu_op = `ALU_OP_AND;
                    default: alu_op = `ALU_OP_ADD;
                endcase
            end
            `ysyx_24120009_OPCODE_LOAD: begin
                alu_op = `ALU_OP_ADD;
            end
            default: begin
                alu_op = `ALU_OP_ADD;
            end
        endcase
    end

endmodule