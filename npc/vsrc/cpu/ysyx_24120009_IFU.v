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
  output     [31:0]                          inst_o,
  // handshake signals
  output reg                            inst_valid,
  input                                 idu_ready,
  // Memoey interface
  output reg                                  arvalid,
  input  wire                                 arready,
  output wire [`ysyx_24120009_DATA_WIDTH-1:0] araddr,
  input wire                                  rvalid,
  output reg                                  rready,
  input  wire [`ysyx_24120009_DATA_WIDTH-1:0] rdata,
  // Warning: Signal 'rresp' is not used !
  // debug signals 
  output [2:0]                          state_debug,
  output                                rd_res_valid_debug
  );

  // Use state machine to control the IFU logic
  reg [2:0] state;

  localparam IDLE        = 3'b000,
             FETCH_REQ   = 3'b001,
             FETCH_WAIT  = 3'b010,
             FETCH_DONE  = 3'b011;

  // State machine logic 
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      state <= FETCH_REQ;
      if_inst_buffer <= 32'b0;
      arvalid <= 1'b0;
      inst_valid <= 1'b0;
    end else begin
      case (state)
        IDLE: begin
          inst_valid <= 1'b0;
          arvalid <= 1'b0;
          rready <= 0;
          if (pc_wen) begin
            state <= FETCH_REQ;  
          end
        end

        FETCH_REQ: begin
          inst_valid <= 1'b0;
          arvalid <= 1'b1;  
          rready <= 0;
          if (arready) begin
            state <= FETCH_WAIT; 
          end
        end

        FETCH_WAIT: begin
          inst_valid <= 1'b0;
          arvalid <= 1'b0;
          rready <= 1;
          if (rvalid) begin
            if_inst_buffer <= rdata;  
            state <= FETCH_DONE;              
          end
        end

        FETCH_DONE: begin
          inst_valid <= 1'b1;  
          rready <= 0;
          if (idu_ready) begin
            state <= IDLE;     
            arvalid <= 1'b0;
          end
        end

        default: begin
          state <= IDLE;
          inst_valid <= 1'b0;
          arvalid <= 1'b0;
          rready <= 0;
        end
      endcase
    end
  end

  // direct programing interface --- C
  import "DPI-C" function void simulation_exit();

  // Internal signals declaration
  wire  [`ysyx_24120009_DATA_WIDTH-1:0] pc;
  wire  [`ysyx_24120009_DATA_WIDTH-1:0] pc_next;
  wire  [`ysyx_24120009_DATA_WIDTH-1:0] pc_plus4;
  wire  [`ysyx_24120009_DATA_WIDTH-1:0] imem_addr;

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

  // Internal signal declaration
  wire [`ysyx_24120009_DATA_WIDTH-1:0] exception = `ysyx_24120009_DATA_WIDTH'b0; // 占位定义，默认无异常
  reg  [31:0] if_inst_buffer;

  // handle ebreak instruction
  always @(*) begin
      if (inst_o == 32'h00100073) begin
          $display("EBREAK: Simulation exiting...");
          simulation_exit(); // 通知仿真环境结束
      end
  end

  // Assign output and debug signals
  assign pc_o = pc;
  assign state_debug = state;
  assign rd_res_valid_debug = rvalid;
  assign araddr = pc;
  assign inst_o = if_inst_buffer; 

endmodule
