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

// 参数定义
localparam ROW_WIDTH = 13;
localparam COL_WIDTH = 9;
localparam BANK_COUNT = 4;

// 内存定义
reg [15:0] mem [0:BANK_COUNT-1][0:(1<<ROW_WIDTH)-1][0:(1<<COL_WIDTH)-1]; // 4 Banks × 8192 Rows × 512 Cols × 16 bits

// Bank 状态
reg        active [0:BANK_COUNT-1];        // Bank 是否激活
reg [ROW_WIDTH-1:0] active_row [0:BANK_COUNT-1]; // 每 Bank 的激活行

// Mode 寄存器
reg [2:0]  burst_length_code;              // Burst Length 编码
reg [2:0]  cas_latency_code;               // CAS Latency 编码
wire [3:0] burst_length = (burst_length_code == 3'd0) ? 4'd1 :
                          (burst_length_code == 3'd1) ? 4'd2 :
                          (burst_length_code == 3'd2) ? 4'd4 :
                          (burst_length_code == 3'd3) ? 4'd8 : 4'd1;
wire [2:0] cas_latency = cas_latency_code;

// 命令解码
wire is_inhibit      = cs;
wire is_nop          = ~cs &  ras &  cas &  we;
wire is_active       = ~cs & ~ras &  cas &  we;
wire is_read         = ~cs &  ras & ~cas &  we;
wire is_write        = ~cs &  ras & ~cas & ~we;
wire is_precharge    = ~cs & ~ras &  cas & ~we;
wire is_auto_refresh = ~cs & ~ras & ~cas &  we;
wire is_load_mode    = ~cs & ~ras & ~cas & ~we;

// DQM 延迟 (READ 操作中 DQM 有 2 周期延迟)
reg [1:0] dqm_delay [0:1];
always @(posedge clk) begin
    dqm_delay[0] <= dqm;
    dqm_delay[1] <= dqm_delay[0];
end

// DQ 输出控制
reg [15:0] dq_out;        // 输出数据
reg dq_en;         // 输出使能
//reg [15:0] dq_delayed;
assign dq = (dq_en == 1'b1)? dq_out : 16'bz;
//assign dq = dq_out;
/*always @(posedge clk) begin
    dq_out <= dq_delayed;
end*/

// 状态机定义
localparam IDLE      = 3'b000,  // 空闲
           WAIT_READ = 3'b001,  // 等待读
           READING   = 3'b010,  // 读取中
           WRITING   = 3'b011;  // 写入中

reg [2:0] state [0:BANK_COUNT-1];         // 状态
reg [3:0] delay_counter [0:BANK_COUNT-1]; // 读延迟计数器
reg [3:0] burst_counter [0:BANK_COUNT-1]; // 突发计数器
reg [COL_WIDTH-1:0] current_col [0:BANK_COUNT-1]; // 当前列地址

// 初始化
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
        ////$write("state: %d\n", state[0]);
        if (is_load_mode) begin
            burst_length_code <= a[2:0];
            cas_latency_code  <= a[6:4];
        end
        // The ACTIVE command is used to activate a row in a particular bank for a subsequent access
        else if (is_active) begin
            ////$write("ACTIVE command issued!\n");
            for (integer i = 0; i < BANK_COUNT; i++) begin
                if (i != ba) begin
                    active[i] <= 0;
                end
            end
            // Select the bank
            active[ba]        <= 1;
            // Select the row
            active_row[ba]    <= a[12:0];
            // ??
            dq_en <= 1'b0;
        end
        // The PRECHARGE command is used to deactivate the open row in a particular bank or the open row in all banks. 
        else if (is_precharge) begin
            if (a[10]) begin  // A10=1, close all Banks
                active[0] <= 0;
                active[1] <= 0;
                active[2] <= 0;
                active[3] <= 0;
                active_row[0] <= 13'b0;
                active_row[1] <= 13'b0;
                active_row[2] <= 13'b0;
                active_row[3] <= 13'b0;
            end else begin    // A10=0, close a particular bank
                active[0] <= 0;
                active[1] <= 0;
                active[2] <= 0;
                active[3] <= 0;
                active_row[0] <= 13'b0;
                active_row[1] <= 13'b0;
                active_row[2] <= 13'b0;
                active_row[3] <= 13'b0;
            end
        end
        else if (is_read && active[ba]) begin
            ////$write("cas_latency: %d\n", cas_latency);
            ////$write("\nCycle 0:The READ command issued!\n");
            state[ba]         <= WAIT_READ;
            // Reduce latency by 1 to synchronize with SDRAM controller timing
            delay_counter[ba] <= cas_latency - 1;
            current_col[ba]   <= a[8:0];
            burst_counter[ba] <= burst_length - 1;
        end
        // The WRITE command is used to initiate a burst write access to an active row.
        else if (is_write && active[ba]) begin
            ////$write("The WRITE command issued!\n");
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
                    // 由命令处理切换状态
                end
                WAIT_READ: begin
                    ////$write("\ncycle++: WAIT_READY\n");
                    ////$write("delay_counter: %d\n", delay_counter[i]);
                    if (delay_counter[i] > 0) begin
                        delay_counter[i] <= delay_counter[i] - 1;
                    end
                    if (delay_counter[i] == 1) begin
                        ////$strobe("dq: %h\n", dq);
                        state[i] <= READING;
                        // During WAIT_READ, the first 16-bit data is read; in the next cycle (READING), 
                        // the second 16-bit data is fetched to support burst transfer.                        
                        current_col[i]   <= current_col[i] + 1;
                        if (burst_length == 1)
                            state[i] <= IDLE;
                    end
                end
                READING: begin
                    ////$write("\nCycle++ READING STATE\n");
                    ////$strobe("dq: %h\n", dq);
                    if (burst_counter[i] > 0) begin
                        burst_counter[i] <= burst_counter[i] - 1;
                        current_col[i]   <= current_col[i] + 1;
                    end else begin
                        state[i] <= IDLE;
                        //$write("Finish read burst transfer\n");
                    end
                end
                WRITING: begin
                    if (burst_counter[i] > 0) begin
                        burst_counter[i] <= burst_counter[i] - 1;
                        current_col[i]   <= current_col[i] + 1;
                        ////$write("In writing state, burst_counter: %d, current_col: %d\n", burst_counter[i] - 1, current_col[i] + 1);
                    end else begin
                        state[i] <= IDLE;
                        ////$write("Finish burst transfer\n");
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
            // 写操作
            if (is_write && active[i] && state[i] == IDLE) begin
                if (~dqm[0]) begin
                    // Use signal 'ba' as bank addr to avoid overlapping.
                    // a[8:0] 作为col的地址不能改掉
                    mem[i][active_row[i]][a[8:0]][7:0]  <= dq[7:0];
                    //$write("IDLE state,i: %d LOW: write %h to addr %h | ba: %d | active_row[i]: %b\n", i, dq[7:0], a[8:0], ba, active_row[i]);
                end
                if (~dqm[1]) begin
                    // Use signal 'ba' as bank addr to avoid overlapping.
                    mem[i][active_row[i]][a[8:0]][15:8] <= dq[15:8];
                    //$write("IDLE state,i: %d HIGH: write %h to addr %h | ba: %d | active_row[i]: %b\n", i, dq[15:8], a[8:0], ba, active_row[i]);
                end
            end
            else if (state[i] == WRITING && burst_counter[i] > 0 && active[i]) begin
                ////$write("enter writing state\n");
                if (~dqm[0]) begin
                    // Use signal 'ba' as bank addr to avoid overlapping.
                    mem[ba][active_row[i]][current_col[i] + 1][7:0]  <= dq[7:0];
                    //$write("Writing state,i: %d LOW: write %h to addr %h | ba: %d | active_row[i]: %b\n", i, dq[7:0], current_col[i] + 1, ba, active_row[i]);
                end
                if (~dqm[1]) begin
                    // Use signal 'ba' as bank addr to avoid overlapping.
                    mem[ba][active_row[i]][current_col[i] + 1][15:8] <= dq[15:8];
                    //$write("Writing state,i: %d HIGH: write %h to addr %h | ba: %d | active_row[i]: %b\n", i, dq[15:8], current_col[i] + 1, ba, active_row[i]);
                end
            end

            // 读操作
            if (state[i] == WAIT_READ && delay_counter[i] == 1 && active[i]) begin
                //$write("READ data when state is WAIT_READ\ncurrent_col[i]: %d\nactive[1]: %b\n", current_col[i], active[1]);
                //$write("Read data: %h from bank: %d\n", mem[i][active_row[i]][current_col[i]], i);
                //$strobe("dq_enable: %b\n", dq_en);
                dq_out    <= mem[i][active_row[i]][current_col[i]];
                dq_en     <= 1'b1;
                if (burst_length == 1)
                    ;
                    //dq_en <= 1'b0;
            end
            else if (state[i] == READING && burst_counter[i] > 0 && active[i]) begin
                //$write("READ data when state is READING\ncurrent_col[i]: %d\nactive[1]: %b\n", current_col[i], active[1]);
                //$write("Read data: %h from bank: %d\n", mem[i][active_row[i]][current_col[i]], i);
                //$strobe("dq_enable: %b\n", dq_en);
                dq_out    <= mem[i][active_row[i]][current_col[i]];
                dq_en     <= 1'b1;
            end
            else if (state[i] == IDLE) begin
                //dq_en <= 1'b0;
                ;
            end
        end
    end
end

endmodule