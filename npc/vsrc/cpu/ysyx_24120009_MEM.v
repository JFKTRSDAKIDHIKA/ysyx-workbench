`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_MEM (
    // Clock and reset signals
    input wire clk,
    input wire rst,
    // Signals passed from EXU
    input     [`ysyx_24120009_DATA_WIDTH-1:0] pc_i,
    input wire [`ysyx_24120009_DATA_WIDTH-1:0] inst_i,
    input     [`ysyx_24120009_DATA_WIDTH-1:0] result_i,
    input     [`ysyx_24120009_DATA_WIDTH-1:0] dmem_addr_i,
    input      [`ysyx_24120009_DATA_WIDTH-1:0] rs2_data_i,
    input    [`ysyx_24120009_REG_ADDR_WIDTH-1:0]   rd_addr_i,
    // Signals passed to WBU
    output     [`ysyx_24120009_DATA_WIDTH-1:0]    inst_o,
    output     [`ysyx_24120009_DATA_WIDTH-1:0]    pc_o,
    output     [`ysyx_24120009_DATA_WIDTH-1:0]    result_o,
    output     [`ysyx_24120009_DATA_WIDTH-1:0]    dmem_rdata,
    output     [`ysyx_24120009_REG_ADDR_WIDTH-1:0]   rd_addr_o,
    output                                           mem_valid,
    // Signals passed to simulation environment
    output wire mem_active,
    // Signals passed from IFU
    input [`ysyx_24120009_DATA_WIDTH-1:0] inst_from_IFU,
    // Signals passed from WBU
    input [`ysyx_24120009_DATA_WIDTH-1:0] inst_from_WBU,
    // debug signals
    output wt_res_valid_debug
);

    // Get ready for pipeline
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

    // Internal signal declaration
    reg [`ysyx_24120009_DATA_WIDTH-1:0] dmem_rdata_raw;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] dmem_wdata_raw;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] dmem_wdata;
    wire [7:0] wmask;
    wire [2:0] ctl_mem_access;
    reg mem_en;
    reg mem_wen;
    wire     [`ysyx_24120009_DATA_WIDTH-1:0]    dmem_addr_o;
    wire     [`ysyx_24120009_DATA_WIDTH-1:0]    rs2_data_o;
    wire rd_res_valid;
    wire wt_res_valid;


    // Interact with data memory
    // Data memeory access
    /*
    always @(*) begin
        if (mem_en) begin 
            // read data from data memory
            dmem_rdata_raw = pmem_read(dmem_addr_o);
            if (mem_wen) begin 
            // write data to data memory
            pmem_write(dmem_addr_o, dmem_wdata, wmask);
            end
        end
        else begin
            dmem_rdata_raw = 0;
        end
    end
    */
    ysyx_24120009_SRAM LSU (
        // Clock and reset signals
        .clk(clk),
        .rst(rst),
        // Read memory signals
        .rd_req_valid(mem_en),
        .addr(dmem_addr_o),
        .data_out(dmem_rdata_raw),
        .rd_res_valid(rd_res_valid),
        // Write memory signals
        .wt_req_valid(mem_wen),
        .waddr(dmem_addr_o),
        .wdata(dmem_wdata),
        .wmask(wmask),
        .wt_res_valid(wt_res_valid)
    );

    assign mem_valid = wt_res_valid || rd_res_valid || !mem_en;

    assign wt_res_valid_debug = wt_res_valid;

    assign dmem_wdata_raw = rs2_data_o;

    ysyx_24120009_alignment_network alignment_network (
        .data_in(dmem_rdata_raw),
        .control(ctl_mem_access),
        .dmem_addr(dmem_addr_o),
        .data_out(dmem_rdata)
    );

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

    
    // The mem_active signal indicates the operational state of the MEM module.
    // It is asserted (high) only when an instruction has been passed to this module 
    // but has not yet been forwarded to the WBU (Write-Back Unit).
    assign mem_active = (inst_from_IFU == inst_o) && (inst_from_WBU != inst_o);
    
    // mem_en signal generation
    always @(*) begin
        if (mem_active && (opcode == `ysyx_24120009_OPCODE_LOAD || opcode == `ysyx_24120009_OPCODE_S)) begin
            mem_en = 1'b1; // Enable memory operation only when mem_active is high and opcode indicates a load or store
        end else begin
            mem_en = 1'b0; // Disable memory operation otherwise
        end
    end

    // mem_wen signal generation
    always @(*) begin
        if (mem_active && opcode == `ysyx_24120009_OPCODE_S) begin
            mem_wen = 1'b1; // Enable memory write only when mem_active is high and opcode indicates a store operation
        end else begin
            mem_wen = 1'b0; // Disable memory write otherwise
        end
    end

endmodule
