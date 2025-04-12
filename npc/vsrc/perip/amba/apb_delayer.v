`define ENABLE_APB_DELAY

module apb_delayer(
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output reg        in_pready,
  output reg [31:0] in_prdata,
  output reg        in_pslverr,

  output [31:0] out_paddr,
  output        out_psel,
  output        out_penable,
  output [2:0]  out_pprot,
  output        out_pwrite,
  output [31:0] out_pwdata,
  output [3:0]  out_pstrb,
  input         out_pready,
  input  [31:0] out_prdata,
  input         out_pslverr
);

  assign out_paddr   = in_paddr;
  assign out_psel    = in_psel;
  assign out_penable = in_penable;
  assign out_pprot   = in_pprot;
  assign out_pwrite  = in_pwrite;
  assign out_pwdata  = in_pwdata;
  assign out_pstrb   = in_pstrb;

`ifdef ENABLE_APB_DELAY

  localparam IDLE         = 2'b00;
  localparam WAIT_DEVICE  = 2'b01;
  localparam DELAY        = 2'b10;

  reg [1:0] state;

  // 累加用的定点数参数
  localparam integer r_times_s = 88;   // r=5.5, s=16
  localparam integer s = 16;

  reg [31:0] acc;             // 累加器：累加 r * s
  reg [15:0] delay_counter;   // 最终等待的周期数（acc / s）

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      state <= IDLE;
      acc <= 0;
      delay_counter <= 0;
      in_pready <= 0;
      in_prdata <= 0;
      in_pslverr <= 0;
    end else begin
      case (state)
        IDLE: begin
          acc <= 0;
          if (in_psel && in_penable) begin
            state <= WAIT_DEVICE;
          end else begin
            state <= IDLE;
          end
          in_pready <= 0;
        end

        WAIT_DEVICE: begin
          // 设备尚未ready，表示正在处理
          if (!out_pready) begin
            acc <= acc + r_times_s;
            state <= WAIT_DEVICE;
          end else begin
            // 设备处理完成，保存数据和错误信号
            in_prdata <= out_prdata;
            in_pslverr <= out_pslverr;
            delay_counter <= acc >> 4; 
            state <= DELAY;
          end
        end

        DELAY: begin
          if (delay_counter == 0) begin
            in_pready <= 1;
            state <= IDLE;
          end else begin
            delay_counter <= delay_counter - 1;
            state <= DELAY;
          end
        end
      endcase
    end
  end

`else

  always @(*) begin
    in_pready  = out_pready;
    in_prdata  = out_prdata;
    in_pslverr = out_pslverr;
  end

`endif


endmodule

