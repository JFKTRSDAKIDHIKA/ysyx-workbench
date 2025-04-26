`define ENABLE_AXI_DELAY

module axi4_delayer #(
  parameter integer r_times_s = 88, // r=5.5, s=16, 可配置
  parameter integer s = 16,
  parameter integer BURST_MAX = 16
)(
  input         clock,
  input         reset,

  output        in_arready,
  input         in_arvalid,
  input  [3:0]  in_arid,
  input  [31:0] in_araddr,
  input  [7:0]  in_arlen,
  input  [2:0]  in_arsize,
  input  [1:0]  in_arburst,
  input         in_rready,
  output reg        in_rvalid,
  output reg [3:0]  in_rid,
  output reg [31:0] in_rdata,
  output reg [1:0]  in_rresp,
  output reg        in_rlast,
  output        in_awready,
  input         in_awvalid,
  input  [3:0]  in_awid,
  input  [31:0] in_awaddr,
  input  [7:0]  in_awlen,
  input  [2:0]  in_awsize,
  input  [1:0]  in_awburst,
  output        in_wready,
  input         in_wvalid,
  input  [31:0] in_wdata,
  input  [3:0]  in_wstrb,
  input         in_wlast,
                in_bready,
  output reg        in_bvalid,
  output reg [3:0]  in_bid,
  output reg [1:0]  in_bresp,

  input         out_arready,
  output        out_arvalid,
  output [3:0]  out_arid,
  output [31:0] out_araddr,
  output [7:0]  out_arlen,
  output [2:0]  out_arsize,
  output [1:0]  out_arburst,
  output        out_rready,
  input         out_rvalid,
  input  [3:0]  out_rid,
  input  [31:0] out_rdata,
  input  [1:0]  out_rresp,
  input         out_rlast,
  input         out_awready,
  output        out_awvalid,
  output [3:0]  out_awid,
  output [31:0] out_awaddr,
  output [7:0]  out_awlen,
  output [2:0]  out_awsize,
  output [1:0]  out_awburst,
  input         out_wready,
  output        out_wvalid,
  output [31:0] out_wdata,
  output [3:0]  out_wstrb,
  output        out_wlast,
                out_bready,
  input         out_bvalid,
  input  [3:0]  out_bid,
  input  [1:0]  out_bresp
);

  // 直通信号
  assign in_arready = out_arready;
  assign out_arvalid = in_arvalid;
  assign out_arid = in_arid;
  assign out_araddr = in_araddr;
  assign out_arlen = in_arlen;
  assign out_arsize = in_arsize;
  assign out_arburst = in_arburst;
  assign out_rready = in_rready;
  assign in_awready = out_awready;
  assign out_awvalid = in_awvalid;
  assign out_awid = in_awid;
  assign out_awaddr = in_awaddr;
  assign out_awlen = in_awlen;
  assign out_awsize = in_awsize;
  assign out_awburst = in_awburst;
  assign in_wready = out_wready;
  assign out_wvalid = in_wvalid;
  assign out_wdata = in_wdata;
  assign out_wstrb = in_wstrb;
  assign out_wlast = in_wlast;
  assign out_bready = in_bready;

`ifdef ENABLE_AXI_DELAY

  // ----------- 读通道延迟FIFO -----------
  typedef struct packed {
    reg [3:0]  id;
    reg [31:0] data;
    reg [1:0]  resp;
    reg        last;
    reg [15:0] delay_counter;
    reg        valid;
  } r_fifo_entry_t;

  r_fifo_entry_t r_fifo [0:BURST_MAX-1];
  reg [$clog2(BURST_MAX)-1:0] r_fifo_wptr, r_fifo_rptr;
  reg [7:0] r_burst_len;
  reg       r_burst_active;
  reg [31:0] r_acc;

  // 读地址通道直通
  // 已在assign部分

  // 读数据通道延迟
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      r_fifo_wptr <= 0;
      r_fifo_rptr <= 0;
      r_burst_len <= 0;
      r_burst_active <= 0;
      r_acc <= 0;
      in_rvalid <= 0;
      in_rid <= 0;
      in_rdata <= 0;
      in_rresp <= 0;
      in_rlast <= 0;
      for (integer i = 0; i < BURST_MAX; i = i + 1) begin
        r_fifo[i].valid <= 0;
        r_fifo[i].delay_counter <= 0;
      end
    end else begin
      // 事务开始
      if (in_arvalid && out_arready && !r_burst_active) begin
        r_burst_len <= in_arlen;
        r_burst_active <= 1;
        r_acc <= 0;
      end

      // 接收设备数据
      if (out_rvalid && r_burst_active) begin
        r_fifo[r_fifo_wptr].id    <= out_rid;
        r_fifo[r_fifo_wptr].data  <= out_rdata;
        r_fifo[r_fifo_wptr].resp  <= out_rresp;
        r_fifo[r_fifo_wptr].last  <= out_rlast;
        r_fifo[r_fifo_wptr].delay_counter <= r_acc >> 4;
        r_fifo[r_fifo_wptr].valid <= 1;
        r_fifo_wptr <= r_fifo_wptr + 1;
        r_acc <= 0;
        if (out_rlast) r_burst_active <= 0;
      end else if (r_burst_active && !out_rvalid) begin
        r_acc <= r_acc + r_times_s;
      end

      // 所有FIFO项delay计数递减
      for (integer i = 0; i < BURST_MAX; i = i + 1) begin
        if (r_fifo[i].valid && r_fifo[i].delay_counter != 0)
          r_fifo[i].delay_counter <= r_fifo[i].delay_counter - 1;
      end

      // 输出数据
      if (r_fifo[r_fifo_rptr].valid && r_fifo[r_fifo_rptr].delay_counter == 0) begin
        in_rvalid <= 1;
        in_rid    <= r_fifo[r_fifo_rptr].id;
        in_rdata  <= r_fifo[r_fifo_rptr].data;
        in_rresp  <= r_fifo[r_fifo_rptr].resp;
        in_rlast  <= r_fifo[r_fifo_rptr].last;
        if (in_rready) begin
          r_fifo[r_fifo_rptr].valid <= 0;
          r_fifo_rptr <= r_fifo_rptr + 1;
        end
      end else begin
        in_rvalid <= 0;
      end
    end
  end

  // ----------- 写响应通道延迟 -----------
  typedef struct packed {
    reg [3:0] id;
    reg [1:0] resp;
    reg [15:0] delay_counter;
    reg       valid;
  } b_fifo_entry_t;

  b_fifo_entry_t b_fifo [0:1]; // 只支持单写响应
  reg b_burst_active;
  reg [31:0] b_acc;

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      b_burst_active <= 0;
      b_acc <= 0;
      in_bvalid <= 0;
      in_bid <= 0;
      in_bresp <= 0;
      b_fifo[0].valid <= 0;
      b_fifo[0].delay_counter <= 0;
    end else begin
      // 写事务开始
      if (in_awvalid && out_awready && !b_burst_active) begin
        b_burst_active <= 1;
        b_acc <= 0;
      end

      // 接收设备写响应
      if (out_bvalid && b_burst_active) begin
        b_fifo[0].id    <= out_bid;
        b_fifo[0].resp  <= out_bresp;
        b_fifo[0].delay_counter <= b_acc >> 4;
        b_fifo[0].valid <= 1;
        b_burst_active <= 0;
        b_acc <= 0;
      end else if (b_burst_active && !out_bvalid) begin
        b_acc <= b_acc + r_times_s;
      end

      // 写响应delay计数递减
      if (b_fifo[0].valid && b_fifo[0].delay_counter != 0)
        b_fifo[0].delay_counter <= b_fifo[0].delay_counter - 1;

      // 输出写响应
      if (b_fifo[0].valid && b_fifo[0].delay_counter == 0) begin
        in_bvalid <= 1;
        in_bid    <= b_fifo[0].id;
        in_bresp  <= b_fifo[0].resp;
        if (in_bready) begin
          b_fifo[0].valid <= 0;
        end
      end else begin
        in_bvalid <= 0;
      end
    end
  end

`else

  // 直通
  always @(*) begin
    in_rvalid = out_rvalid;
    in_rid    = out_rid;
    in_rdata  = out_rdata;
    in_rresp  = out_rresp;
    in_rlast  = out_rlast;
    in_bvalid = out_bvalid;
    in_bid    = out_bid;
    in_bresp  = out_bresp;
  end

`endif

endmodule