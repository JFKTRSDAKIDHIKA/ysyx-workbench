module spi_top_apb #(
  parameter flash_addr_start = 32'h30000000,
  parameter flash_addr_end   = 32'h3fffffff,
  parameter spi_master_base  = 32'h10001000,
  parameter spi_master_end   = 32'h10001fff,
  parameter spi_ss_num       = 8
) (
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  output                  spi_sck,
  output [spi_ss_num-1:0] spi_ss,
  output                  spi_mosi,
  input                   spi_miso,
  output                  spi_irq_out
);

// Internal signals declaration
wire [4:0] wb_adr_i;
wire [31:0] wb_dat_i;
wire [31:0] wb_dat_o;
wire [3:0]  wb_sel_i;
wire wb_we_i;
wire wb_stb_i;
wire wb_cyc_i;
wire wb_ack_o;
wire wb_err_o;
wire wb_int_o;

// XIP signals
reg [4:0] flash_wb_adr_i;
reg [31:0] flash_wb_dat_i;
reg [3:0]  flash_wb_sel_i;
reg flash_wb_we_i;
reg flash_wb_stb_i;
reg flash_wb_cyc_i;
reg flash_wb_ack_o;

// State machine state definition
localparam IDLE = 4'b0000,
           SEND_CMD = 4'b0001,
           SET_DIVIDER = 4'b0010,
           SET_SS = 4'b0011,
           GO_BUSY = 4'b0100,
           WAIT_COMPLETE = 4'b0101,
           CLEAR_SS = 4'b1101,
           READ_DATA = 4'b1110,
           DONE = 4'b1111;

// Internal signals for state machine
reg [3:0] state;
wire [31:0] flash_cmd;

// Signal in_paddr ranges from 0x3000_0000 to 0x3fff_ffff.
assign flash_cmd = {8'h03, in_paddr[23:0]};

// MUX to select between normal APB access and XIP access
wire is_flash_access = (in_paddr >= flash_addr_start) && (in_paddr <= flash_addr_end);
wire is_spi_master_access = (in_paddr >= spi_master_base) && (in_paddr <= spi_master_end);

assign wb_adr_i = is_flash_access ? flash_wb_adr_i : in_paddr[4:0];
assign wb_dat_i = is_flash_access ? flash_wb_dat_i : in_pwdata;
assign wb_sel_i = is_flash_access ? flash_wb_sel_i : in_pstrb;
assign wb_we_i = is_flash_access ? flash_wb_we_i : in_pwrite;
assign wb_stb_i = is_flash_access ? flash_wb_stb_i : in_psel;
assign wb_cyc_i = is_flash_access ? flash_wb_cyc_i : in_penable;

assign in_pready = is_flash_access? flash_wb_ack_o : wb_ack_o;
assign in_prdata = wb_dat_o;
assign in_pslverr = wb_err_o;
/*
always @(*) begin
  $write("in_paddr: %b\n", in_paddr);
end
*/
always @(posedge clock or posedge reset) begin
  if (reset) begin
    state <= IDLE;
    flash_wb_adr_i <= 5'b0;
    flash_wb_dat_i <= 32'b0;
    flash_wb_sel_i <= 4'b0;
    flash_wb_we_i <= 1'b0;
    flash_wb_stb_i <= 1'b0;
    flash_wb_cyc_i <= 1'b0;
    flash_wb_ack_o <= 1'b0;
  end else begin
    case (state)
      IDLE: begin 
        if (is_flash_access && in_psel && in_penable) begin
          state <= SEND_CMD;
          // $write("addr: %b\n", in_paddr);
          flash_wb_ack_o <= 1'b0;
        end else if (is_spi_master_access && in_psel && in_penable) begin
          state <= DONE; // Directly pass through for SPI master access
          flash_wb_ack_o <= 1'b0;
        end else 
          state <= state;
      end
      SEND_CMD: begin
        // $write("flash_cmd: %b\n", flash_cmd);
        // Transaction not done
        flash_wb_ack_o <= 1'b0;
        // Specify write register TX1.
        flash_wb_adr_i <= 5'h04;
        // Write data to register TX1.
        flash_wb_dat_i <= flash_cmd;
        // Byte enable signal.
        flash_wb_sel_i <= 4'b1111;
        // Enable write.
        flash_wb_we_i <= 1'b1;
        // Start transaction
        flash_wb_stb_i <= 1'b1;
        flash_wb_cyc_i <= 1'b1;
        // Debug output
        //$write("SEND_CMD\n");
        // Wait for acknowledge
        if (wb_ack_o) begin
          flash_wb_stb_i <= 1'b0;
          flash_wb_cyc_i <= 1'b0;
          state <= SET_DIVIDER;
        end
      end
      SET_DIVIDER: begin
        // Transaction not done
        flash_wb_ack_o <= 1'b0;
        // Specify write register DIVIDER.
        flash_wb_adr_i <= 5'h14;
        // Write data to register DIVIDER.
        flash_wb_dat_i <= 32'h10;
        // Byte enable signal.
        flash_wb_sel_i <= 4'b1111;
        // Enable write.
        flash_wb_we_i <= 1'b1;
        // Continue transaction
        flash_wb_stb_i <= 1'b1;
        flash_wb_cyc_i <= 1'b1;
        // Debug output
        //$write("SET_DIVIDER\n");
        // Wait for acknowledge
        if (wb_ack_o) begin
          flash_wb_stb_i <= 1'b0;
          flash_wb_cyc_i <= 1'b0;
          state <= SET_SS;
        end
      end
      SET_SS: begin
        // Transaction not done
        flash_wb_ack_o <= 1'b0;
        // Specify write register SS.
        flash_wb_adr_i <= 5'h18;
        // Write data to register SS.
        flash_wb_dat_i <= {27'b0, 1'b1};
        // Byte enable signal.
        flash_wb_sel_i <= 4'b1111;
        // Enable write.
        flash_wb_we_i <= 1'b1;
        // Continue transaction
        flash_wb_stb_i <= 1'b1;
        flash_wb_cyc_i <= 1'b1;
        // Debug output
        // $write("SET_SS\n");
        // Wait for acknowledge
        if (wb_ack_o) begin
          flash_wb_stb_i <= 1'b0;
          flash_wb_cyc_i <= 1'b0;
          state <= GO_BUSY;
        end
      end
      GO_BUSY: begin
        // Transaction not done
        flash_wb_ack_o <= 1'b0;
        // Set GO_BSY bit in CTRL register
        flash_wb_adr_i <= 5'h10;
        flash_wb_dat_i <= {23'b0, 1'b1, 1'b0, 7'b1000000}; // Set GO_BSY and CHAR_LEN
        flash_wb_sel_i <= 4'b1111;
        flash_wb_we_i <= 1'b1;
        // Continue transaction
        flash_wb_stb_i <= 1'b1;
        flash_wb_cyc_i <= 1'b1;
        // Debug output
        // $write("GO_BUSY\n");
        // Wait for acknowledge
        if (wb_ack_o) begin
          flash_wb_stb_i <= 1'b0;
          flash_wb_cyc_i <= 1'b0;
          state <= WAIT_COMPLETE;
        end
      end
      WAIT_COMPLETE: begin
        // Transaction not done
        flash_wb_ack_o <= 1'b0;
        // Check if transaction is complete
        flash_wb_adr_i <= 5'h10;
        flash_wb_sel_i <= 4'b0000;
        flash_wb_we_i <= 1'b0;
        flash_wb_stb_i <= 1'b1;
        flash_wb_cyc_i <= 1'b1;
        // Debug output
        // $write("WAIT_COMPLETE\n");
        //$write("wb_ack_o: %b\n", wb_ack_o);
        // $write("wb_dat_o[8]: %b\n", wb_dat_o[8]);
        // Wait for acknowledge
        if (!(wb_dat_o[8])) begin
          flash_wb_stb_i <= 1'b0;
          flash_wb_cyc_i <= 1'b0;
          state <= CLEAR_SS;
        end
      end
      CLEAR_SS: begin
        // Transaction not done
        flash_wb_ack_o <= 1'b0;
        // Specify write register SS.
        flash_wb_adr_i <= 5'h18;
        // Write data to register SS.
        flash_wb_dat_i <= {27'b0, 1'b0};
        // Byte enable signal.
        flash_wb_sel_i <= 4'b1111;
        // Enable write.
        flash_wb_we_i <= 1'b1;
        // Continue transaction
        flash_wb_stb_i <= 1'b1;
        flash_wb_cyc_i <= 1'b1;
        // Debug output
        // $write("CLEAR_SS\n");
        // Wait for acknowledge
        if (wb_ack_o) begin
          flash_wb_stb_i <= 1'b0;
          flash_wb_cyc_i <= 1'b0;
          state <= READ_DATA;
        end
      end
      READ_DATA: begin
        // Transaction not done
        flash_wb_ack_o <= 1'b0;
        // Read data from RX0 register
        flash_wb_adr_i <= 5'h00;
        flash_wb_sel_i <= 4'b0000;
        flash_wb_we_i <= 1'b0;
        flash_wb_stb_i <= 1'b1;
        flash_wb_cyc_i <= 1'b1;
        // Debug output
        //$write("READ_DATA\n");
        // Wait for acknowledge
        if (wb_ack_o) begin
          flash_wb_stb_i <= 1'b0;
          flash_wb_cyc_i <= 1'b0;
          state <= DONE;
        end
      end
      DONE: begin
        // Transaction done
        flash_wb_ack_o <= 1'b1;
        flash_wb_stb_i <= 1'b0;
        flash_wb_cyc_i <= 1'b0;
        // Make sure thet the same transaction does not make two request.
        if (!in_penable && !in_psel) begin
          state <= IDLE;
          // Why?????
          flash_wb_adr_i <= 5'b0;
          flash_wb_dat_i <= 32'b0;
          flash_wb_sel_i <= 4'b0;
          flash_wb_we_i <= 1'b0;
          flash_wb_stb_i <= 1'b0;
          flash_wb_cyc_i <= 1'b0;
          flash_wb_ack_o <= 1'b0;
        end
        else
          state <= state;
        end
    endcase
  end
end

spi_top u0_spi_top (
  // Clock & Reset Signals
  .wb_clk_i(clock),
  .wb_rst_i(reset),
  // Addressing & Data Signals
  .wb_adr_i(wb_adr_i), // Used to specify memory-mapped registers or memory locations.
  .wb_dat_i(wb_dat_i),  // Data bus carrying data from master to slave during write operations.
  .wb_dat_o(wb_dat_o),  // Data bus carrying data from slave to master during read operations.
  .wb_sel_i(wb_sel_i),   // Byte enable signal (often 4 bits for 32-bit buses) to specify which byte lanes are active in a transfer.
  // Control Signals
  .wb_we_i (wb_we_i),  // Write enable. 1 = write operation, 0 = read operation.
  .wb_stb_i(wb_stb_i),    // Strobe signal. Asserted when the master is sending a valid request.
  .wb_cyc_i(wb_cyc_i), // Cycle signal. Indicates an active transaction cycle on the bus.
  // Handshaking Signals
  .wb_ack_o(wb_ack_o),  // Acknowledge signal from slave to master, indicating successful transaction completion.
  .wb_err_o(wb_err_o), // Error signal from slave to master, indicating an invalid address or failed transaction.
  .wb_int_o(wb_int_o),

  .ss_pad_o(spi_ss),
  .sclk_pad_o(spi_sck),
  .mosi_pad_o(spi_mosi),
  .miso_pad_i(spi_miso)
);

endmodule
