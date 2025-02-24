// Include definitions
`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_SRAM (
  input                                                       clk,       
  input                                                       rst,       
  input                                                       rd_req_valid,      // Read request signal
  input        [`ysyx_24120009_DATA_WIDTH-1:0]                addr,              // 32-bit address
  output reg   [`ysyx_24120009_DATA_WIDTH-1:0]                data_out,          // 32-bit data output
  output wire                                                 rd_res_valid       // Read response valid signal
);

  // Import DPI-C function for memory read
  import "DPI-C" function int pmem_read(input int raddr);

  // Internal signals for pipeline delay
  reg  [31:0] addr_delayed;  
  reg         rd_req_valid_delayed;  

  // Pipeline stage to simulate 1-cycle latency
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      addr_delayed <= 32'b0;
      rd_req_valid_delayed <= 1'b0;
    end else begin
      addr_delayed <= addr;
      rd_req_valid_delayed <= rd_req_valid;
    end
  end

  // Data output logic
  always @(*) begin
    if (rd_req_valid_delayed) begin
      data_out = pmem_read(addr_delayed);  
      rd_res_valid = 1'b1;
    end else begin
      data_out = 32'b0;  
      rd_res_valid = 1'b0;
    end
  end

endmodule