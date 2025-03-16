package common

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline

class RegisterFile extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clk      = Input(Clock())             
    val rs1_addr = Input(UInt(5.W))        
    val rs2_addr = Input(UInt(5.W))         
    val rd_addr  = Input(UInt(5.W))       
    val rd_data  = Input(UInt(32.W))       
    val wen      = Input(Bool())            
    val rs1_data = Output(UInt(32.W))       
    val rs2_data = Output(UInt(32.W))       
  })

  setInline("RegisterFile.v",
    s"""
      |module RegisterFile #(
      |    parameter ADDR_WIDTH = 5,
      |    parameter DATA_WIDTH = 32
      |)(
      |    input clk,
      |    input [DATA_WIDTH-1:0] rd_data,
      |    input [ADDR_WIDTH-1:0] rd_addr,
      |    input wen,
      |    input [ADDR_WIDTH-1:0] rs1_addr,
      |    input [ADDR_WIDTH-1:0] rs2_addr,
      |    output [DATA_WIDTH-1:0] rs1_data,
      |    output [DATA_WIDTH-1:0] rs2_data
      |);
      |
      |    // DPI-C function to get the register values
      |    import "DPI-C" function void get_register_values(input logic [31:0] rf[31:0]);
      |
      |    // initialize the register file 
      |    initial begin
      |        integer i;
      |        for (i = 0; i < 2**ADDR_WIDTH; i = i + 1) begin
      |            rf[i] = {DATA_WIDTH{1'b0}};
      |        end
      |    end
      |
      |    // signal declaration
      |    reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
      |
      |    // procedural block
      |    always @(posedge clk) begin
      |        if (wen && rd_addr != 0) begin
      |            rf[rd_addr] <= rd_data;
      |        end
      |    end
      |
      |    always @(*) begin
      |        get_register_values(rf);
      |    end
      |
      |    // signal assignments
      |    assign rs1_data = rf[rs1_addr];
      |    assign rs2_data = rf[rs2_addr];
      |
      |endmodule
    """.stripMargin)
}