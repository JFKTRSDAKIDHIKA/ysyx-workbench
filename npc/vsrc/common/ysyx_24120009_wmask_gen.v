`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_wmask_gen (
  input  [2:0]  control,   
  input  [`ysyx_24120009_DATA_WIDTH-1:0] dmem_addr,     
  input  [`ysyx_24120009_DATA_WIDTH-1:0] dmem_wdata_raw,  
  output  [`ysyx_24120009_DATA_WIDTH-1:0] dmem_wdata,   
  output [7:0] wmask       
);

  wire [1:0] shift_amount = dmem_addr[1:0];
  wire [7:0] base_mask;
  wire [7:0] shifted_mask;

  ysyx_24120009_MuxKey #(
    .NR_KEY(3),         
    .KEY_LEN(3),        
    .DATA_LEN(8)       
  ) mem_mux_write (
    .out(base_mask),
    .key(control), 
    .lut({              
      3'b010, 8'b0000_1111,    // SW                      
      3'b001, 8'b0000_0011,    // SH
      3'b000, 8'b0000_0001     // SB
    })
  );

  assign shifted_mask = base_mask << (shift_amount * 1);
  assign wmask = shifted_mask & 8'hFF;
  // Addressing is in bytes, so multiply by 8
  assign dmem_wdata = dmem_wdata_raw << (shift_amount * 8);

endmodule
