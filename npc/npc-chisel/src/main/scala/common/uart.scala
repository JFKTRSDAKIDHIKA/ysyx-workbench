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
       |    output reg         awready,
       |    // Write Data Channel
       |    input  wire [31:0] wdata,
       |    input  wire [3:0]  wstrb,
       |    input  wire        wvalid,
       |    output reg         wready,
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
       |    reg [31:0] uart_reg;
       |
       |    typedef enum logic [1:0] {
       |        IDLE,
       |        ADDR_READY,
       |        DATA_READY,
       |        RESP_READY
       |    } state_t;
       |
       |    state_t state, next_state;
       |
       |    always @(posedge clk or negedge rst) begin
       |        if (!rst) begin
       |            state <= IDLE;
       |        end else begin
       |            state <= next_state;
       |        end
       |    end
       |
       |    always @(*) begin
       |        next_state = state;
       |        case (state)
       |            IDLE: begin
       |                if (awvalid && wvalid) begin
       |                    next_state = ADDR_READY;
       |                end
       |            end
       |            ADDR_READY: begin
       |                next_state = DATA_READY;
       |            end
       |            DATA_READY: begin
       |                if (bready) begin
       |                    next_state = RESP_READY;
       |                end
       |            end
       |            RESP_READY: begin
       |                next_state = IDLE;
       |            end
       |            default: begin
       |                next_state = IDLE;
       |            end
       |        endcase
       |    end
       |
       |    always @(*) begin
       |        awready = 1'b0;
       |        if (state == IDLE && awvalid && wvalid) begin
       |            awready = 1'b1;
       |        end
       |    end
       |
       |    always @(*) begin
       |        wready = 1'b0;
       |        if (state == ADDR_READY) begin
       |            wready = 1'b1;
       |        end
       |    end
       |
       |    always @(*) begin
       |        bvalid = 1'b0;
       |        bresp = 2'b00; // OKAY 响应
       |        if (state == DATA_READY) begin
       |            bvalid = 1'b1;
       |        end
       |    end
       |
       |    always @(posedge clk or negedge rst) begin
       |        if (!rst) begin
       |            uart_reg <= 32'b0;
       |        end else if (state == ADDR_READY && awaddr >= UART_BASE_ADDR && awaddr < (UART_BASE_ADDR + UART_ADDR_LEN)) begin
       |            if (wvalid && wready) begin
       |                uart_reg <= wdata; // 更新寄存器值
       |                write("%c", wdata[7:0]); // 输出低 8 位作为字符
       |            end
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