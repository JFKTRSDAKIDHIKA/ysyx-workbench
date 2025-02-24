// Include definitions
`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_IFU (
  // Clock and reset signals
  input                                clk,
  input                                rst,
  // signals passed from IDU
  input      [2:0]                     pc_sel,   
  input      [`ysyx_24120009_DATA_WIDTH-1:0] jump_reg_target,
  input      [`ysyx_24120009_DATA_WIDTH-1:0] br_target,
  input      [`ysyx_24120009_DATA_WIDTH-1:0] jmp_target,
  // signals from WBU
  input                                pc_wen,
  // signal passed to IDU
  output     [`ysyx_24120009_DATA_WIDTH-1:0] pc_o,
  output     [31:0]                          inst_o
  // Handshake signals
  // output                               IFU_valid,
  // input                                IDU_ready
);

  // direct programing interface --- C
  import "DPI-C" function int pmem_read(input int raddr);
  import "DPI-C" function void simulation_exit();

  // Internal signals declaration
  wire  [`ysyx_24120009_DATA_WIDTH-1:0] pc;
  wire  [`ysyx_24120009_DATA_WIDTH-1:0] pc_next;
  wire  [`ysyx_24120009_DATA_WIDTH-1:0] pc_plus4;
  wire  [`ysyx_24120009_DATA_WIDTH-1:0] imem_addr;
  reg [`ysyx_24120009_DATA_WIDTH-1:0] inst;

  // Module instantiation
  ysyx_24120009_Reg #(
    .WIDTH(`ysyx_24120009_DATA_WIDTH),
    .RESET_VAL(`ysyx_24120009_RESET_PC)
  ) pc_reg (
    .clk (clk),
    .rst (rst),
    .din (pc_next),
    .dout(pc),
    .wen (pc_wen)
  );

  // Calculate next PC
  assign pc_plus4 = pc_o + `ysyx_24120009_PC_STEP;
  
  ysyx_24120009_MuxKey #(5, 3, `ysyx_24120009_DATA_WIDTH) mux_pc_sel (pc_next, pc_sel, {
    3'b000, pc_plus4,
    3'b001, jump_reg_target,
    3'b010, br_target,
    3'b011, jmp_target,
    3'b100, exception
  });
  wire [`ysyx_24120009_DATA_WIDTH-1:0] exception = `ysyx_24120009_DATA_WIDTH'b0; // 占位定义，默认无异常

  // Instantiate SRAM module
  wire        sram_rd_req = 1'b1;  
  wire        rd_res_valid;

  ysyx_24120009_SRAM sram_inst (
    .clk(clk),
    .rst(rst),
    .rd_req(sram_rd_req),
    .addr(pc),       // Use PC as the address
    .data_out(inst),
    .rd_res_valid(rd_res_valid)
  );

  // assign IFU_valid = rd_res_valid == 1'b1 ? 1 : 0;

  // handle ebreak instruction
  always @(*) begin
      if (inst == 32'h00100073) begin
          $display("EBREAK: Simulation exiting...");
          simulation_exit(); // 通知仿真环境结束
      end
  end

  // Assign output signals
  assign inst_o = inst;
  assign pc_o = pc;

endmodule
