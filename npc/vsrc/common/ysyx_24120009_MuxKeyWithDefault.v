// 带默认值的选择器模板
module ysyx_24120009_MuxKeyWithDefault #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  ysyx_24120009_MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 1) i1 (out, key, default_out, lut);
endmodule