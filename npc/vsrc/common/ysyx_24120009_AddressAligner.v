// warning: this module is unused!

`include "vsrc/include/ysyx_24120009_defs.vh"

module ysyx_24120009_AddressAligner (
    input  [`ysyx_24120009_DATA_WIDTH-1:0] dmem_addr,     
    input  [2:0]  ctrl,          
    output [`ysyx_24120009_DATA_WIDTH-1:0] aligned_addr  
);

    
    assign aligned_addr = (ctrl == 3'b010) ? (dmem_addr & ~32'h3) : // Word 对齐 (4 字节对齐)
                          (ctrl == 3'b001) ? (dmem_addr & ~32'h1) : // Halfword 对齐 (2 字节对齐)
                          dmem_addr;                               // Byte 对齐 (无对齐要求)

endmodule