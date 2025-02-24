// Include definitions
`include "vsrc/include/ysyx_24120009_defs.vh"

// SRAM module with DPI-C interface for memory read operations
module ysyx_24120009_SRAM (
  input                                                       clk,       // Clock signal
  input                                                       rst,       // Reset signal
  input                                                       rd_req,    // Read request signal
  input        [`ysyx_24120009_DATA_WIDTH-1:0]                addr,      // 32-bit address
  output reg   [`ysyx_24120009_DATA_WIDTH-1:0]                data_out,  // 32-bit data output
  output wire                                                 rd_res_valid
);

  // Import DPI-C function for memory read
  import "DPI-C" function int pmem_read(input int raddr);

  // Internal signals for pipeline delay
  reg  [31:0] addr_delayed;  // Delayed address
  reg         rd_req_delayed;  // Delayed read request

  // Pipeline stage to simulate 1-cycle latency
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      addr_delayed <= 32'b0;
      rd_req_delayed <= 1'b0;
    end else begin
      addr_delayed <= addr;
      rd_req_delayed <= rd_req;
    end
  end

  // Data output logic
  always @(*) begin
    if (rd_req_delayed) begin
      data_out = pmem_read(addr_delayed);  // Call DPI-C function to read data
      rd_res_valid = 1'b1;
    end else begin
      data_out = 32'b0;  // Default value when no valid read request
      rd_res_valid = 1'b0;
    end
  end

endmodule