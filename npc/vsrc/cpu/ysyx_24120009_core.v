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
    output wire mem_active_debug
);

    // Debug signal declaration
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

    // Internal signals
    wire [`ysyx_24120009_DATA_WIDTH-1:0] reg_write_data;
    wire [4:0] alu_op;
    wire [2:0] pc_sel;
    wire rf_we;
    wire mem_en;
    wire mem_wen;
    wire [1:0] wb_sel;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] Op1;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] Op2;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] pc_plus4;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] jump_reg_target;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] br_target;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] jmp_target;
    wire pc_wen;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] pc_from_IFU_to_IDU;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] inst_from_IFU_to_IDU;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] pc_from_IDU_to_EXU;           
    wire [`ysyx_24120009_DATA_WIDTH-1:0] inst_from_IDU_to_EXU;         
    wire [`ysyx_24120009_DATA_WIDTH-1:0] rdata2_from_IDU_to_EXU;       
    wire [4:0] rd_addr_from_IDU_to_EXU;   
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
        .inst_o(inst_from_IFU_to_IDU)
    );


    // Instantiate IDU
    ysyx_24120009_IDU idu (
        // Clock and reset signals
        .clk(clk),
        .rst(rst),
        // Signals passed from IFU
        .inst_i(inst_from_IFU_to_IDU),
        .pc_i(pc_from_IFU_to_IDU),
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
        // Signals passed back to IFU
        .jump_reg_target_o(jump_reg_target),
        .br_target_o(br_target),
        .jmp_target_o(jmp_target),
        .pc_sel(pc_sel)
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
        // Signals passed to MEM
        .dmem_addr(dmem_addr_from_EXU_to_MEM),
        .inst_o(inst_from_EXU_to_MEM),
        .pc_o(pc_from_EXU_to_MEM),
        .result(result_from_EXU_to_MEM),
        .rs2_data_o(rdata2_from_EXU_to_MEM),
        .rd_addr_o(rd_addr_from_EXU_to_MEM) 
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
        // Signals passed to WBU
        .inst_o(inst_from_MEM_to_WBU),
        .pc_o(pc_from_MEM_to_WBU),
        .result_o(result_from_MEM_to_WBU),
        .dmem_rdata(dmem_rdata_from_MEM_to_WBU),
        .rd_addr_o(rd_addr_from_MEM_to_WBU),
        // Signals passed to simulation environment
        .mem_active(mem_active_debug),
        // Signals passed from IFU
        .inst_from_IFU(inst_from_IFU_to_IDU)
    );

    // Instantiate WBU
    ysyx_24120009_WBU wbu (
        // Clock and reset signals
        .clk(clk),
        .rst(rst),
        // WBU interact with register file 
        .reg_write_data(reg_write_data),
        .rd_addr_o(waddr),
        .rf_we(rf_we),
        // Signals passed from MEM
        .pc_i(pc_from_MEM_to_WBU),
        .inst_i(inst_from_MEM_to_WBU),
        .result_i(result_from_MEM_to_WBU),
        .dmem_rdata_i(dmem_rdata_from_MEM_to_WBU),
        .rd_addr_i(rd_addr_from_MEM_to_WBU),
        // Signals passed to IFU
        .pc_wen(pc_wen),
        // Signal passed from IFU
        .inst_from_IFU(inst_from_IFU_to_IDU),
        // Signals passed to simulation environment
        .wbu_active(wbu_active_debug),
        // Debug signals
        .pc_plus4_debug(pc_plus4_debug),
        .wb_sel_debug(wb_sel_debug),
        .opcode_debug(opcode_debug)
    );


endmodule