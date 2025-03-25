//-----------------------------------------------------------------
//                    SDRAM Controller (AXI4)
//                           V1.0
//                     Ultra-Embedded.com
//                     Copyright 2015-2019
//
//                 Email: admin@ultra-embedded.com
//
//                         License: GPL
// If you would like a version with a more permissive license for
// use in closed source commercial applications please contact me
// for details.
//-----------------------------------------------------------------
//
// This file is open source HDL; you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 2 of
// the License, or (at your option) any later version.
//
// This file is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public
// License along with this file; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA
//-----------------------------------------------------------------

//-----------------------------------------------------------------
//                          Generated File
//-----------------------------------------------------------------

module sdram_axi_core
(
    // 时钟和复位信号
    input           clk_i,                  // 时钟输入
    input           rst_i,                  // 复位输入，高电平有效

    // AXI-like 主机接口（输入）
    input  [  3:0]  inport_wr_i,             // 写使能信号，每个比特表示一个字节是否被写入（Byte Enable）
    input           inport_rd_i,             // 读使能信号，高电平表示进行 SDRAM 读操作
    input  [  7:0]  inport_len_i,            // 读/写事务的突发长度（burst length）
    input  [ 31:0]  inport_addr_i,           // 访问 SDRAM 的地址
    input  [ 31:0]  inport_write_data_i,     // 需要写入 SDRAM 的数据
    input  [ 15:0]  sdram_data_input_i,      // SDRAM 读出的数据（SDRAM -> 控制器）

    // AXI-like 主机接口（输出）
    output          inport_accept_o,         // 指示控制器是否可以接受新的读/写请求
    output          inport_ack_o,            // 事务完成确认信号
    output          inport_error_o,          // 访问错误指示信号（如非法地址访问）
    output [ 31:0]  inport_read_data_o,      // 从 SDRAM 读取的数据（控制器 -> 处理器）

    // SDRAM 控制信号（输出）
    output          sdram_clk_o,             // SDRAM 时钟输出
    output          sdram_cke_o,             // SDRAM 时钟使能（Clock Enable）
    output          sdram_cs_o,              // SDRAM 片选（Chip Select）
    output          sdram_ras_o,             // SDRAM 行地址选通信号（Row Address Strobe）
    output          sdram_cas_o,             // SDRAM 列地址选通信号（Column Address Strobe）
    output          sdram_we_o,              // SDRAM 写使能信号（Write Enable）

    // SDRAM 数据控制信号
    output [  1:0]  sdram_dqm_o,             // SDRAM 数据屏蔽（Data Mask），控制哪些字节有效
    output [ 12:0]  sdram_addr_o,            // SDRAM 地址总线（支持 8192 行）
    output [  1:0]  sdram_ba_o,              // SDRAM Bank 地址（选择不同的 Bank）

    // SDRAM 数据总线（输出）
    output [ 15:0]  sdram_data_output_o,     // SDRAM 写入的数据（控制器 -> SDRAM）
    output          sdram_data_out_en_o      // SDRAM 数据总线方向控制，高电平时表示写操作
);


//-----------------------------------------------------------------
// Key Params
//-----------------------------------------------------------------
parameter SDRAM_MHZ              = 50;
parameter SDRAM_ADDR_W           = 24;
parameter SDRAM_COL_W            = 9;
parameter SDRAM_READ_LATENCY     = 2;

//-----------------------------------------------------------------
// Defines / Local params
//-----------------------------------------------------------------
localparam SDRAM_BANK_W          = 2;
localparam SDRAM_DQM_W           = 2;
localparam SDRAM_BANKS           = 2 ** SDRAM_BANK_W;
localparam SDRAM_ROW_W           = SDRAM_ADDR_W - SDRAM_COL_W - SDRAM_BANK_W;
localparam SDRAM_REFRESH_CNT     = 2 ** SDRAM_ROW_W;
localparam SDRAM_START_DELAY     = 100000 / (1000 / SDRAM_MHZ); // 100uS
localparam SDRAM_REFRESH_CYCLES  = (64000*SDRAM_MHZ) / SDRAM_REFRESH_CNT-1;

localparam CMD_W             = 4;
localparam CMD_NOP           = 4'b0111;
localparam CMD_ACTIVE        = 4'b0011;
localparam CMD_READ          = 4'b0101;
localparam CMD_WRITE         = 4'b0100;
localparam CMD_TERMINATE     = 4'b0110;
localparam CMD_PRECHARGE     = 4'b0010;
localparam CMD_REFRESH       = 4'b0001;
localparam CMD_LOAD_MODE     = 4'b0000;

// Mode: Burst Length = 4 bytes, CAS=2
localparam MODE_REG          = {3'b000,1'b0,2'b00,3'b010,1'b0,3'b001};

// SM states
localparam STATE_W           = 4;
localparam STATE_INIT        = 4'd0;
localparam STATE_DELAY       = 4'd1;
localparam STATE_IDLE        = 4'd2;
localparam STATE_ACTIVATE    = 4'd3;
localparam STATE_READ        = 4'd4;
localparam STATE_READ_WAIT   = 4'd5;
localparam STATE_WRITE0      = 4'd6;
localparam STATE_WRITE1      = 4'd7;
localparam STATE_PRECHARGE   = 4'd8;
localparam STATE_REFRESH     = 4'd9;

localparam AUTO_PRECHARGE    = 10;
localparam ALL_BANKS         = 10;

localparam SDRAM_DATA_W      = 16;

localparam CYCLE_TIME_NS     = 1000 / SDRAM_MHZ;

// SDRAM timing
localparam SDRAM_TRCD_CYCLES = (20 + (CYCLE_TIME_NS-1)) / CYCLE_TIME_NS;
localparam SDRAM_TRP_CYCLES  = (20 + (CYCLE_TIME_NS-1)) / CYCLE_TIME_NS;
localparam SDRAM_TRFC_CYCLES = (60 + (CYCLE_TIME_NS-1)) / CYCLE_TIME_NS;

//-----------------------------------------------------------------
// External Interface
//-----------------------------------------------------------------
wire [ 31:0]  ram_addr_w       = inport_addr_i;
wire [  3:0]  ram_wr_w         = inport_wr_i;
wire          ram_rd_w         = inport_rd_i;
wire          ram_accept_w;
wire [ 31:0]  ram_write_data_w = inport_write_data_i;
wire [ 31:0]  ram_read_data_w;
wire          ram_ack_w;

wire          ram_req_w = (ram_wr_w != 4'b0) | ram_rd_w;

assign inport_ack_o       = ram_ack_w;
assign inport_read_data_o = ram_read_data_w;
assign inport_error_o     = 1'b0;
assign inport_accept_o    = ram_accept_w;

//-----------------------------------------------------------------
// Registers / Wires
//-----------------------------------------------------------------

// Xilinx placement pragmas:
//synthesis attribute IOB of command_q is "TRUE"
//synthesis attribute IOB of addr_q is "TRUE"
//synthesis attribute IOB of dqm_q is "TRUE"
//synthesis attribute IOB of cke_q is "TRUE"
//synthesis attribute IOB of bank_q is "TRUE"
//synthesis attribute IOB of data_q is "TRUE"

reg [CMD_W-1:0]        command_q;
reg [SDRAM_ROW_W-1:0]  addr_q;
reg [SDRAM_DATA_W-1:0] data_q;
reg                    data_rd_en_q;
reg [SDRAM_DQM_W-1:0]  dqm_q;
reg                    cke_q;
reg [SDRAM_BANK_W-1:0] bank_q;

// Buffer half word during read and write commands
reg [SDRAM_DATA_W-1:0] data_buffer_q;
reg [SDRAM_DQM_W-1:0]  dqm_buffer_q;

wire [SDRAM_DATA_W-1:0] sdram_data_in_w;

reg                    refresh_q;

reg [SDRAM_BANKS-1:0]  row_open_q;
reg [SDRAM_ROW_W-1:0]  active_row_q[0:SDRAM_BANKS-1];

reg  [STATE_W-1:0]     state_q;
reg  [STATE_W-1:0]     next_state_r;
reg  [STATE_W-1:0]     target_state_r;
reg  [STATE_W-1:0]     target_state_q;
reg  [STATE_W-1:0]     delay_state_q;

// Address bits
// 从 ram_addr_w 提取列地址，并扩展到 SDRAM_ROW_W 位
wire [SDRAM_ROW_W-1:0]  addr_col_w  = {{(SDRAM_ROW_W-SDRAM_COL_W){1'b0}}, ram_addr_w[SDRAM_COL_W:2], 1'b0};
// 从 ram_addr_w 提取行地址
wire [SDRAM_ROW_W-1:0]  addr_row_w  = ram_addr_w[SDRAM_ADDR_W:SDRAM_COL_W+2+1];
wire [SDRAM_BANK_W-1:0] addr_bank_w = ram_addr_w[SDRAM_COL_W+2:SDRAM_COL_W+2-1];

//-----------------------------------------------------------------
// SDRAM State Machine
//-----------------------------------------------------------------
always @ *
begin
    // 默认情况下，保持当前状态
    next_state_r   = state_q;
    // 目标状态（用于预充电后决定下一步去向）
    target_state_r = target_state_q;

    case (state_q)
    //-----------------------------------------
    // STATE_INIT: 初始化状态
    //-----------------------------------------
    STATE_INIT :
    begin
        // 如果检测到刷新请求，进入空闲状态
        if (refresh_q)
            next_state_r = STATE_IDLE;
    end

    //-----------------------------------------
    // STATE_IDLE: 空闲状态
    //-----------------------------------------
    STATE_IDLE :
    begin
        // 处理刷新请求
        // SDRAM需要定期刷新以保持数据有效
        if (refresh_q)
        begin
            // 如果当前有打开的行，先关闭行（进入预充电状态）
            if (|row_open_q)
                next_state_r = STATE_PRECHARGE;
            else
                next_state_r = STATE_REFRESH; // 直接进入刷新

            // 目标状态设为刷新
            target_state_r = STATE_REFRESH;
        end
        // 处理读写请求
        else if (ram_req_w)
        begin
            // 如果当前访问的行已打开（命中），直接读/写
            if (row_open_q[addr_bank_w] && addr_row_w == active_row_q[addr_bank_w])
            begin
                if (!ram_rd_w)
                    next_state_r = STATE_WRITE0; // 进入写入阶段
                else
                    next_state_r = STATE_READ; // 进入读取阶段
            end
            // 访问的行未打开但当前bank中有其它行已打开，先关闭已打开的行
            else if (row_open_q[addr_bank_w])
            begin
                next_state_r   = STATE_PRECHARGE; // 关闭当前行
                if (!ram_rd_w)
                    target_state_r = STATE_WRITE0; // 目标状态为写
                else
                    target_state_r = STATE_READ; // 目标状态为读
            end
            // 如果当前bank中没有任何行打开，直接激活目标行
            else
            begin
                next_state_r   = STATE_ACTIVATE;
                if (!ram_rd_w)
                    target_state_r = STATE_WRITE0; // 目标状态为写
                else
                    target_state_r = STATE_READ; // 目标状态为读
            end
        end
    end

    //-----------------------------------------
    // STATE_ACTIVATE: 激活状态（打开行）
    //-----------------------------------------
    STATE_ACTIVATE :
    begin
        // 激活完成后，直接进入目标状态（读或写）
        next_state_r = target_state_r;
    end

    //-----------------------------------------
    // STATE_READ: 读取数据
    //-----------------------------------------
    STATE_READ :
    begin
        next_state_r = STATE_READ_WAIT; // 进入等待状态，确保数据稳定
    end

    //-----------------------------------------
    // STATE_READ_WAIT: 读取数据等待
    //-----------------------------------------
    STATE_READ_WAIT :
    begin
        next_state_r = STATE_IDLE; // 读取完成，回到空闲状态

        // 如果还有未完成的读取请求，并且不需要刷新
        if (!refresh_q && ram_req_w && ram_rd_w)
        begin
            // 如果新的请求命中已打开的行，直接读取
            if (row_open_q[addr_bank_w] && addr_row_w == active_row_q[addr_bank_w])
                next_state_r = STATE_READ;
        end
    end

    //-----------------------------------------
    // STATE_WRITE0: 写入数据（阶段1）
    //-----------------------------------------
    STATE_WRITE0 :
    begin
        next_state_r = STATE_WRITE1; // 进入下一阶段写入
    end

    //-----------------------------------------
    // STATE_WRITE1: 写入数据（阶段2）
    //-----------------------------------------
    STATE_WRITE1 :
    begin
        next_state_r = STATE_IDLE; // 写入完成，回到空闲状态

        // 如果还有未完成的写入请求，并且不需要刷新
        if (!refresh_q && ram_req_w && (ram_wr_w != 4'b0))
        begin
            // 如果新的请求命中已打开的行，直接写入
            if (row_open_q[addr_bank_w] && addr_row_w == active_row_q[addr_bank_w])
                next_state_r = STATE_WRITE0;
        end
    end

    //-----------------------------------------
    // STATE_PRECHARGE: 预充电（关闭行）
    //-----------------------------------------
    STATE_PRECHARGE :
    begin
        // 如果是为了刷新而关闭行，下一步进入刷新
        if (target_state_r == STATE_REFRESH)
            next_state_r = STATE_REFRESH;
        // 否则，关闭行后进入激活状态
        else
            next_state_r = STATE_ACTIVATE;
    end

    //-----------------------------------------
    // STATE_REFRESH: 刷新状态
    //-----------------------------------------
    STATE_REFRESH :
    begin
        next_state_r = STATE_IDLE; // 刷新完成，回到空闲状态
    end

    //-----------------------------------------
    // STATE_DELAY: 延迟状态
    //-----------------------------------------
    STATE_DELAY :
    begin
        next_state_r = delay_state_q; // 延迟完成后，进入目标状态
    end

    default:
        ;
   endcase
end


//-----------------------------------------------------------------
// Delays
//-----------------------------------------------------------------
localparam DELAY_W = 4;

reg [DELAY_W-1:0] delay_q;
reg [DELAY_W-1:0] delay_r;

/* verilator lint_off WIDTH */

always @ *
begin
    case (state_q)
    //-----------------------------------------
    // STATE_ACTIVATE
    //-----------------------------------------
    STATE_ACTIVATE :
    begin
        // tRCD (ACTIVATE -> READ / WRITE)
        delay_r = SDRAM_TRCD_CYCLES;
    end
    //-----------------------------------------
    // STATE_READ_WAIT
    //-----------------------------------------
    STATE_READ_WAIT :
    begin
        delay_r = SDRAM_READ_LATENCY;

        // Another pending read request (with no refresh pending)
        if (!refresh_q && ram_req_w && ram_rd_w)
        begin
            // Open row hit
            if (row_open_q[addr_bank_w] && addr_row_w == active_row_q[addr_bank_w])
                delay_r = 4'd0;
        end
    end
    //-----------------------------------------
    // STATE_PRECHARGE
    //-----------------------------------------
    STATE_PRECHARGE :
    begin
        // tRP (PRECHARGE -> ACTIVATE)
        delay_r = SDRAM_TRP_CYCLES;
    end
    //-----------------------------------------
    // STATE_REFRESH
    //-----------------------------------------
    STATE_REFRESH :
    begin
        // tRFC
        delay_r = SDRAM_TRFC_CYCLES;
    end
    //-----------------------------------------
    // STATE_DELAY
    //-----------------------------------------
    STATE_DELAY:
    begin
        delay_r = delay_q - 4'd1;
    end
    //-----------------------------------------
    // Others
    //-----------------------------------------
    default:
    begin
        delay_r = {DELAY_W{1'b0}};
    end
    endcase
end
/* verilator lint_on WIDTH */

// Record target state
always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    target_state_q   <= STATE_IDLE;
else
    target_state_q   <= target_state_r;

// Record delayed state
always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    delay_state_q   <= STATE_IDLE;
// On entering into delay state, record intended next state
else if (state_q != STATE_DELAY && delay_r != {DELAY_W{1'b0}})
    delay_state_q   <= next_state_r;

// Update actual state
always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    state_q   <= STATE_INIT;
// Delaying...
else if (delay_r != {DELAY_W{1'b0}})
    state_q   <= STATE_DELAY;
else
    state_q   <= next_state_r;

// Update delay flops
always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    delay_q   <= {DELAY_W{1'b0}};
else
    delay_q   <= delay_r;

//-----------------------------------------------------------------
// Refresh counter
//-----------------------------------------------------------------
localparam REFRESH_CNT_W = 17;

reg [REFRESH_CNT_W-1:0] refresh_timer_q;
always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    refresh_timer_q <= SDRAM_START_DELAY + 100;
else if (refresh_timer_q == {REFRESH_CNT_W{1'b0}})
    refresh_timer_q <= SDRAM_REFRESH_CYCLES;
else
    refresh_timer_q <= refresh_timer_q - 1;

always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    refresh_q <= 1'b0;
else if (refresh_timer_q == {REFRESH_CNT_W{1'b0}})
    refresh_q <= 1'b1;
else if (state_q == STATE_REFRESH)
    refresh_q <= 1'b0;

//-----------------------------------------------------------------
// Input sampling
//-----------------------------------------------------------------

reg [SDRAM_DATA_W-1:0] sample_data0_q;
always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    sample_data0_q <= {SDRAM_DATA_W{1'b0}};
else begin
    //$strobe("Input sampling: sample_data0_q: %h\n", sample_data0_q);
    sample_data0_q <= sdram_data_in_w;
end

reg [SDRAM_DATA_W-1:0] sample_data_q;
always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    sample_data_q <= {SDRAM_DATA_W{1'b0}};
else begin
    //$strobe("Input sampling: sample_data_q: %h\n", sample_data_q);
    sample_data_q <= sample_data0_q;
end

//-----------------------------------------------------------------
// Command Output
//-----------------------------------------------------------------
integer idx;

always @ (posedge clk_i or posedge rst_i)
if (rst_i)
begin
    command_q       <= CMD_NOP;
    data_q          <= 16'b0;
    addr_q          <= {SDRAM_ROW_W{1'b0}};
    bank_q          <= {SDRAM_BANK_W{1'b0}};
    cke_q           <= 1'b0;
    dqm_q           <= {SDRAM_DQM_W{1'b0}};
    data_rd_en_q    <= 1'b1;
    dqm_buffer_q    <= {SDRAM_DQM_W{1'b0}};

    for (idx=0;idx<SDRAM_BANKS;idx=idx+1)
        active_row_q[idx] <= {SDRAM_ROW_W{1'b0}};

    row_open_q      <= {SDRAM_BANKS{1'b0}};
end
else
begin
    case (state_q)
    //-----------------------------------------
    // STATE_IDLE / Default (delays)
    //-----------------------------------------
    default:
    begin
        // Default
        command_q    <= CMD_NOP;
        addr_q       <= {SDRAM_ROW_W{1'b0}};
        bank_q       <= {SDRAM_BANK_W{1'b0}};
        data_rd_en_q <= 1'b1;
    end
    //-----------------------------------------
    // STATE_INIT
    //-----------------------------------------
    STATE_INIT:
    begin
        // Assert CKE
        if (refresh_timer_q == 50)
        begin
            // Assert CKE after 100uS
            cke_q <= 1'b1;
        end
        // PRECHARGE
        else if (refresh_timer_q == 40)
        begin
            // Precharge all banks
            command_q           <= CMD_PRECHARGE;
            addr_q[ALL_BANKS]   <= 1'b1;
        end
        // 2 x REFRESH (with at least tREF wait)
        else if (refresh_timer_q == 20 || refresh_timer_q == 30)
        begin
            command_q <= CMD_REFRESH;
        end
        // Load mode register
        else if (refresh_timer_q == 10)
        begin
            command_q <= CMD_LOAD_MODE;
            addr_q    <= MODE_REG;
        end
        // Other cycles during init - just NOP
        else
        begin
            command_q   <= CMD_NOP;
            addr_q      <= {SDRAM_ROW_W{1'b0}};
            bank_q      <= {SDRAM_BANK_W{1'b0}};
        end
    end
    //-----------------------------------------
    // STATE_ACTIVATE
    //-----------------------------------------
    STATE_ACTIVATE :
    begin
        //$strobe("Time: %0t, STATE_ACTIVATE CMD Issued | active_row_q: %h, bank_q: %h", $time, addr_row_w, addr_bank_w);
        // Select a row and activate it
        command_q     <= CMD_ACTIVE;
        addr_q        <= addr_row_w;
        bank_q        <= addr_bank_w;

        active_row_q[addr_bank_w]  <= addr_row_w;
        row_open_q[addr_bank_w]    <= 1'b1;
    end
    //-----------------------------------------
    // STATE_PRECHARGE
    //-----------------------------------------
    STATE_PRECHARGE :
    begin
        // Precharge due to refresh, close all banks
        if (target_state_r == STATE_REFRESH)
        begin
            // Precharge all banks
            command_q           <= CMD_PRECHARGE;
            addr_q[ALL_BANKS]   <= 1'b1;
            row_open_q          <= {SDRAM_BANKS{1'b0}};
        end
        else
        begin
            // Precharge specific banks
            command_q           <= CMD_PRECHARGE;
            addr_q[ALL_BANKS]   <= 1'b0;
            bank_q              <= addr_bank_w;

            row_open_q[addr_bank_w] <= 1'b0;
        end
    end
    //-----------------------------------------
    // STATE_REFRESH
    //-----------------------------------------
    STATE_REFRESH :
    begin
        // Auto refresh
        command_q   <= CMD_REFRESH;
        addr_q      <= {SDRAM_ROW_W{1'b0}};
        bank_q      <= {SDRAM_BANK_W{1'b0}};
    end
    //-----------------------------------------
    // STATE_READ
    //-----------------------------------------
    STATE_READ :
    begin
        //$display("Time: %0t, READ CMD Issued | addr_q: %h | dram addr: %h", $time, addr_col_w, inport_addr_i);
        command_q   <= CMD_READ;
        addr_q      <= addr_col_w;
        bank_q      <= addr_bank_w;

        // Disable auto precharge (auto close of row)
        addr_q[AUTO_PRECHARGE]  <= 1'b0;

        // Read mask (all bytes in burst)
        dqm_q       <= {SDRAM_DQM_W{1'b0}};
    end
    //-----------------------------------------
    // STATE_WRITE0
    //-----------------------------------------
    STATE_WRITE0 :
    begin
        //$display("Time: %0t, Write Command Issued | addr_q: %h, data_q: %h, dqm_q: %b", 
        //     $time, addr_col_w, ram_write_data_w[15:0], ~ram_wr_w[1:0]);

        command_q       <= CMD_WRITE;
        addr_q          <= addr_col_w;
        bank_q          <= addr_bank_w;
        data_q          <= ram_write_data_w[15:0];

        // Disable auto precharge (auto close of row)
        addr_q[AUTO_PRECHARGE]  <= 1'b0;

        // Write mask
        dqm_q           <= ~ram_wr_w[1:0];
        dqm_buffer_q    <= ~ram_wr_w[3:2];

        data_rd_en_q    <= 1'b0;
    end
    //-----------------------------------------
    // STATE_WRITE1
    //-----------------------------------------
    STATE_WRITE1 :
    begin
        //$display("Time: %0t, STATE_WRITE1 | data_q: %h, dqm_q: %b", 
        //     $time, data_buffer_q, dqm_buffer_q);

        // Burst continuation
        command_q   <= CMD_NOP;

        data_q      <= data_buffer_q;

        // Disable auto precharge (auto close of row)
        addr_q[AUTO_PRECHARGE]  <= 1'b0;

        // Write mask
        dqm_q       <= dqm_buffer_q;
    end
    endcase
end

//-----------------------------------------------------------------
// Record read events
// 记录 SDRAM 读取事件
//-----------------------------------------------------------------
reg [SDRAM_READ_LATENCY+1:0]  rd_q;

always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    // 异步复位：当 `rst_i` 置高时，将 `rd_q` 置为全 0。
    rd_q    <= {(SDRAM_READ_LATENCY+2){1'b0}};
else
    // `rd_q` 作为一个移位寄存器，每个时钟周期向左移动一位，
    // 并在最低位插入当前 `state_q` 是否为 `STATE_READ` 的结果。
    // 这样可以记录 `STATE_READ` 发生的时间，并在后续的若干个
    // 时钟周期内保持这个信息，用于对齐 SDRAM 读数据的返回时序。
    rd_q    <= {rd_q[SDRAM_READ_LATENCY:0], (state_q == STATE_READ)};


//-----------------------------------------------------------------
// Data Buffer
//-----------------------------------------------------------------

// Buffer upper 16-bits of write data so write command can be accepted
// in WRITE0. Also buffer lower 16-bits of read data.
always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    data_buffer_q <= 16'b0;
else if (state_q == STATE_WRITE0)
    data_buffer_q <= ram_write_data_w[31:16];
else if (rd_q[SDRAM_READ_LATENCY+1]) begin
    // 读取数据的时候，先读取的是低位，后读取的是高位。
    data_buffer_q <= sample_data_q;
    //$strobe("Time: %t, data_buffer_q: %h\n", $time, data_buffer_q);
    //$strobe("Time: %t, sample_data_q: %h\n", $time, sample_data_q);
end

// Read data output
assign ram_read_data_w = {sample_data_q, data_buffer_q};

//-----------------------------------------------------------------
// ACK
//-----------------------------------------------------------------
reg ack_q;

always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    ack_q   <= 1'b0;
else
begin
    if (state_q == STATE_WRITE1)
        ack_q <= 1'b1;
    else if (rd_q[SDRAM_READ_LATENCY+1]) begin
        ack_q <= 1'b1;
        //$strobe("Time: %t, Read data valid! | ack_q: %b, ram_read_data_w: %h, inport_accept_o: %h\n", $time, ack_q, ram_read_data_w, inport_accept_o);
    end
    else
        ack_q <= 1'b0;
end

assign ram_ack_w = ack_q;

// Accept command in READ or WRITE0 states
assign ram_accept_w = (state_q == STATE_READ || state_q == STATE_WRITE0);

//-----------------------------------------------------------------
// SDRAM I/O
//-----------------------------------------------------------------
assign sdram_clk_o           = ~clk_i;
assign sdram_data_out_en_o   = ~data_rd_en_q;
assign sdram_data_output_o   =  data_q;
assign sdram_data_in_w       = sdram_data_input_i;

assign sdram_cke_o  = cke_q;
assign sdram_cs_o   = command_q[3];
assign sdram_ras_o  = command_q[2];
assign sdram_cas_o  = command_q[1];
assign sdram_we_o   = command_q[0];
assign sdram_dqm_o  = dqm_q;
assign sdram_ba_o   = bank_q;
assign sdram_addr_o = addr_q;

//-----------------------------------------------------------------
// Simulation only
//-----------------------------------------------------------------
`ifdef verilator
reg [79:0] dbg_state;

always @ *
begin
    case (state_q)
    STATE_INIT        : dbg_state = "INIT";
    STATE_DELAY       : dbg_state = "DELAY";
    STATE_IDLE        : dbg_state = "IDLE";
    STATE_ACTIVATE    : dbg_state = "ACTIVATE";
    STATE_READ        : dbg_state = "READ";
    STATE_READ_WAIT   : dbg_state = "READ_WAIT";
    STATE_WRITE0      : dbg_state = "WRITE0";
    STATE_WRITE1      : dbg_state = "WRITE1";
    STATE_PRECHARGE   : dbg_state = "PRECHARGE";
    STATE_REFRESH     : dbg_state = "REFRESH";
    default           : dbg_state = "UNKNOWN";
    endcase
end
`endif


endmodule
