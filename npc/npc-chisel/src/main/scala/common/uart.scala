package common

import chisel3._
import chisel3.util.HasBlackBoxInline

class UartRaw extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clk           = Input(Clock())                     
    val rst           = Input(Bool())   

    // Write Address Channel
    val awvalid = Input(Bool())        
    val awready = Output(Bool())         
    val awaddr = Input(UInt(32.W))     

    // Write Data Channel
    val wvalid = Input(Bool())       
    val wready = Output(Bool())        
    val wdata = Input(UInt(32.W))    
    val wstrb = Input(UInt(4.W))     

    // Write Response Channel
    val bvalid = Output(Bool())        
    val bready = Input(Bool())      
    val bresp = Output(UInt(2.W))   

    // Read Address Channel
    val arvalid = Input(Bool())      
    val arready = Output(Bool())        
    val araddr = Input(UInt(32.W))     

    // Read Data Channel
    val rvalid = Output(Bool())        
    val rready = Input(Bool())       
    val rdata = Output(UInt(32.W))      
    val rresp = Output(UInt(2.W))    
  })  

setInline("UartRaw.v",
    s"""
       |module UartRaw (
       |    input  wire        clk,
       |    input  wire        rst,
       |    // Write Address Channel
       |    input  wire [31:0] awaddr,
       |    input  wire        awvalid,
       |    output wire        awready,
       |    // Write Data Channel
       |    input  wire [31:0] wdata,
       |    input  wire [3:0]  wstrb,
       |    input  wire        wvalid,
       |    output wire        wready,
       |    // Write Response Channel
       |    output reg [1:0]   bresp,
       |    output reg         bvalid,
       |    input  wire        bready,
       |    // Read Address Channel
       |    input  wire [31:0] araddr,      
       |    input  wire        arvalid,     
       |    output reg         arready,    
       |    // Read Data Channel
       |    output reg [31:0]  rdata,      
       |    output reg [1:0]   rresp,      
       |    output reg         rvalid,     
       |    input  wire        rready      
       |);
       |
       |    localparam UART_BASE_ADDR = 32'hA00003F8;
       |    localparam UART_ADDR_LEN  = 8;
       |
       |    assign awready = 1'b1;
       |    assign wready  = 1'b1;
       |
       |    always @(*) begin
       |        // 寄存器更新逻辑
       |        if (awaddr >= UART_BASE_ADDR && awaddr < (UART_BASE_ADDR + UART_ADDR_LEN)) begin
       |           if (wvalid && wready) begin
       |              write("%c", wdata[7:0]); 
       |              bvalid = 1'b1;
       |           end
       |        end
       |    end 
       |
       |endmodule
       |""".stripMargin)
}

class Uart extends Module {
  val io = IO(new Bundle {
    val clk  = Input(Clock())
    val rst  = Input(Bool())
    val axi  = Flipped(new AXI4LiteIO) 
  })

  // Set default output values
  AXI4LiteFlippedDefaults(io.axi)

  val uartRaw = Module(new UartRaw)

  uartRaw.io.clk := io.clk
  uartRaw.io.rst := io.rst

  uartRaw.io.awvalid := io.axi.aw.valid
  io.axi.aw.ready := uartRaw.io.awready
  uartRaw.io.awaddr := io.axi.aw.addr

  uartRaw.io.wvalid := io.axi.w.valid
  io.axi.w.ready := uartRaw.io.wready
  uartRaw.io.wdata := io.axi.w.data
  uartRaw.io.wstrb := io.axi.w.strb

  io.axi.b.valid := uartRaw.io.bvalid
  uartRaw.io.bready := io.axi.b.ready
  io.axi.b.resp := uartRaw.io.bresp

  uartRaw.io.arvalid := io.axi.ar.valid
  io.axi.ar.ready := uartRaw.io.arready
  uartRaw.io.araddr := io.axi.ar.addr

  io.axi.r.valid := uartRaw.io.rvalid
  uartRaw.io.rready := io.axi.r.ready
  io.axi.r.data := uartRaw.io.rdata
  io.axi.r.resp := uartRaw.io.rresp
}