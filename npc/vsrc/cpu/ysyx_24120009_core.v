`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_core (
    input wire clk,
    input wire rst,
    // For debug purpose
    output [`ysyx_24120009_DATA_WIDTH-1:0] pc_debug,
    output [31:0] inst_debug,
    output [`ysyx_24120009_DATA_WIDTH-1:0] reg_write_data_debug,
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] x2_debug,
    output wire [`ysyx_24120009_REG_ADDR_WIDTH-1:0] waddr_debug,
    output wire mem_wen_debug,
    output wire mem_en_debug,
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] Op1_debug,
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] Op2_debug,
    output wire rf_we_debug,
    output wire wbu_active_debug,
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] imem_addr_debug,
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] pc_plus4_debug,
    output wire [1:0] wb_sel_debug,
    output wire [6:0] opcode_debug,
    output wire pc_wen_debug,
    output wire mem_active_debug,
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] result_from_EXU_to_MEM_debug,
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] result_from_MEM_to_WBU_debug,
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] result_from_WB_debug,
    output wire [4:0] alu_op_debug,
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] inst_from_EXU_to_MEM_debug,
    output wire mem_access_done_debug,
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] dmem_rdata_from_MEM_to_WBU_debug,
    output wire wt_res_valid_debug,
    output wire [2:0] ifu_state_debug,
    output wire rd_res_valid_debug,
    output wire [1:0] mem_ctl_state_debug,
    output wire [1:0] axi4_mem_state_debug,
    output wire [1:0] idu_state_debug,
    output wire inst_valid_debug,
    output wire [1:0] arbiter_state_debug,
    output wire [1:0] axi4_lite_state_debug
);

    // Debug signal declaration and assignment
    assign pc_debug = pc_from_IFU_to_IDU;
    assign inst_debug = inst_from_IFU_to_IDU;
    assign reg_write_data_debug = reg_write_data;
    assign waddr_debug = waddr;
    assign mem_wen_debug = mem_wen;
    assign mem_en_debug = mem_en;
    assign Op1_debug = Op1;
    assign Op2_debug = Op2;
    assign rf_we_debug = rf_we;
    assign imem_addr_debug = pc_from_IFU_to_IDU;
    assign pc_wen_debug = pc_wen;
    assign result_from_EXU_to_MEM_debug = result_from_EXU_to_MEM;
    assign result_from_MEM_to_WBU_debug = result_from_MEM_to_WBU;
    assign mem_access_done_debug = mem_access_done;
    assign dmem_rdata_from_MEM_to_WBU_debug = dmem_rdata_from_MEM_to_WBU;
    assign inst_valid_debug = inst_valid;

    // Internal signals
    wire [`ysyx_24120009_DATA_WIDTH-1:0] reg_write_data;
    wire [4:0]                           alu_op;
    wire [2:0]                           pc_sel;
    wire                                 rf_we;
    wire                                 mem_en;
    wire                                 mem_wen;
    wire [1:0]                           wb_sel;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] Op1;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] Op2;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] pc_plus4;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] jump_reg_target;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] br_target;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] jmp_target;
    wire                                 pc_wen;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] pc_from_IFU_to_IDU;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] inst_from_IFU_to_IDU;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] pc_from_IDU_to_EXU;           
    wire [`ysyx_24120009_DATA_WIDTH-1:0] inst_from_IDU_to_EXU;         
    wire [`ysyx_24120009_DATA_WIDTH-1:0] rdata2_from_IDU_to_EXU;       
    wire [4:0]                           rd_addr_from_IDU_to_EXU;   
    wire [`ysyx_24120009_DATA_WIDTH-1:0] pc_from_EXU_to_MEM;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] inst_from_EXU_to_MEM;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] result_from_EXU_to_MEM;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] rdata2_from_EXU_to_MEM;
    wire [4:0]                           rd_addr_from_EXU_to_MEM;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] dmem_addr_from_EXU_to_MEM;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] dmem_rdata_from_MEM_to_WBU;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] result_from_MEM_to_WBU;
    wire [4:0]                           rd_addr_from_MEM_to_WBU;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] pc_from_MEM_to_WBU;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] rd_addr_from_MEM_to_WBU;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] inst_from_MEM_to_WBU;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] inst_from_WBU_to_MEM;
    wire                                 mem_access_done;
    wire                                 inst_valid;
    wire                                 ID_done;
    wire                                 EXU_done;
    // Memoey interface (ifu)
    wire                                 ifu_arvalid;
    wire                                 ifu_arready;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] ifu_araddr;
    wire                                 ifu_rvalid;
    wire                                 ifu_rready;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] ifu_rdata;
    // Memoey interface (mem)
    wire                                 mem_awvalid;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] mem_awaddr;
    wire                                 mem_wvalid;
    wire                                 mem_wready;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] mem_wdata;
    wire [7:0]                           mem_wstrb;
    wire                                 mem_bvalid;
    wire                                 mem_bready;
    wire                                 mem_arvalid;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] mem_araddr;
    wire                                 mem_rvalid;
    wire                                 mem_rready;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] mem_rdata;
    wire                                 awvalid_wire;
    wire                                 awready_wire;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] awaddr_wire;
    wire                                 wvalid_wire;
    wire                                 wready_wire;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] wdata_wire;
    wire [7:0]                           wstrb_wire;
    wire                                 bvalid_wire;
    wire                                 bready_wire;
    wire                                 arvalid_wire;
    wire                                 arready_wire;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] araddr_wire;
    wire                                 rvalid_wire;
    wire                                 rready_wire;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] rdata_wire;

    //  Register file address
    wire [`ysyx_24120009_REG_ADDR_WIDTH-1:0] rs1_addr;
    wire [`ysyx_24120009_REG_ADDR_WIDTH-1:0] rs2_addr;
    wire [`ysyx_24120009_REG_ADDR_WIDTH-1:0] waddr;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] rdata1;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] rdata2;  

    // Register File
    ysyx_24120009_RegisterFile #(
        .ADDR_WIDTH(`ysyx_24120009_REG_ADDR_WIDTH),
        .DATA_WIDTH(`ysyx_24120009_DATA_WIDTH)
    ) u_RegisterFile (
        .clk(clk),
        .wdata(reg_write_data),
        .waddr(waddr),
        .wen(rf_we),
        .raddr1(rs1_addr),
        .raddr2(rs2_addr),
        .rdata1(rdata1),
        .rdata2(rdata2),
        .x2_debug(x2_debug)
    );

    // axi4_lite_wrapper
    ysyx_24120009_sram_axi4_lite_wrapper #(
        .ADDR_WIDTH(32),
        .DATA_WIDTH(32)
    ) axi4_lite_wrapper (
        // Clock and reset signals
        .clk(clk),
        .rst(rst),
        // AXI4-Lite Write Channel
        .awvalid(awvalid_wire),
        .awready(awready_wire),
        .awaddr(awaddr_wire),
        .wvalid(wvalid_wire),
        .wready(wready_wire),
        .wdata(wdata_wire),
        .wstrb(wstrb_wire),
        .bvalid(bvalid_wire),
        .bready(bready_wire),
        .bresp(),
        // AXI4-Lite Read Channel
        .arvalid(arvalid_wire),
        .arready(arready_wire),
        .araddr(araddr_wire),
        .rvalid(rvalid_wire),
        .rready(rready_wire),
        .rdata(rdata_wire),
        .rresp(),
        // Debug signals
        .axi4_ifu_state_debug(axi4_lite_state_debug)
    );

    // Arbiter
    ysyx_24120009_bus_arbiter bus_arbiter_inst (
        // Clock and reset signals
        .clk(clk),
        .rst(rst),
        // IFU memory interface
        .ifu_arvalid(ifu_arvalid),
        .ifu_arready(ifu_arready),
        .ifu_araddr(ifu_araddr),
        .ifu_rvalid(ifu_rvalid),
        .ifu_rready(ifu_rready),
        .ifu_rdata(ifu_rdata),
        // MEM memory interface
        .mem_awvalid(mem_awvalid),
        .mem_awready(),
        .mem_awaddr(mem_awaddr),
        .mem_wvalid(mem_wvalid),
        .mem_wready(mem_wready),
        .mem_wdata(mem_wdata),
        .mem_wstrb(mem_wstrb),
        .mem_bvalid(mem_bvalid),
        .mem_bready(mem_bready),
        .mem_arvalid(mem_arvalid),
        .mem_arready(),
        .mem_araddr(mem_araddr),
        .mem_rvalid(mem_rvalid),
        .mem_rready(mem_rready),
        .mem_rdata(mem_rdata),
        // Unified memory interface
        .awvalid_wire(awvalid_wire),
        .awready_wire(awready_wire),
        .awaddr_wire(awaddr_wire),
        .wvalid_wire(wvalid_wire),
        .wready_wire(wready_wire),
        .wdata_wire(wdata_wire),
        .wstrb_wire(wstrb_wire),
        .bvalid_wire(bvalid_wire),
        .bready_wire(bready_wire),
        .arvalid_wire(arvalid_wire),
        .arready_wire(arready_wire),
        .araddr_wire(araddr_wire),
        .rvalid_wire(rvalid_wire),
        .rready_wire(rready_wire),
        .rdata_wire(rdata_wire),
        // debug signals
        .arbiter_state_debug(arbiter_state_debug)
    );
            
    // Fetch instruction
    ysyx_24120009_IFU ifu (
        // Clock and reset signals
        .clk(clk),
        .rst(rst),
        // signals passed from IDU
        .pc_sel(pc_sel),
        .jump_reg_target(jump_reg_target),
        .br_target(br_target),
        .jmp_target(jmp_target),
        // signals from WBU
        .pc_wen(pc_wen),
        // signal passed to IDU
        .pc_o(pc_from_IFU_to_IDU),
        .inst_o(inst_from_IFU_to_IDU),
        // handshake signals
        .inst_valid(inst_valid),
        .idu_ready(1'b1),
        // Memoey interface
        .arvalid(ifu_arvalid),
        .arready(ifu_arready),
        .araddr(ifu_araddr),
        .rvalid(ifu_rvalid),
        .rready(ifu_rready),
        .rdata(ifu_rdata),
        // debug signals 
        .state_debug(ifu_state_debug),
        .rd_res_valid_debug(rd_res_valid_debug)
);


    // Instantiate IDU
    ysyx_24120009_IDU idu (
        // Clock and reset signals
        .clk(clk),
        .rst(rst),
        // Signals passed from IFU
        .inst_i(inst_from_IFU_to_IDU),
        .pc_i(pc_from_IFU_to_IDU),
        .inst_valid(inst_valid),
        // IDU interact with register file 
        .rs1_data_i(rdata1),
        .rs2_data_i(rdata2),
        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        // Siganls passed to EXU
        .rd_addr_o(rd_addr_from_IDU_to_EXU),
        .Op1(Op1),
        .Op2(Op2),
        .pc_o(pc_from_IDU_to_EXU),
        .inst_o(inst_from_IDU_to_EXU),
        .rs2_data_o(rdata2_from_IDU_to_EXU),
        .ID_done(ID_done),
        // Signals passed back to IFU
        .jump_reg_target_o(jump_reg_target),
        .br_target_o(br_target),
        .jmp_target_o(jmp_target),
        .pc_sel(pc_sel),
        // debug signals
        .idu_state_debug(idu_state_debug)
    );


    // Instantiate EXU
    ysyx_24120009_EXU exu (
        // Clock and reset signals
        .clk(clk),
        .rst(rst),
        // Signals passed from IDU
        .Op1(Op1),
        .Op2(Op2),
        .pc_i(pc_from_IDU_to_EXU),
        .inst_i(inst_from_IDU_to_EXU),
        .rs2_data_i(rdata2_from_IDU_to_EXU),
        .rd_addr_i(rd_addr_from_IDU_to_EXU),
        .ID_done(ID_done),
        // Signals passed to MEM
        .dmem_addr(dmem_addr_from_EXU_to_MEM),
        .inst_o(inst_from_EXU_to_MEM),
        .pc_o(pc_from_EXU_to_MEM),
        .result(result_from_EXU_to_MEM),
        .rs2_data_o(rdata2_from_EXU_to_MEM),
        .rd_addr_o(rd_addr_from_EXU_to_MEM),
        .EXU_done(EXU_done),
        // Debug signals
        .alu_op_debug(alu_op_debug),
        .inst_from_EXU_to_MEM_debug(inst_from_EXU_to_MEM_debug)
    );

    // Instantiate MEM
    ysyx_24120009_MEM mem (
        // Clock and reset signals
        .clk(clk),
        .rst(rst),
        // Signals passed from EXU
        .pc_i(pc_from_EXU_to_MEM),
        .inst_i(inst_from_EXU_to_MEM),
        .result_i(result_from_EXU_to_MEM),
        .dmem_addr_i(dmem_addr_from_EXU_to_MEM),
        .rs2_data_i(rdata2_from_EXU_to_MEM),
        .rd_addr_i(rd_addr_from_EXU_to_MEM),
        .EXU_done(EXU_done),
        // Signals passed to WBU
        .inst_o(inst_from_MEM_to_WBU),
        .pc_o(pc_from_MEM_to_WBU),
        .result_o(result_from_MEM_to_WBU),
        .dmem_rdata(dmem_rdata_from_MEM_to_WBU),
        .rd_addr_o(rd_addr_from_MEM_to_WBU),
        .mem_access_done(mem_access_done),
        // Signals passed to simulation environment
        .mem_active(mem_active_debug),
        // Memory interface
        .awvalid(mem_awvalid),
        .awaddr(mem_awaddr),
        .wvalid(mem_wvalid),
        .wready(mem_wready),
        .wdata(mem_wdata),
        .wstrb(mem_wstrb),
        .bvalid(mem_bvalid),
        .bready(mem_bready),
        .arvalid(mem_arvalid),
        .araddr(mem_araddr),
        .rvalid(mem_rvalid),
        .rready(mem_rready),
        .rdata(mem_rdata),
        // debug signals
        .wt_res_valid_debug(wt_res_valid_debug),
        .mem_ctl_state_debug(mem_ctl_state_debug),
        .axi4_mem_state_debug(axi4_mem_state_debug)
    );

    // Instantiate WBU
    ysyx_24120009_WBU wbu (
        // Clock and reset signals
        .clk(clk),
        .rst(rst),
        // WBU interact with register file 
        .reg_write_data_delayed(reg_write_data),
        .rd_addr_o(waddr),
        .rf_we(rf_we),
        // Signals passed from MEM
        .pc_i(pc_from_MEM_to_WBU),
        .inst_i(inst_from_MEM_to_WBU),
        .result_i(result_from_MEM_to_WBU),
        .dmem_rdata_i(dmem_rdata_from_MEM_to_WBU),
        .rd_addr_i(rd_addr_from_MEM_to_WBU),
        .mem_access_done(mem_access_done),
        // Signals passed to IFU
        .pc_wen(pc_wen),
        // Signal passed from IFU
        .inst_from_IFU(inst_from_IFU_to_IDU),
        // Signals passed to simulation environment
        .wbu_active(wbu_active_debug),
        // Signals passed back to MEM
        .inst_o(inst_from_WBU_to_MEM),
        // Debug signals
        .pc_plus4_debug(pc_plus4_debug),
        .wb_sel_debug(wb_sel_debug),
        .opcode_debug(opcode_debug),
        .result_from_WB_debug(result_from_WB_debug)
    );


endmodule