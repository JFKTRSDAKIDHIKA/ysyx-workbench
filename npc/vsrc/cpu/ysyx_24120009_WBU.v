`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_WBU (
    // Clock and reset signals
    input wire clk,
    input wire rst,
    // WBU interact with register file 
    output reg [`ysyx_24120009_DATA_WIDTH-1:0] reg_write_data_delayed,
    output     [`ysyx_24120009_REG_ADDR_WIDTH-1:0]   rd_addr_o,
    output reg rf_we,
    // Signals passed from MEM
    input     [`ysyx_24120009_DATA_WIDTH-1:0]      pc_i,
    input     [`ysyx_24120009_DATA_WIDTH-1:0]      inst_i,
    input     [`ysyx_24120009_DATA_WIDTH-1:0]      result_i,
    input     [`ysyx_24120009_DATA_WIDTH-1:0]      dmem_rdata_i,
    input    [`ysyx_24120009_REG_ADDR_WIDTH-1:0]   rd_addr_i,
    input                                          mem_access_done,
    // Signals passed to IFU
    output pc_wen, 
    // Signal passed from IFU
    input [`ysyx_24120009_DATA_WIDTH-1:0] inst_from_IFU,
    // Signals passed to simulation environment
    output reg wbu_active,
    // Signals passed back to MEM
    output wire [`ysyx_24120009_DATA_WIDTH-1:0]    inst_o,
    // Debug signals
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] pc_plus4_debug,
    output wire [1:0] wb_sel_debug,
    output wire [6:0] opcode_debug,
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] result_from_WB_debug
);

    // State definition
    typedef enum reg [1:0] {
        IDLE,
        WB,
        DONE
    } state_t;

    state_t state;

    // State machine logic
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            wbu_active <= 0;
        end else begin
            case (state)
                IDLE: begin
                        wbu_active <= 0;
                        pc_wen <= 0;
                    if (mem_access_done == 1'b1) begin
                        state <= WB;
                        wbu_active <= 1;
                    end
                end

                WB: begin
                        wbu_active <= 0;
                        pc_wen <= 0;
                        state <= DONE;
                end

                DONE: begin
                        wbu_active <= 0;
                        pc_wen <= 1;
                        state <= IDLE;
                end
                default: begin
                    state <= IDLE;
                    wbu_active <= 0;
                    pc_wen <= 0;
                end
            endcase
        end
    end

    // Get ready for pipeline
    ysyx_24120009_Reg #(
        .WIDTH(`ysyx_24120009_DATA_WIDTH),
        .RESET_VAL(`ysyx_24120009_RESET_PC)
    ) inst_reg_WBU (
        .clk (clk),
        .rst (rst),
        .din (inst_i),
        .dout(inst_o),
        .wen (1'b1)
    );

    ysyx_24120009_Reg #(
        .WIDTH(`ysyx_24120009_DATA_WIDTH),
        .RESET_VAL(`ysyx_24120009_RESET_PC)
    ) pc_reg_WBU (
        .clk (clk),
        .rst (rst),
        .din (pc_i),
        .dout(pc_o),
        .wen (1'b1)
    );

    ysyx_24120009_Reg #(
        .WIDTH(`ysyx_24120009_DATA_WIDTH),
        .RESET_VAL(`ysyx_24120009_RESET_PC)
    ) result_reg_WBU (
        .clk (clk),
        .rst (rst),
        .din (result_i),
        .dout(result_o),
        .wen (1'b1)
    );

    ysyx_24120009_Reg #(
        .WIDTH(`ysyx_24120009_DATA_WIDTH),
        .RESET_VAL(`ysyx_24120009_RESET_PC)
    ) dmem_rdata_reg_WBU (
        .clk (clk),
        .rst (rst),
        .din (dmem_rdata_i),
        .dout(dmem_rdata_o),
        .wen (1'b1)
    );

    ysyx_24120009_Reg #(
        .WIDTH(`ysyx_24120009_REG_ADDR_WIDTH),
        .RESET_VAL(5'b0)
    ) rd_addr_reg_WBU (
        .clk (clk),
        .rst (rst),
        .din (rd_addr_i),
        .dout(rd_addr_o),
        .wen (1'b1)
    );

    // Internal signal declaration
    wire [`ysyx_24120009_DATA_WIDTH-1:0] pc_plus4;
    assign pc_plus4 = pc_o + `ysyx_24120009_PC_STEP;
    wire     [`ysyx_24120009_DATA_WIDTH-1:0]    pc_o;
    wire     [`ysyx_24120009_DATA_WIDTH-1:0] result_o;
    wire    [`ysyx_24120009_DATA_WIDTH-1:0] dmem_addr_o;
    wire     [`ysyx_24120009_DATA_WIDTH-1:0] dmem_rdata_o;
    wire     [`ysyx_24120009_DATA_WIDTH-1:0] reg_write_data;
    reg [1:0] wb_sel;
    assign pc_plus4_debug = pc_plus4;
    assign wb_sel_debug = wb_sel;
    assign opcode_debug = inst_o[6:0];
    assign result_from_WB_debug = result_o;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            reg_write_data_delayed <= {`ysyx_24120009_DATA_WIDTH{1'b0}};
        end else begin
            reg_write_data_delayed <= reg_write_data;
        end
    end

    // reg_write_data signal generation
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
            2'b10, result_o,
            2'b11, dmem_rdata_o // data memory read data
        })
    );

    // Control unit for WBU
    wire [2:0] funct3 = inst_o[14:12];
    wire [6:0] funct7 = inst_o[31:25];
    wire [6:0] opcode = inst_o[6:0];

    // rf_we signal generation
    always @(*) begin
        if (wbu_active) begin
            case (opcode)
                `ysyx_24120009_OPCODE_AUIPC: rf_we = 1'b1;
                `ysyx_24120009_OPCODE_LUI:   rf_we = 1'b1;
                `ysyx_24120009_OPCODE_R:     rf_we = 1'b1;
                `ysyx_24120009_OPCODE_I:     rf_we = 1'b1;
                `ysyx_24120009_OPCODE_LOAD:  rf_we = 1'b1;
                `ysyx_24120009_OPCODE_S:     rf_we = 1'b0;
                `ysyx_24120009_OPCODE_B:     rf_we = 1'b0;
                `ysyx_24120009_OPCODE_CSR:   rf_we = 1'b0;
                `ysyx_24120009_OPCODE_J:     rf_we = 1'b1;
                `ysyx_24120009_OPCODE_JALR:  rf_we = 1'b1;
                default:                     rf_we = 1'b0;
            endcase
        end else begin
            rf_we = 1'b0;  // 当 wbu_active == 0 时，rf_we 始终为 0
        end
    end

    // wb_sel signal generation
    always @(*) begin
        case (opcode)
            `ysyx_24120009_OPCODE_AUIPC: wb_sel = 2'b10;
            `ysyx_24120009_OPCODE_LUI:   wb_sel = 2'b10;
            `ysyx_24120009_OPCODE_R:     wb_sel = 2'b10;
            `ysyx_24120009_OPCODE_I:     wb_sel = 2'b10;
            `ysyx_24120009_OPCODE_LOAD:     wb_sel = 2'b11;
            `ysyx_24120009_OPCODE_B:     wb_sel = 2'b00;
            `ysyx_24120009_OPCODE_CSR:   wb_sel = 2'b00;
            `ysyx_24120009_OPCODE_J:     wb_sel = 2'b01;
            `ysyx_24120009_OPCODE_JALR:  wb_sel = 2'b01;
            default:                     wb_sel = 2'b00;
        endcase
    end

endmodule