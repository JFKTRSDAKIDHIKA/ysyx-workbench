module sdram #(
    parameter int INSTANCE_ID = 0
)(
    input        clk,         // Clock signal
    input        cke,         // Clock enable (assumed to be always 1)
    input        cs,          // Chip select signal, active low
    input        ras,         // Row address strobe, active low
    input        cas,         // Column address strobe, active low
    input        we,          // Write enable signal, active low
    input [12:0] a,           // Address bus
    input [ 1:0] ba,          // Bank address
    input [ 1:0] dqm,         // Data mask
    inout [15:0] dq           // Data bus
);

// Memory parameter declaration
localparam ROW_WIDTH = 13;
localparam COL_WIDTH = 9;
localparam BANK_COUNT = 4;

// Use DPI-C to simulate SDRAM behavior with an external C++ model
// This approach replaces SystemVerilog's multi-dimensional array with a more flexible and scalable C++ implementation
import "DPI-C" function void write_mem(int instance_id, int bank, int row, int col, int data, int mask);
import "DPI-C" function int read_mem(int instance_id, int bank, int row, int col);

// Active bank states
reg [BANK_COUNT-1:0] active_bank;
// Active row states
reg [ROW_WIDTH-1:0] active_row [0:BANK_COUNT-1]; 

// Mode register
reg [2:0]  burst_length_code;              // Burst Length
reg [2:0]  cas_latency_code;               // CAS Latency
wire [3:0] burst_length = (burst_length_code == 3'd0) ? 4'd1 :
                          (burst_length_code == 3'd1) ? 4'd2 :
                          (burst_length_code == 3'd2) ? 4'd4 :
                          (burst_length_code == 3'd3) ? 4'd8 : 4'd1;
wire [2:0] cas_latency = cas_latency_code;

// Command decode
wire is_inhibit      = cs;
wire is_nop          = ~cs &  ras &  cas &  we;
wire is_active       = ~cs & ~ras &  cas &  we;
wire is_read         = ~cs &  ras & ~cas &  we;
wire is_write        = ~cs &  ras & ~cas & ~we;
wire is_precharge    = ~cs & ~ras &  cas & ~we;
wire is_auto_refresh = ~cs & ~ras & ~cas &  we;
wire is_load_mode    = ~cs & ~ras & ~cas & ~we;

// Write mask control
wire [15:0] masked_dq;
wire [15:0] write_mask;
assign masked_dq[7:0]  = dqm[0] ? 8'b0  : dq[7:0];
assign masked_dq[15:8] = dqm[1] ? 8'b0 : dq[15:8];
assign write_mask[7:0]  = dqm[0] ? 8'b0 : 8'hFF;
assign write_mask[15:8] = dqm[1] ? 8'b0 : 8'hFF;

// DQ output control
reg [15:0] dq_out;       
reg dq_en;        
assign dq = dq_en ? dq_out : 16'bz;

// State machine state definition
localparam IDLE      = 3'b000, 
           WAIT_READ = 3'b001,  
           READING   = 3'b010,  
           WRITING   = 3'b011;  

reg [2:0] state;         
reg [3:0] delay_counter;
reg [3:0] burst_counter; 
reg [COL_WIDTH-1:0] current_col;

// Command processing
always @(posedge clk) begin
    if (cke) begin
        if (is_load_mode) begin
            burst_length_code <= a[2:0];
            cas_latency_code  <= a[6:4];
        end
        // The ACTIVE command is used to activate a row in a particular bank for a subsequent access.
        // This row remains active for accesses until a PRECHARGE command is issued to that bank.
        else if (is_active) begin
            // Select the row in the particular bank
            active_row[ba]    <= a[12:0];
            // State remain IDLE
            state <= IDLE;
        end
        // The READ command
        else if (is_read) begin
            state <= WAIT_READ;
            // Reduce latency by 1 to synchronize with SDRAM controller timing
            delay_counter <= cas_latency - 1;
            burst_counter <= burst_length - 1;
            current_col   <= a[8:0];
            // Select the active bank
            active_bank <= ba;
        end
        // The WRITE command is used to initiate a burst write access to an active row.
        else if (is_write) begin
            state <= WRITING;
            burst_counter <= burst_length - 1;
            current_col <= a[8:0];
            // Write SDRAM through DPI-C
            // DPI-C write_mem executes immediately - uses combinational input 'a' 
            // instead of registered current_col for correct write timing
            write_mem(INSTANCE_ID, ba, active_row[ba], a[8:0], masked_dq, write_mask);
        end
    end
end

// State machine
always @(posedge clk) begin
    if (!cke) begin
        state <= IDLE;
    end
    else if (cke) begin
        case (state)
            IDLE: begin
                // This state (IDLE) is responsible for instruction dispatch.
                dq_en <= 1'b0;
            end
            WAIT_READ: begin
                if (delay_counter > 0) begin
                    delay_counter <= delay_counter - 1;
                end
                if (delay_counter == 1) begin
                    state <= READING;
                    // During WAIT_READ, the first 16-bit data is read; in the next cycle (READING), 
                    // the second 16-bit data is fetched to support burst transfer.
                    // Read the first 16 bits.
                    // Due to the two-cycle CAS latency, the bank address (BA) cannot remain constant and must be derived from the registered 'active_bank' value.
                    dq_out <= read_mem(INSTANCE_ID, active_bank, active_row[active_bank], current_col);    
                    dq_en <= 1'b1;                  
                    current_col <= current_col + 1;
                    if (burst_length == 1) begin
                        state <= IDLE;
                    end
                end
            end
            READING: begin
                if (burst_counter > 0) begin
                    burst_counter <= burst_counter - 1;
                    current_col   <= current_col + 1;
                    // Read the second 16 bits.
                    // Due to the two-cycle CAS latency, the bank address (BA) cannot remain constant and must be derived from the registered 'active_bank' value.
                    dq_out <= read_mem(INSTANCE_ID, active_bank, active_row[active_bank], current_col);     
                    dq_en <= 1'b1;      
                end else begin
                    state <= IDLE;
                    // After reading is completed, `dq_en` must be disabled to set the output to a high-impedance state.
                    dq_en <= 1'b0;
                end
            end
            WRITING: begin
                if (burst_counter > 0) begin
                    // Burst transfer
                    burst_counter <= burst_counter - 1;
                    current_col   <= current_col + 1;
                    // Write SDRAM through DPI-C
                    // DPI-C write_mem executes immediately - uses combinational input 'a' 
                    // instead of registered current_col for correct write timing
                    write_mem(INSTANCE_ID, ba, active_row[ba], current_col + 1, masked_dq, write_mask);
                end else begin
                    state <= IDLE;
                end
            end
        endcase
    end
end  

endmodule