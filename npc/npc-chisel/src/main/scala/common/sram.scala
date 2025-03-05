package common

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline

class SRAM(delayCycles: Int = 1, dataWidth: Int = 32) extends BlackBox(Map(
  "DELAY_CYCLES" -> delayCycles,
  "DATA_WIDTH"   -> dataWidth
)) with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clk           = Input(Clock())                     
    val rst           = Input(Bool())                     

    // sRead channel
    val rd_req_valid  = Input(Bool())                      
    val addr          = Input(UInt(dataWidth.W))          
    val data_out      = Output(UInt(dataWidth.W))      
    val rd_res_valid  = Output(Bool())                    

    // sWrite channel
    val wt_req_valid  = Input(Bool())                      
    val waddr         = Input(UInt(dataWidth.W))           
    val wdata         = Input(UInt(dataWidth.W))           
    val wmask         = Input(UInt(8.W))                 
    val wt_res_valid  = Output(Bool())                     
  })

  setInline("SRAM.v",
    s"""
      |module SRAM #(
      |  parameter DELAY_CYCLES = $delayCycles,  
      |  parameter DATA_WIDTH   = $dataWidth     
      |)(
      |  // Clock and reset signals
      |  input                                                       clk,       
      |  input                                                       rst,     
      |
      |  // sRead memory signals
      |  input                                                       rd_req_valid,      // Indicates a valid sRead request
      |  input        [DATA_WIDTH-1:0]                               addr,              // Address for the sRead operation (32-bit)
      |  output reg   [DATA_WIDTH-1:0]                               data_out,          // Data output from memory (32-bit)
      |  output wire                                                 rd_res_valid,      // Indicates a valid sRead response
      |
      |  // sWrite memory signals
      |  input                                                       wt_req_valid,      // Indicates a valid sWrite request
      |  input        [DATA_WIDTH-1:0]                               waddr,             // Address for the sWrite operation (32-bit)
      |  input        [DATA_WIDTH-1:0]                               wdata,             // Data to be written to memory (32-bit)
      |  input wire   [7:0]                                          wmask,             // sWrite mask to specify which bytes to update
      |  output wire                                                 wt_res_valid       // Indicates a valid sWrite response
      |);
      |
      |  // Import DPI-C function for memory sRead/sWrite
      |  import "DPI-C" function int pmem_read (input int raddr);
      |  import "DPI-C" function void pmem_write (input int waddr, input int wdata, input byte wmask);
      |
      |  // Internal signals for pipeline delay
      |  reg  [DATA_WIDTH-1:0] addr_delayed;  
      |  reg                  rd_req_valid_delayed;  
      |  reg  [DATA_WIDTH-1:0] waddr_delayed; 
      |  reg  [DATA_WIDTH-1:0] wdata_delayed; 
      |  reg  [7:0]            wmask_delayed; 
      |  reg                  wt_req_valid_delayed;
      |
      |  // Pipeline stage to simulate N-cycle latency
      |  generate
      |    if (DELAY_CYCLES == 1) begin
      |      // Single cycle delay
      |      always @(posedge clk or posedge rst) begin
      |        if (rst) begin
      |          addr_delayed <= {DATA_WIDTH{1'b0}};
      |          rd_req_valid_delayed <= 1'b0;
      |          waddr_delayed <= {DATA_WIDTH{1'b0}};
      |          wdata_delayed <= {DATA_WIDTH{1'b0}};
      |          wmask_delayed <= 8'b0;
      |          wt_req_valid_delayed <= 1'b0;
      |        end else begin
      |          addr_delayed <= addr;
      |          rd_req_valid_delayed <= rd_req_valid;
      |          waddr_delayed <= waddr;
      |          wdata_delayed <= wdata;
      |          wmask_delayed <= wmask;
      |          wt_req_valid_delayed <= wt_req_valid;
      |        end
      |      end
      |    end else begin
      |      // Multi-cycle delay using a register chain
      |      reg  [DATA_WIDTH-1:0] addr_pipeline [0:DELAY_CYCLES-1];  
      |      reg                  rd_req_valid_pipeline [0:DELAY_CYCLES-1];  
      |      reg  [DATA_WIDTH-1:0] waddr_pipeline [0:DELAY_CYCLES-1]; 
      |      reg  [DATA_WIDTH-1:0] wdata_pipeline [0:DELAY_CYCLES-1]; 
      |      reg  [7:0]            wmask_pipeline [0:DELAY_CYCLES-1]; 
      |      reg                  wt_req_valid_pipeline [0:DELAY_CYCLES-1];
      |
      |      always @(posedge clk or posedge rst) begin
      |        if (rst) begin
      |          for (integer i = 0; i < DELAY_CYCLES; i = i + 1) begin
      |            addr_pipeline[i] <= {DATA_WIDTH{1'b0}};
      |            rd_req_valid_pipeline[i] <= 1'b0;
      |            waddr_pipeline[i] <= {DATA_WIDTH{1'b0}};
      |            wdata_pipeline[i] <= {DATA_WIDTH{1'b0}};
      |            wmask_pipeline[i] <= 8'b0;
      |            wt_req_valid_pipeline[i] <= 1'b0;
      |          end
      |        end else begin
      |          // Shift the pipeline
      |          addr_pipeline[0] <= addr;
      |          rd_req_valid_pipeline[0] <= rd_req_valid;
      |          waddr_pipeline[0] <= waddr;
      |          wdata_pipeline[0] <= wdata;
      |          wmask_pipeline[0] <= wmask;
      |          wt_req_valid_pipeline[0] <= wt_req_valid;
      |
      |          for (integer i = 1; i < DELAY_CYCLES; i = i + 1) begin
      |            addr_pipeline[i] <= addr_pipeline[i-1];
      |            rd_req_valid_pipeline[i] <= rd_req_valid_pipeline[i-1];
      |            waddr_pipeline[i] <= waddr_pipeline[i-1];
      |            wdata_pipeline[i] <= wdata_pipeline[i-1];
      |            wmask_pipeline[i] <= wmask_pipeline[i-1];
      |            wt_req_valid_pipeline[i] <= wt_req_valid_pipeline[i-1];
      |          end
      |        end
      |      end
      |
      |      // Assign the delayed signals
      |      assign addr_delayed = addr_pipeline[DELAY_CYCLES-1];
      |      assign rd_req_valid_delayed = rd_req_valid_pipeline[DELAY_CYCLES-1];
      |      assign waddr_delayed = waddr_pipeline[DELAY_CYCLES-1];
      |      assign wdata_delayed = wdata_pipeline[DELAY_CYCLES-1];
      |      assign wmask_delayed = wmask_pipeline[DELAY_CYCLES-1];
      |      assign wt_req_valid_delayed = wt_req_valid_pipeline[DELAY_CYCLES-1];
      |    end
      |  endgenerate
      |
      |  // Memory sRead & sWrite logic
      |  always @(*) begin
      |    if (rd_req_valid_delayed) begin
      |      data_out = pmem_read (addr_delayed);  
      |      rd_res_valid = 1'b1;
      |      wt_res_valid = 1'b0;
      |    end else if (wt_req_valid_delayed) begin
      |      pmem_write (waddr_delayed, wdata_delayed, wmask_delayed);
      |      data_out = wdata_delayed;  
      |      rd_res_valid = 1'b0;
      |      wt_res_valid = 1'b1;
      |    end else begin
      |      data_out = {DATA_WIDTH{1'b0}};  
      |      rd_res_valid = 1'b0;
      |      wt_res_valid = 1'b0;
      |    end
      |  end
      |
      |endmodule
    """.stripMargin)
}

class SramAxi4LiteWrapper(addrWidth: Int = 32, dataWidth: Int = 32) extends Module {
  val io = IO(new Bundle {
    // Clock and reset signals
    val clk = Input(Clock())
    val rst = Input(Bool())

    // AXI4-Lite interface
    val axi = Flipped(new AXI4LiteIO)
  })

  // Default assignments for AXI4-Lite signals
  AXI4LiteFlippedDefaults(io.axi)

  // Internal state machine states
  val sIdle :: sWrite :: sRead :: Nil = Enum(3)
  val state = RegInit(sIdle)

  // Internal registers for AXI4-Lite to SRAM conversion
  val addr_reg  = Reg(UInt(addrWidth.W))
  val wdata_reg = Reg(UInt(dataWidth.W))
  val wstrb_reg = Reg(UInt((dataWidth / 4).W))

  // SRAM instance
  val sram = Module(new SRAM(delayCycles = 1, dataWidth = dataWidth))
  sram.io.clk := io.clk
  sram.io.rst := io.rst

  // Internal signals for SRAM control
  val rd_req_valid = RegInit(false.B)
  val wt_req_valid = RegInit(false.B)

  // Connect SRAM outputs
  val sram_data_out      = sram.io.data_out
  val sram_rd_res_valid  = sram.io.rd_res_valid
  val sram_wt_res_valid  = sram.io.wt_res_valid

  // State machine logic
  when(io.rst) {
    state := sIdle
    io.axi.aw.ready := false.B
    io.axi.w.ready  := false.B
    io.axi.b.valid  := false.B
    io.axi.b.resp   := 0.U
    io.axi.ar.ready := false.B
    io.axi.r.valid  := false.B
    io.axi.r.resp   := 0.U
    rd_req_valid := false.B
    wt_req_valid := false.B
  }.otherwise {
    switch(state) {
      is(sIdle) {
          // Set ready signals
          io.axi.aw.ready := true.B
          io.axi.w.ready  := true.B
          io.axi.ar.ready := true.B
          // Clear some signals
          io.axi.b.valid := false.B
          io.axi.b.resp  := 0.U
          io.axi.r.valid := false.B
          io.axi.r.resp  := 0.U
        when(io.axi.aw.valid && io.axi.w.valid) {
          // Sent Write request
          addr_reg  := io.axi.aw.addr
          wdata_reg := io.axi.w.data
          wstrb_reg := io.axi.w.strb
          wt_req_valid := true.B
          state     := sWrite
        }.elsewhen(io.axi.ar.valid) {
          // Sent Read request
          rd_req_valid := true.B
          addr_reg := io.axi.ar.addr
          state    := sRead
        }
      }

      is(sWrite) {
        // Clear ready signals
        io.axi.aw.ready := false.B
        io.axi.w.ready  := false.B
        // Clear Write request signal
        wt_req_valid := false.B
        // Wait sram response signal ready
        when(sram_wt_res_valid) {
          // Send Write response
          io.axi.b.valid := true.B
          io.axi.b.resp  := 0.U // OKAY response
          when(io.axi.b.ready) {
            state := sIdle
          }
        }
      }

      is(sRead) {
        // Clear ready signals
        io.axi.aw.ready := false.B
        io.axi.w.ready  := false.B
        // Clear Write request signal
        rd_req_valid := false.B
        io.axi.ar.ready := false.B
        // Wait sram response signal ready
        when(sram_rd_res_valid) {
          // Send Read response
          io.axi.r.data  := sram_data_out
          io.axi.r.valid := true.B
          io.axi.r.resp  := 0.U // OKAY response
          when(io.axi.r.ready) {
            state := sIdle
          }
        }
      }
    }
  }

  // Connect SRAM inputs
  sram.io.rd_req_valid := rd_req_valid
  sram.io.addr         := addr_reg
  sram.io.wt_req_valid := wt_req_valid
  sram.io.waddr        := addr_reg
  sram.io.wdata        := wdata_reg
  sram.io.wmask        := wstrb_reg
}