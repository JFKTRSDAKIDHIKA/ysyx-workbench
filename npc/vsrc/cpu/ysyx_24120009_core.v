`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_core (
    input wire clk,
    input wire rst,
    // For debug purpose
    output [`ysyx_24120009_DATA_WIDTH-1:0] pc_debug,
    output [`ysyx_24120009_DATA_WIDTH-1:0] Op1_debug,
    output [`ysyx_24120009_DATA_WIDTH-1:0] Op2_debug,
    output [31:0] inst_debug,
    output [`ysyx_24120009_DATA_WIDTH-1:0] reg_write_data_debug,
    output is_ebreak_debug,
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] x2_debug,
    output wire [`ysyx_24120009_REG_ADDR_WIDTH-1:0] waddr_debug,
    output wire [31:0] imem_addr_debug,
    output wire mem_wen_debug,
    output wire mem_en_debug,
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] dmem_addr_debug,
    output wire [`ysyx_24120009_DATA_WIDTH-1:0] dmem_wdata_debug,
    output wire [7:0] wmask_debug
);

    // direct programing interface --- C
    import "DPI-C" function int pmem_read(input int raddr);
    import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

    // Debug signal declaration
    assign pc_debug = pc;
    assign Op1_debug = Op1;
    assign Op2_debug = Op2;
    assign inst_debug = inst;
    assign reg_write_data_debug = reg_write_data;
    assign is_ebreak_debug = is_ebreak;
    assign waddr_debug = waddr;
    assign imem_addr_debug = imem_addr;
    assign mem_wen_debug = mem_wen;
    assign dmem_addr_debug = dmem_addr;
    assign dmem_wdata_debug = dmem_wdata;
    assign mem_en_debug = mem_en;
    assign wmask_debug = wmask;

    // Internal signals
    wire [`ysyx_24120009_DATA_WIDTH-1:0] pc;
    wire [31:0] inst;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] reg_write_data;
    wire [4:0] alu_op;
    wire [1:0] op1_sel;
    wire [1:0] op2_sel;
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
    wire br_eq;
    wire br_lt;
    wire br_ltu;
    wire [2:0] ctl_mem_access;
    //  Register file address
    wire [`ysyx_24120009_REG_ADDR_WIDTH-1:0] rs1_addr;
    wire [`ysyx_24120009_REG_ADDR_WIDTH-1:0] rs2_addr;
    wire [`ysyx_24120009_REG_ADDR_WIDTH-1:0] waddr;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] rdata1;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] rdata2;

    // Instruction Memory interface
    wire [31:0] imem_addr;
    reg [`ysyx_24120009_DATA_WIDTH-1:0] imem_rdata;
    // Instruction Memory access
    always @(*) begin
        imem_rdata = pmem_read(imem_addr);
    end
    
    // Data Memory interface
    reg [`ysyx_24120009_DATA_WIDTH-1:0] dmem_rdata_raw;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] dmem_rdata;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] dmem_addr;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] dmem_wdata;
    wire [`ysyx_24120009_DATA_WIDTH-1:0] dmem_wdata_raw;
    wire [7:0] wmask;
    assign dmem_wdata_raw = rdata2;

    // Data memeory access
    always @(*) begin
        if (mem_en) begin 
            // read data from data memory
            dmem_rdata_raw = pmem_read(dmem_addr);
            if (mem_wen) begin 
            // write data to data memory
            pmem_write(dmem_addr, dmem_wdata, wmask);
            end
        end
        else begin
            dmem_rdata_raw = 0;
        end
    end

    ysyx_24120009_alignment_network alignment_network (
        .data_in(dmem_rdata_raw),
        .control(ctl_mem_access),
        .dmem_addr(dmem_addr),
        .data_out(dmem_rdata)
    );

    ysyx_24120009_wmask_gen wmask_gen (
        .control(ctl_mem_access),
        .dmem_addr(dmem_addr),
        .wmask(wmask),
        .dmem_wdata_raw(dmem_wdata_raw),
        .dmem_wdata(dmem_wdata)
    );

    // handle ebreak signal
    wire is_ebreak;
    import "DPI-C" function void simulation_exit();
    always @(*) begin
        if (is_ebreak) begin
           $display("EBREAK: Simulation exiting...");
           simulation_exit(); // 通知仿真环境结束
        end
    end


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
        .clk(clk),
        .rst(rst),
        .pc_sel(pc_sel),
        .jump_reg_target(jump_reg_target),
        .br_target(br_target),
        .jmp_target(jmp_target),
        .pc_wen(1'b1),
        .pc_o(pc),
        .inst_o(inst),
        .inst_i(imem_rdata),
        .pc_plus4_o(pc_plus4)
    );
    assign imem_addr = pc;


    // Instantiate IDU
    ysyx_24120009_IDU idu (
        // Instruction input
        .inst_i(inst),
        // Operands output
        .Op1(Op1),
        .Op2(Op2),
        .Op1Sel(op1_sel),
        .Op2Sel(op2_sel),
        // Register data
        .rs1_data_i(rdata1),
        .rs2_data_i(rdata2),
        .rd_addr_o(waddr),
        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        // Program counter input
        .pc_i(pc),
        // Target address outputs
        .jump_reg_target_o(jump_reg_target),
        .br_target_o(br_target),
        .jmp_target_o(jmp_target),
        // Branch condition outputs
        .br_eq(br_eq),
        .br_lt(br_lt),
        .br_ltu(br_ltu)
    );


    // Instantiate Control Logic
    ysyx_24120009_ControlLogic control (
        .inst(inst),
        .br_eq(br_eq),
        .br_lt(br_lt),
        .br_ltu(br_ltu),
        .alu_op(alu_op),
        .op1_sel(op1_sel),
        .op2_sel(op2_sel),
        .pc_sel(pc_sel),
        .rf_we(rf_we),
        .mem_en(mem_en),
        .mem_wen(mem_wen),
        .wb_sel(wb_sel),
        .is_ebreak(is_ebreak),
        .ctl_mem_access(ctl_mem_access)
    );

    // Instantiate EXU
    ysyx_24120009_EXU exu (
        .clk(clk),
        .rst(rst),
        .Op1(Op1),
        .Op2(Op2),
        .alu_op(alu_op),
        .wb_sel(wb_sel),
        .pc_plus4(pc_plus4),
        .reg_write_data(reg_write_data),
        .dmem_rdata(dmem_rdata),
        .dmem_addr(dmem_addr)   
    );


endmodule