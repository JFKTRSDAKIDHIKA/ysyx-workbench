// Generated by CIRCT firtool-1.62.0
module IDU(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_valid,
  input  [31:0] io_in_bits_inst,
  input  [31:0] io_in_bits_pc,
  input         io_out_ready,
  output        io_out_valid,
  output [31:0] io_out_bits_inst,
  output [31:0] io_out_bits_pc,
  output [4:0]  io_out_bits_wb_addr,
  output [31:0] io_out_bits_alu_op1,
  output [31:0] io_out_bits_alu_op2,
  output [31:0] io_out_bits_rs2_data,
  output [31:0] io_out_bits_csr_rdata,
  output [31:0] io_jump_reg_target,
  output [31:0] io_br_target,
  output [31:0] io_jmp_target,
  output [2:0]  io_pc_sel,
  output [31:0] io_pc_csr,
  input  [31:0] io_rs1_data,
  input  [31:0] io_rs2_data,
  output [4:0]  io_rs1_addr,
  output [4:0]  io_rs2_addr
);

  wire        _csr_instance_io_csr_wen;
  wire [31:0] _csr_instance_io_csr_rdata;
  wire [31:0] _csr_instance_io_csr_mtvec;
  wire [31:0] _csr_instance_io_csr_mepc;
  reg  [31:0] idu_reg_inst;
  reg  [31:0] idu_reg_pc;
  reg  [1:0]  state;
  wire        _GEN = state == 2'h0;
  wire        _GEN_0 = state == 2'h1;
  wire        _GEN_1 = state == 2'h2;
  wire        io_in_ready_0 = _GEN & io_in_valid;
  wire [19:0] _imm_i_sext_T_1 = {20{idu_reg_inst[31]}};
  wire        _io_pc_sel_T_5 = idu_reg_inst[14:12] == 3'h0;
  wire        _io_pc_sel_T_1 = idu_reg_inst[14:12] == 3'h1;
  reg         casez_tmp;
  wire        br_eq = io_rs1_data == io_rs2_data;
  wire        br_lt = $signed(io_rs1_data) < $signed(io_rs2_data);
  wire        br_ltu = io_rs1_data < io_rs2_data;
  wire        _branch_taken_T_4 = _io_pc_sel_T_5 & br_eq;
  always @(*) begin
    casez (idu_reg_inst[14:12])
      3'b000:
        casez_tmp = _branch_taken_T_4;
      3'b001:
        casez_tmp = ~br_eq;
      3'b010:
        casez_tmp = _branch_taken_T_4;
      3'b011:
        casez_tmp = _branch_taken_T_4;
      3'b100:
        casez_tmp = br_lt;
      3'b101:
        casez_tmp = ~br_lt;
      3'b110:
        casez_tmp = br_ltu;
      default:
        casez_tmp = ~br_ltu;
    endcase
  end // always @(*)
  wire        _io_pc_sel_T_3 = idu_reg_inst[14:12] == 3'h2;
  wire [11:0] _csr_instance_io_csr_addr_T_3 =
    _io_pc_sel_T_3 | _io_pc_sel_T_1 ? idu_reg_inst[31:20] : 12'h0;
  wire [11:0] _csr_instance_io_csr_addr_T_5 =
    _io_pc_sel_T_5 ? 12'h341 : _csr_instance_io_csr_addr_T_3;
  wire [31:0] _csr_instance_io_csr_wdata_T_2 = _io_pc_sel_T_1 ? io_rs1_data : 32'h0;
  wire [31:0] _csr_instance_io_csr_wdata_T_4 =
    _io_pc_sel_T_3
      ? io_rs1_data | _csr_instance_io_csr_rdata
      : _csr_instance_io_csr_wdata_T_2;
  wire [31:0] _csr_instance_io_csr_wdata_T_6 =
    _io_pc_sel_T_5 ? idu_reg_pc : _csr_instance_io_csr_wdata_T_4;
  wire        _io_pc_csr_T = idu_reg_inst[31:20] == 12'h0;
  wire        _io_pc_csr_T_2 = idu_reg_inst[31:20] == 12'h302;
  wire        _csr_instance_io_csr_wen_T_9 =
    _io_pc_sel_T_5 ? ~_io_pc_csr_T_2 & _io_pc_csr_T : _io_pc_sel_T_3 | _io_pc_sel_T_1;
  wire        _io_pc_sel_T_13 = idu_reg_inst[6:0] == 7'h73;
  wire [31:0] _io_pc_csr_T_1 = _io_pc_csr_T ? _csr_instance_io_csr_mtvec : 32'h0;
  wire [31:0] _io_pc_csr_T_3 =
    _io_pc_csr_T_2 ? _csr_instance_io_csr_mepc : _io_pc_csr_T_1;
  wire [2:0]  _io_pc_sel_T_6 = _io_pc_sel_T_5 ? 3'h5 : 3'h0;
  wire        _alu_op2Sel_T_4 = idu_reg_inst[6:0] == 7'h67;
  wire [2:0]  _io_pc_sel_T_8 = _alu_op2Sel_T_4 ? 3'h3 : 3'h0;
  wire        _alu_op2Sel_T_6 = idu_reg_inst[6:0] == 7'h6F;
  wire [2:0]  _io_pc_sel_T_10 = _alu_op2Sel_T_6 ? 3'h2 : _io_pc_sel_T_8;
  wire        _alu_op2Sel_T_8 = idu_reg_inst[6:0] == 7'h63;
  wire [2:0]  _io_pc_sel_T_12 = _alu_op2Sel_T_8 ? {2'h0, casez_tmp} : _io_pc_sel_T_10;
  wire        _alu_op2Sel_T_11 = idu_reg_inst[6:0] == 7'h3;
  wire        _alu_op2Sel_T_12 = idu_reg_inst[6:0] == 7'h23;
  wire        _alu_op2Sel_T_14 = idu_reg_inst[6:0] == 7'h33;
  wire        _alu_op2Sel_T_16 = idu_reg_inst[6:0] == 7'h13;
  reg  [31:0] casez_tmp_0;
  wire [1:0]  _alu_op2Sel_T_13 = _alu_op2Sel_T_12 ? 2'h2 : {1'h0, _alu_op2Sel_T_11};
  wire [1:0]  _alu_op2Sel_T_15 = _alu_op2Sel_T_14 ? 2'h3 : _alu_op2Sel_T_13;
  wire [1:0]  alu_op2Sel = _alu_op2Sel_T_16 ? 2'h1 : _alu_op2Sel_T_15;
  always @(*) begin
    casez (alu_op2Sel)
      2'b00:
        casez_tmp_0 = idu_reg_pc;
      2'b01:
        casez_tmp_0 = {_imm_i_sext_T_1, idu_reg_inst[31:20]};
      2'b10:
        casez_tmp_0 = {{20{idu_reg_inst[31]}}, idu_reg_inst[31:25], idu_reg_inst[11:7]};
      default:
        casez_tmp_0 = io_rs2_data;
    endcase
  end // always @(*)
  always @(posedge clock) begin
    if (io_in_ready_0 & io_in_valid) begin
      idu_reg_inst <= io_in_bits_inst;
      idu_reg_pc <= io_in_bits_pc;
    end
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
  end // always @(posedge)
  assign _csr_instance_io_csr_wen = _io_pc_sel_T_13 & _csr_instance_io_csr_wen_T_9;
  CSRFile csr_instance (
    .clock        (clock),
    .reset        (reset),
    .io_csr_addr  (_csr_instance_io_csr_addr_T_5),
    .io_csr_wdata (_csr_instance_io_csr_wdata_T_6),
    .io_csr_rdata (_csr_instance_io_csr_rdata),
    .io_csr_wen   (_csr_instance_io_csr_wen),
    .io_csr_mtvec (_csr_instance_io_csr_mtvec),
    .io_csr_mepc  (_csr_instance_io_csr_mepc)
  );
  assign io_in_ready = io_in_ready_0;
  assign io_out_valid = ~(_GEN | _GEN_0) & _GEN_1;
  assign io_out_bits_inst = idu_reg_inst;
  assign io_out_bits_pc = idu_reg_pc;
  assign io_out_bits_wb_addr = idu_reg_inst[11:7];
  assign io_out_bits_alu_op1 =
    ~(_alu_op2Sel_T_16 | _alu_op2Sel_T_14 | _alu_op2Sel_T_12 | _alu_op2Sel_T_11
      | _alu_op2Sel_T_8 | _alu_op2Sel_T_6 | _alu_op2Sel_T_4)
    & (idu_reg_inst[6:0] == 7'h17 | idu_reg_inst[6:0] == 7'h37)
      ? {idu_reg_inst[31:12], 12'h0}
      : io_rs1_data;
  assign io_out_bits_alu_op2 = casez_tmp_0;
  assign io_out_bits_rs2_data = io_rs2_data;
  assign io_out_bits_csr_rdata = _csr_instance_io_csr_rdata;
  assign io_jump_reg_target =
    io_rs1_data + {_imm_i_sext_T_1, idu_reg_inst[31:20]} & 32'hFFFFFFFE;
  assign io_br_target =
    idu_reg_pc
    + {{20{idu_reg_inst[31]}},
       idu_reg_inst[7],
       idu_reg_inst[30:25],
       idu_reg_inst[11:8],
       1'h0};
  assign io_jmp_target =
    idu_reg_pc
    + {{12{idu_reg_inst[31]}},
       idu_reg_inst[19:12],
       idu_reg_inst[20],
       idu_reg_inst[30:21],
       1'h0};
  assign io_pc_sel = _io_pc_sel_T_13 ? _io_pc_sel_T_6 : _io_pc_sel_T_12;
  assign io_pc_csr = _io_pc_sel_T_5 ? _io_pc_csr_T_3 : 32'h0;
  assign io_rs1_addr = idu_reg_inst[19:15];
  assign io_rs2_addr = idu_reg_inst[24:20];
endmodule

