// Include definitions
`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_SRAM #(
  parameter DELAY_CYCLES = 1  // Default delay is 1 cycle
)(
  // Clock and reset signals
  input                                                       clk,       
  input                                                       rst,     
  // Read memory signals
  input                                                       rd_req_valid,      // Indicates a valid read request
  input        [`ysyx_24120009_DATA_WIDTH-1:0]                addr,              // Address for the read operation (32-bit)
  output reg   [`ysyx_24120009_DATA_WIDTH-1:0]                data_out,          // Data output from memory (32-bit)
  output wire                                                 rd_res_valid,      // Indicates a valid read response

  // Write memory signals
  input                                                       wt_req_valid,      // Indicates a valid write request
  input        [`ysyx_24120009_DATA_WIDTH-1:0]                waddr,             // Address for the write operation (32-bit)
  input        [`ysyx_24120009_DATA_WIDTH-1:0]                wdata,             // Data to be written to memory (32-bit)
  input wire   [7:0]                                          wmask,             // Write mask to specify which bytes to update
  output wire                                                 wt_res_valid       // Indicates a valid write response
);

  // Import DPI-C function for memory read
  import "DPI-C" function int pmem_read(input int raddr);
  import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

  // Internal signals for pipeline delay
  reg  [`ysyx_24120009_DATA_WIDTH-1:0] addr_delayed;  
  reg                                  rd_req_valid_delayed;  
  reg  [`ysyx_24120009_DATA_WIDTH-1:0] waddr_delayed; 
  reg  [`ysyx_24120009_DATA_WIDTH-1:0] wdata_delayed; 
  reg  [7:0]                           wmask_delayed; 
  reg                                  wt_req_valid_delayed;

  // Pipeline stage to simulate N-cycle latency
  generate
    if (DELAY_CYCLES == 1) begin
      // Single cycle delay
      always @(posedge clk or posedge rst) begin
        if (rst) begin
          addr_delayed <= 32'b0;
          rd_req_valid_delayed <= 1'b0;
          waddr_delayed <= 32'b0;
          wdata_delayed <= 32'b0;
          wmask_delayed <= 8'b0;
          wt_req_valid_delayed <= 1'b0;
        end else begin
          addr_delayed <= addr;
          rd_req_valid_delayed <= rd_req_valid;
          waddr_delayed <= waddr;
          wdata_delayed <= wdata;
          wmask_delayed <= wmask;
          wt_req_valid_delayed <= wt_req_valid;
        end
      end
    end else begin
      // Multi-cycle delay using a register chain
      reg  [`ysyx_24120009_DATA_WIDTH-1:0] addr_pipeline [0:DELAY_CYCLES-1];  
      reg                                  rd_req_valid_pipeline [0:DELAY_CYCLES-1];  
      reg  [`ysyx_24120009_DATA_WIDTH-1:0] waddr_pipeline [0:DELAY_CYCLES-1]; 
      reg  [`ysyx_24120009_DATA_WIDTH-1:0] wdata_pipeline [0:DELAY_CYCLES-1]; 
      reg  [7:0]                           wmask_pipeline [0:DELAY_CYCLES-1]; 
      reg                                  wt_req_valid_pipeline [0:DELAY_CYCLES-1];

      always @(posedge clk or posedge rst) begin
        if (rst) begin
          for (integer i = 0; i < DELAY_CYCLES; i = i + 1) begin
            addr_pipeline[i] <= 32'b0;
            rd_req_valid_pipeline[i] <= 1'b0;
            waddr_pipeline[i] <= 32'b0;
            wdata_pipeline[i] <= 32'b0;
            wmask_pipeline[i] <= 8'b0;
            wt_req_valid_pipeline[i] <= 1'b0;
          end
        end else begin
          // Shift the pipeline
          addr_pipeline[0] <= addr;
          rd_req_valid_pipeline[0] <= rd_req_valid;
          waddr_pipeline[0] <= waddr;
          wdata_pipeline[0] <= wdata;
          wmask_pipeline[0] <= wmask;
          wt_req_valid_pipeline[0] <= wt_req_valid;

          for (integer i = 1; i < DELAY_CYCLES; i = i + 1) begin
            addr_pipeline[i] <= addr_pipeline[i-1];
            rd_req_valid_pipeline[i] <= rd_req_valid_pipeline[i-1];
            waddr_pipeline[i] <= waddr_pipeline[i-1];
            wdata_pipeline[i] <= wdata_pipeline[i-1];
            wmask_pipeline[i] <= wmask_pipeline[i-1];
            wt_req_valid_pipeline[i] <= wt_req_valid_pipeline[i-1];
          end
        end
      end

      // Assign the delayed signals
      assign addr_delayed = addr_pipeline[DELAY_CYCLES-1];
      assign rd_req_valid_delayed = rd_req_valid_pipeline[DELAY_CYCLES-1];
      assign waddr_delayed = waddr_pipeline[DELAY_CYCLES-1];
      assign wdata_delayed = wdata_pipeline[DELAY_CYCLES-1];
      assign wmask_delayed = wmask_pipeline[DELAY_CYCLES-1];
      assign wt_req_valid_delayed = wt_req_valid_pipeline[DELAY_CYCLES-1];
    end
  endgenerate

  // Memory read & write logic
  always @(*) begin
    if (rd_req_valid_delayed) begin
      data_out = pmem_read(addr_delayed);  
      rd_res_valid = 1'b1;
      wt_res_valid = 1'b0;
    end else if (wt_req_valid_delayed) begin
      pmem_write(waddr_delayed, wdata_delayed, wmask_delayed);
      data_out = wdata_delayed;  
      rd_res_valid = 1'b0;
      wt_res_valid = 1'b1;
    end else begin
      data_out = 32'b0;  
      rd_res_valid = 1'b0;
      wt_res_valid = 1'b0;
    end
  end

endmodule