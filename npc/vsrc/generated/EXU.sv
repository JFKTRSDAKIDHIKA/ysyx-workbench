// Generated by CIRCT firtool-1.62.0
module EXU(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_valid,
  input  [31:0] io_in_bits_inst,
  input  [31:0] io_in_bits_pc,
  input  [4:0]  io_in_bits_wb_addr,
  input  [31:0] io_in_bits_alu_op1,
  input  [31:0] io_in_bits_alu_op2,
  input  [31:0] io_in_bits_rs2_data,
  input         io_out_ready,
  output        io_out_valid,
  output [31:0] io_out_bits_inst,
  output [31:0] io_out_bits_pc,
  output [31:0] io_out_bits_dmem_addr,
  output [31:0] io_out_bits_result,
  output [31:0] io_out_bits_rs2_data,
  output [4:0]  io_out_bits_wb_addr
);

  wire [31:0] _alu_instance_io_result;
  reg  [1:0]  state;
  wire        _GEN = state == 2'h0;
  wire        _GEN_0 = state == 2'h1;
  wire        _GEN_1 = state == 2'h2;
  wire        io_in_ready_0 = _GEN & io_in_valid;
  reg  [31:0] exu_reg_inst;
  reg  [31:0] exu_reg_pc;
  reg  [31:0] exu_reg_rs2_data;
  reg  [4:0]  exu_reg_wb_addr;
  wire        _alu_op_T_24 = exu_reg_inst[31:25] == 7'h20;
  reg  [4:0]  casez_tmp;
  always @(*) begin
    casez (exu_reg_inst[14:12])
      3'b000:
        casez_tmp = 5'h0;
      3'b001:
        casez_tmp = 5'h7;
      3'b010:
        casez_tmp = 5'h5;
      3'b011:
        casez_tmp = 5'h6;
      3'b100:
        casez_tmp = 5'h4;
      3'b101:
        casez_tmp = {4'h4, ~_alu_op_T_24};
      3'b110:
        casez_tmp = 5'h3;
      default:
        casez_tmp = 5'h2;
    endcase
  end // always @(*)
  reg  [4:0]  casez_tmp_0;
  always @(*) begin
    casez (exu_reg_inst[14:12])
      3'b000:
        casez_tmp_0 = {4'h0, _alu_op_T_24};
      3'b001:
        casez_tmp_0 = 5'h7;
      3'b010:
        casez_tmp_0 = 5'h5;
      3'b011:
        casez_tmp_0 = 5'h6;
      3'b100:
        casez_tmp_0 = 5'h4;
      3'b101:
        casez_tmp_0 = {4'h4, ~_alu_op_T_24};
      3'b110:
        casez_tmp_0 = 5'h3;
      default:
        casez_tmp_0 = 5'h2;
    endcase
  end // always @(*)
  wire [4:0]  _alu_op_T_47 =
    exu_reg_inst[6:0] == 7'h23 | exu_reg_inst[6:0] == 7'h3 | exu_reg_inst[6:0] == 7'h17
    | exu_reg_inst[6:0] != 7'h37
      ? 5'h0
      : 5'hF;
  wire [4:0]  _alu_op_T_49 = exu_reg_inst[6:0] == 7'h13 ? casez_tmp : _alu_op_T_47;
  wire [4:0]  alu_op = exu_reg_inst[6:0] == 7'h33 ? casez_tmp_0 : _alu_op_T_49;
  always @(posedge clock) begin
    if (reset)
      state <= 2'h0;
    else if (_GEN) begin
      if (io_in_valid)
        state <= 2'h1;
    end
    else if (_GEN_0)
      state <= 2'h2;
    else if (_GEN_1 & io_out_ready)
      state <= 2'h0;
    if (io_in_ready_0 & io_in_valid) begin
      exu_reg_inst <= io_in_bits_inst;
      exu_reg_pc <= io_in_bits_pc;
      exu_reg_rs2_data <= io_in_bits_rs2_data;
      exu_reg_wb_addr <= io_in_bits_wb_addr;
    end
  end // always @(posedge)
  ALU alu_instance (
    .io_a      (io_in_bits_alu_op1),
    .io_b      (io_in_bits_alu_op2),
    .io_aluOp  (alu_op),
    .io_result (_alu_instance_io_result)
  );
  assign io_in_ready = io_in_ready_0;
  assign io_out_valid = ~(_GEN | _GEN_0) & _GEN_1;
  assign io_out_bits_inst = exu_reg_inst;
  assign io_out_bits_pc = exu_reg_pc;
  assign io_out_bits_dmem_addr = _alu_instance_io_result;
  assign io_out_bits_result = _alu_instance_io_result;
  assign io_out_bits_rs2_data = exu_reg_rs2_data;
  assign io_out_bits_wb_addr = exu_reg_wb_addr;
endmodule

