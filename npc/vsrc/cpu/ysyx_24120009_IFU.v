// Include definitions
`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_IFU (
  // Clock and reset signals
  input                                clk,
  input                                rst,
  // Instruction input from external (memory interface)
  input      [31:0]                    inst_i,
  // Program counter (PC) control signals
  input      [2:0]                     pc_sel,   
  input      [`ysyx_24120009_DATA_WIDTH-1:0] jump_reg_target,
  input      [`ysyx_24120009_DATA_WIDTH-1:0] br_target,
  input      [`ysyx_24120009_DATA_WIDTH-1:0] jmp_target,
  input                                pc_wen,
  // IFU output
  output     [`ysyx_24120009_DATA_WIDTH-1:0] pc_o,
  output     [31:0]                          inst_o,
  output     [`ysyx_24120009_DATA_WIDTH-1:0] pc_plus4_o
);

  // -----------------------------
  // 1) Declare internal signals
  // -----------------------------
  wire [`ysyx_24120009_DATA_WIDTH-1:0] pc_next;
  wire [`ysyx_24120009_DATA_WIDTH-1:0] pc_plus4;

  // -----------------------------
  // 2) Instantiate PC register
  // -----------------------------
  ysyx_24120009_Reg #(
    .WIDTH(`ysyx_24120009_DATA_WIDTH),
    .RESET_VAL(`ysyx_24120009_RESET_PC)
  ) pc_reg (
    .clk (clk),
    .rst (rst),
    .din (pc_next),
    .dout(pc_o),
    .wen (pc_wen)
  );

  // -----------------------------
  // 3) Calculate next PC
  // -----------------------------
  assign pc_plus4 = pc_o + `ysyx_24120009_PC_STEP;
  assign pc_plus4_o = pc_plus4;

  ysyx_24120009_MuxKey #(5, 3, `ysyx_24120009_DATA_WIDTH) mux_pc_sel (pc_next, pc_sel, {
    3'b000, pc_plus4,
    3'b001, jump_reg_target,
    3'b010, br_target,
    3'b011, jmp_target,
    3'b100, exception
  });
  wire [`ysyx_24120009_DATA_WIDTH-1:0] exception = `ysyx_24120009_DATA_WIDTH'b0; // 占位定义，默认无异常


  // -----------------------------
  // 4) Output current instruction
  // -----------------------------
  assign inst_o = inst_i;

endmodule
