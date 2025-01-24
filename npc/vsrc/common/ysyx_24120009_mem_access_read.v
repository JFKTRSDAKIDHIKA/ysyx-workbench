`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_mem_access_read (
  input  [`ysyx_24120009_DATA_WIDTH-1:0] data_in,       
  input  [2:0]  control,       
  output [`ysyx_24120009_DATA_WIDTH-1:0] data_out       
);

  wire [`ysyx_24120009_DATA_WIDTH-1:0] zero_ext_byte;   
  wire [`ysyx_24120009_DATA_WIDTH-1:0] zero_ext_half;
  wire [`ysyx_24120009_DATA_WIDTH-1:0] sign_ext_byte;
  wire [`ysyx_24120009_DATA_WIDTH-1:0] sign_ext_half;


  assign zero_ext_byte = {24'b0, data_in[7:0]};
  assign zero_ext_half = {16'b0, data_in[15:0]};
  assign sign_ext_byte = {{24{data_in[7]}}, data_in[7:0]};
  assign sign_ext_half = {{16{data_in[15]}}, data_in[15:0]};

  ysyx_24120009_MuxKey #(
    .NR_KEY(5),         
    .KEY_LEN(3),        
    .DATA_LEN(`ysyx_24120009_DATA_WIDTH)       
  ) mem_mux (
    .out(data_out),
    .key(control), 
    .lut({              
      3'b100, zero_ext_byte,    // LBU                       
      3'b101, zero_ext_half,    // LHU
      3'b010, data_in,          // LW
      3'b000, sign_ext_byte,    // LB
      3'b001, sign_ext_half     // LH                   
    })
  );

endmodule
