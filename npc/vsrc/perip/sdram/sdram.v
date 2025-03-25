module sdram (
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

// Memory defintion
reg [15:0] mem [0:BANK_COUNT-1][0:(1<<ROW_WIDTH)-1][0:(1<<COL_WIDTH)-1]; // 4 Banks × 8192 Rows × 512 Cols × 16 bits

// Bank states
reg        active [0:BANK_COUNT-1];        
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

// DQM 延迟 (READ 操作中 DQM 有 2 周期延迟)
/*
reg [1:0] dqm_delay [0:1];
always @(posedge clk) begin
    dqm_delay[0] <= dqm;
    dqm_delay[1] <= dqm_delay[0];
end
*/

// DQ output control
reg [15:0] dq_out;       
reg dq_en;        
assign dq = dq_en ? dq_out : 16'bz;

// State machine state definition
localparam IDLE      = 3'b000, 
           WAIT_READ = 3'b001,  
           READING   = 3'b010,  
           WRITING   = 3'b011;  

reg [2:0] state [0:BANK_COUNT-1];         
reg [3:0] delay_counter [0:BANK_COUNT-1];
reg [3:0] burst_counter [0:BANK_COUNT-1]; 
reg [COL_WIDTH-1:0] current_col [0:BANK_COUNT-1];

// Initialization
initial begin
    integer i;
    for (i = 0; i < BANK_COUNT; i = i + 1) begin
        active[i] = 0;
        state[i] = IDLE;
        delay_counter[i] = 0;
        burst_counter[i] = 0;
        current_col[i] = 0;
    end
    dq_en = 1'b0;
end

// Command processing
always @(posedge clk) begin
    if (cke) begin
        if (is_load_mode) begin
            burst_length_code <= a[2:0];
            cas_latency_code  <= a[6:4];
        end
        // The ACTIVE command is used to activate a row in a particular bank for a subsequent access
        else if (is_active) begin
            for (integer i = 0; i < BANK_COUNT; i++) begin
                if (i != ba) begin
                    active[i] <= 0;
                end
            end
            // Select the bank
            active[ba]        <= 1;
            // Select the row
            active_row[ba]    <= a[12:0];
        end
        // The PRECHARGE command is used to deactivate the open row in a particular bank or the open row in all banks. 
        else if (is_precharge) begin
            if (a[10]) begin  // A10=1, close all Banks
            for (integer i = 0;i < BANK_COUNT;i = i + 1) begin
                active[i] <= 0;
                active_row[i] <= 13'b0;
            end
            end else begin    // A10=0, close a particular bank
                active[ba] <= 0;
                active_row[ba] <= 13'b0;
            end
        end
        // The READ command
        else if (is_read) begin
            state[ba]         <= WAIT_READ;
            // Reduce latency by 1 to synchronize with SDRAM controller timing
            delay_counter[ba] <= cas_latency - 1;
            current_col[ba]   <= a[8:0];
            burst_counter[ba] <= burst_length - 1;
            // Clear the bank
            for (integer i = 0; i < BANK_COUNT; i++) begin
                if (i != ba) begin
                    active[i] <= 0;
                end
            end
            // Select the bank
            active[ba]        <= 1;
        end
        // The WRITE command is used to initiate a burst write access to an active row.
        else if (is_write && active[ba]) begin
            state[ba]         <= WRITING;
            burst_counter[ba] <= burst_length - 1;
            current_col[ba]   <= a[8:0];
        end
    end
end

// State machine
always @(posedge clk) begin
    if (!cke) begin
        integer i;
        for (i = 0; i < BANK_COUNT; i = i + 1)
            state[i] <= IDLE;
    end
    else if (cke) begin
        integer i;
        for (i = 0; i < BANK_COUNT; i = i + 1) begin
            case (state[i])
                IDLE: begin
                    // State transition is triggered by command processing.
                end
                WAIT_READ: begin
                    if (delay_counter[i] > 0) begin
                        delay_counter[i] <= delay_counter[i] - 1;
                    end
                    if (delay_counter[i] == 1) begin
                        state[i] <= READING;
                        // During WAIT_READ, the first 16-bit data is read; in the next cycle (READING), 
                        // the second 16-bit data is fetched to support burst transfer.                        
                        current_col[i]   <= current_col[i] + 1;
                        if (burst_length == 1)
                            state[i] <= IDLE;
                    end
                end
                READING: begin
                    if (burst_counter[i] > 0) begin
                        burst_counter[i] <= burst_counter[i] - 1;
                        current_col[i]   <= current_col[i] + 1;
                    end else begin
                        state[i] <= IDLE;
                        // After reading is completed, `dq_en` must be disabled to set the output to a high-impedance state.
                        dq_en <= 1'b0;
                    end
                end
                WRITING: begin
                    if (burst_counter[i] > 0) begin
                        burst_counter[i] <= burst_counter[i] - 1;
                        current_col[i]   <= current_col[i] + 1;
                    end else begin
                        state[i] <= IDLE;
                    end
                end
            endcase
        end
    end
end

// Data path
always @(posedge clk) begin
    if (!cke) begin
        dq_out <= 1'b0;
        dq_en  <= 1'b0;
    end
    else if (cke) begin
        integer i;
        for (i = 0; i < BANK_COUNT; i = i + 1) begin
            // Write operation
            if (is_write && active[i] && state[i] == IDLE) begin
                if (~dqm[0]) begin
                    // a[8:0] is used as the column address and cannot be changed because the current state is idle. 
                    // The 'current_col' has not been assigned the value of 'a' yet, so 'a' is used directly.
                    mem[i][active_row[i]][a[8:0]][7:0]  <= dq[7:0];
                end
                if (~dqm[1]) begin
                    mem[i][active_row[i]][a[8:0]][15:8] <= dq[15:8];
                end
            end
            else if (state[i] == WRITING && burst_counter[i] > 0 && active[i]) begin
                if (~dqm[0]) begin
                    // The reason for using 'current_col[i] + 1' here is the same as the reason for using 'a' above.
                    mem[i][active_row[i]][current_col[i] + 1][7:0]  <= dq[7:0];
                end
                if (~dqm[1]) begin
                    mem[i][active_row[i]][current_col[i] + 1][15:8] <= dq[15:8];
                end
            end

            // Read operation
            if (state[i] == WAIT_READ && delay_counter[i] == 1 && active[i]) begin
                dq_out    <= mem[i][active_row[i]][current_col[i]];
                dq_en     <= 1'b1;
            end
            else if (state[i] == READING && burst_counter[i] > 0 && active[i]) begin
                dq_out    <= mem[i][active_row[i]][current_col[i]];
                dq_en     <= 1'b1;
            end
        end
    end
end

endmodule