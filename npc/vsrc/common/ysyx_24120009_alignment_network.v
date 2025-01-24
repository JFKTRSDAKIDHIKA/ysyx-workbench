`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_alignment_network (
  input  [`ysyx_24120009_DATA_WIDTH-1:0] data_in,  
  input  [`ysyx_24120009_DATA_WIDTH-1:0] dmem_addr,     
  input  [2:0]  control,       
  output [`ysyx_24120009_DATA_WIDTH-1:0] data_out       
);

  // shift logic
  wire [1:0] shift_amount = dmem_addr[1:0];
  wire [`ysyx_24120009_DATA_WIDTH-1:0] shifted_data = data_in >> (shift_amount * 8);

  // signed/unsigned extent signal
  wire [`ysyx_24120009_DATA_WIDTH-1:0] zero_ext_byte;   
  wire [`ysyx_24120009_DATA_WIDTH-1:0] zero_ext_half;
  wire [`ysyx_24120009_DATA_WIDTH-1:0] sign_ext_byte;
  wire [`ysyx_24120009_DATA_WIDTH-1:0] sign_ext_half;

  // signed/unsigned extent logic
  assign zero_ext_byte = {24'b0, shifted_data[7:0]};
  assign zero_ext_half = {16'b0, shifted_data[15:0]};
  assign sign_ext_byte = {{24{shifted_data[7]}}, shifted_data[7:0]};
  assign sign_ext_half = {{16{shifted_data[15]}}, shifted_data[15:0]};

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
