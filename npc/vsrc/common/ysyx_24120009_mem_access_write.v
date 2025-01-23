`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_mem_access_write (
  input  [2:0]  control,       
  output [7:0] wmask       
);

  ysyx_24120009_MuxKey #(
    .NR_KEY(3),         
    .KEY_LEN(3),        
    .DATA_LEN(8)       
  ) mem_mux_write (
    .out(wmask),
    .key(control), 
    .lut({              
      3'b010, 8'b0000_1111,    // SW                      
      3'b001, 8'b0000_0011,    // SH
      3'b000, 8'b0000_0001     // SB
    })
  );

endmodule
