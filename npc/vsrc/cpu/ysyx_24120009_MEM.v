`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_MEM (
    // Clock and reset signals
    input wire clk,
    input wire rst,
    // Signals passed from EXU
    input     [`ysyx_24120009_DATA_WIDTH-1:0] pc_i,
    input     [`ysyx_24120009_DATA_WIDTH-1:0] inst_i,
    input     [`ysyx_24120009_DATA_WIDTH-1:0] result_i,
    input     [`ysyx_24120009_DATA_WIDTH-1:0] dmem_addr_i,
    input     [`ysyx_24120009_DATA_WIDTH-1:0] rs2_data_i,
    input     [`ysyx_24120009_REG_ADDR_WIDTH-1:0]   rd_addr_i,
    input                                           EXU_done,
    // Signals passed to WBU
    output     [`ysyx_24120009_DATA_WIDTH-1:0]    inst_o,
    output     [`ysyx_24120009_DATA_WIDTH-1:0]    pc_o,
    output     [`ysyx_24120009_DATA_WIDTH-1:0]    result_o,
    output     [`ysyx_24120009_DATA_WIDTH-1:0]    dmem_rdata,
    output     [`ysyx_24120009_REG_ADDR_WIDTH-1:0]   rd_addr_o,
    output                                           mem_access_done,
    // Signals passed to simulation environment
    output  mem_active,
    // Memory interface
    // AXI4-Lite Write Channel
    output wire awvalid,
    // Warning: 'awready' signal is not used !
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] awaddr,
    output wire wvalid,
    output reg  wready,
    output wire [31:0] wdata,
    output wire [7:0] wstrb,
    input  wire bvalid,
    output reg  bready,
    // AXI4-Lite Read Channel
    output wire arvalid,
    // Warning: 'arready' signal is not used !
    output wire [31:0] araddr,
    input wire rvalid,
    output reg rready,
    input wire [31:0] rdata,
    // debug signals
    output wt_res_valid_debug,
    output [1:0] mem_ctl_state_debug,
    output [1:0] axi4_mem_state_debug
);

    // State definition
    typedef enum reg [1:0] {
        IDLE,
        MEM_ACCESS,
        DONE
    } state_t;

    state_t state;

    // State machine logic
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            mem_en <= 0;
            mem_wen <= 0;
        end else begin
            case (state)
                IDLE: begin
                        mem_en <= 0;
                        mem_wen <= 0;
                        rready <= 0;
                        wready <= 0;
                        bready <= 0;
                    if (EXU_done == 1) begin
                        state <= MEM_ACCESS;
                        mem_en <= 1;
                        mem_wen <= (opcode == `ysyx_24120009_OPCODE_S) ? 1'b1 : 1'b0;
                    end
                end

                MEM_ACCESS: begin
                        mem_en <= 0;
                        mem_wen <= 0;
                        rready <= 1;
                        wready <= 1;
                        bready <= 1;
                    if (wt_res_valid || rvalid) begin
                        state <= DONE;
                    end
                end

                DONE: begin
                        rready <= 0;
                        wready <= 0;
                        bready <= 0;
                        mem_en <= 0;
                        mem_wen <= 0;
                        state <= IDLE;
                end
                default: begin
                    state <= IDLE;
                    mem_en <= 0;
                    mem_wen <= 0;
                    rready <= 0;
                    wready <= 0;
                    bready <= 0;
                end
            endcase
        end
    end

    // Internal signals
    reg  [`ysyx_24120009_DATA_WIDTH-1:0] dmem_rdata_raw;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] dmem_wdata_raw;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] dmem_wdata;
    wire [7:0] wmask;
    wire [2:0] ctl_mem_access;
    reg mem_en;
    reg mem_wen;
    wire     [`ysyx_24120009_DATA_WIDTH-1:0]    dmem_addr_o;
    wire     [`ysyx_24120009_DATA_WIDTH-1:0]    rs2_data_o;
    wire wt_res_valid;

    // AXI4-Lite signals
    assign arvalid = mem_en && !mem_wen;
    wire wt_req_valid = mem_en && mem_wen;
    assign awvalid = wt_req_valid;
    assign awaddr = dmem_addr_o;
    assign wvalid = wt_req_valid;
    assign wdata = dmem_wdata;
    assign wstrb = wmask;
    assign wt_res_valid = bvalid;
    assign araddr = dmem_addr_o;
    assign dmem_rdata_raw = rdata;

    // Alignment network
    ysyx_24120009_alignment_network alignment_network (
        .data_in(dmem_rdata_raw),
        .control(ctl_mem_access),
        .dmem_addr(dmem_addr_o),
        .data_out(dmem_rdata)
    );

    // Write mask generator
    ysyx_24120009_wmask_gen wmask_gen (
        .control(ctl_mem_access),
        .dmem_addr(dmem_addr_o),
        .wmask(wmask),
        .dmem_wdata_raw(dmem_wdata_raw),
        .dmem_wdata(dmem_wdata)
    );

    // Control Unit for MEM
    wire [2:0] funct3 = inst_o[14:12];
    wire [6:0] funct7 = inst_o[31:25];
    wire [6:0] opcode = inst_o[6:0];

    // ctl_mem_access signal generation
    ysyx_24120009_MuxKey #(8, 10, 3) mem_acces_ctl_mux (
        .out(ctl_mem_access),
        .key({opcode, funct3}),
        .lut({
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

    // Output assignments
    assign mem_access_done = (state == DONE);
    assign dmem_wdata_raw = rs2_data_o;
    assign wt_res_valid_debug = wt_res_valid;
    assign mem_ctl_state_debug = state;
    assign mem_active = (state == MEM_ACCESS);

    // Pipeline registers
    ysyx_24120009_Reg #(
        .WIDTH(`ysyx_24120009_DATA_WIDTH),
        .RESET_VAL(`ysyx_24120009_RESET_PC)
    ) inst_reg_MEM (
        .clk (clk),
        .rst (rst),
        .din (inst_i),
        .dout(inst_o),
        .wen (1'b1)
    );

    ysyx_24120009_Reg #(
        .WIDTH(`ysyx_24120009_DATA_WIDTH),
        .RESET_VAL(`ysyx_24120009_RESET_PC)
    ) pc_reg_MEM (
        .clk (clk),
        .rst (rst),
        .din (pc_i),
        .dout(pc_o),
        .wen (1'b1)
    );

    ysyx_24120009_Reg #(
        .WIDTH(`ysyx_24120009_DATA_WIDTH),
        .RESET_VAL(`ysyx_24120009_RESET_PC)
    ) result_reg_MEM (
        .clk (clk),
        .rst (rst),
        .din (result_i),
        .dout(result_o),
        .wen (1'b1)
    );

    ysyx_24120009_Reg #(
        .WIDTH(`ysyx_24120009_DATA_WIDTH),
        .RESET_VAL(`ysyx_24120009_RESET_PC)
    ) dmem_addr_reg_MEM (
        .clk (clk),
        .rst (rst),
        .din (dmem_addr_i),
        .dout(dmem_addr_o),
        .wen (1'b1)
    );

    ysyx_24120009_Reg #(
        .WIDTH(`ysyx_24120009_DATA_WIDTH),
        .RESET_VAL(`ysyx_24120009_RESET_PC)
    ) rs2_reg_MEM (
        .clk (clk),
        .rst (rst),
        .din (rs2_data_i),
        .dout(rs2_data_o),
        .wen (1'b1)
    );

    ysyx_24120009_Reg #(
        .WIDTH(`ysyx_24120009_REG_ADDR_WIDTH),
        .RESET_VAL(5'b0)
    ) rd_addr_reg_MEM (
        .clk (clk),
        .rst (rst),
        .din (rd_addr_i),
        .dout(rd_addr_o),
        .wen (1'b1)
    );

endmodule
