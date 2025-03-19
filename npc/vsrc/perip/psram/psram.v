module psram (
  input sck,          
  input ce_n,         
  inout [3:0] dio     
);

  // Memory array：4MB (2^22 x 8bit)
  reg [7:0] mem [0:(1<<22)-1];
  
  // State machine state definition
  localparam IDLE       = 3'd0,  
             CMD        = 3'd1,  
             ADDR       = 3'd2,  
             DUMMY      = 3'd3,  
             READ_DATA  = 3'd4,  
             WRITE_DATA = 3'd5;  
  
  // Internal signal declaration
  reg [2:0] state;       
  reg [7:0] cmd;         
  reg [23:0] addr;       
  reg [5:0] cycle_cnt;   
  reg [3:0] dout;        
  reg dout_en;           
  reg [1:0] nibble_idx;  
  reg [23:0] addr_shift;
  // 0: Basic SPI mode, 1: QPI mode
  reg qpi_mode;          
  
  // Bidirectional dio control: Outputs when `dout_en` is 1, otherwise high impedance.
  assign dio = dout_en ? dout : 4'bz;

  // State machine logic
  always @(posedge sck or posedge ce_n) begin
    if (ce_n) begin
      //$write("RESET\n");
      ////$write("qpi_mode: %b\n", qpi_mode);
      // Slave select invlid
      state <= IDLE;
      cmd <= 8'b0;
      addr <= 24'b0;
      addr_shift <= 24'b0;
      cycle_cnt <= 6'b0;
      dout_en <= 1'b0;
    end else begin
      case (state)
        IDLE: begin
          if (qpi_mode) begin
            // QPI mode
            ////$write("cmd: %h\n", cmd);
            ////$write("dio: %b\n", dio);
            cmd[7:4] <= dio;
            state <= CMD;
            cycle_cnt <= 6'd0;
          end else begin
            // Basic SPI mode
            cmd[7] <= dio[0];
            state <= CMD;
            cycle_cnt <= 6'd0;
          end 
        end
        
        CMD: begin
          ////$write("cmd: %h\n", cmd);
          ////$write("dio: %b\n", dio);
          cycle_cnt <= cycle_cnt + 1'b1;
          if (qpi_mode) begin
            // QPI mode
            cmd[3:0] <= dio;
            state <= ADDR;
            cycle_cnt <= 6'd0;
            ////$write("dio: %b\n", dio);
            //addr_shift <= {addr_shift[19:0], dio};  // 提前接收地址
          end else begin
            // Basic SPI mode
            case (cycle_cnt)
              6'd0: cmd[6] <= dio[0];
              6'd1: cmd[5] <= dio[0];
              6'd2: cmd[4] <= dio[0];
              6'd3: cmd[3] <= dio[0];
              6'd4: cmd[2] <= dio[0];
              6'd5: cmd[1] <= dio[0];
              6'd6: cmd[0] <= dio[0];
              6'd7: begin
                // 命令接收完成，检查是否切换到 QPI 模式
                if (cmd == 8'h35) begin
                  qpi_mode <= 1'b1;  
                  state <= IDLE;     
                end else begin
                  state <= ADDR;     
                end
                cycle_cnt <= 6'd0;
                addr_shift <= {addr_shift[19:0], dio};  // 提前接收地址
              end
            endcase
          end
        end
        
        ADDR: begin
          //$write("cmd: %h\n", cmd);
          //$write("ADDR\n");
          //$write("addr_shift: %h\n", addr_shift);
          //$write("dio: %b\n", dio);
          addr_shift <= {addr_shift[19:0], dio};  // 左移，每次接收 4 位
          cycle_cnt <= cycle_cnt + 1;
          if (cycle_cnt == 6'd5) begin
            addr <= {addr_shift[19:0], dio};  // 最后一次赋值给 addr
            if (cmd == 8'hEB) state <= DUMMY;
            else if (cmd == 8'h38) state <= WRITE_DATA;
            else begin
              assert (0) else $error("Invalid command received: %h", cmd);
              state <= IDLE;
            end
            cycle_cnt <= 6'd0;
          end
        end
        
        DUMMY: begin
          // Quad IO Read 的 6 个等待周期
          cycle_cnt <= cycle_cnt + 1;
          if (cycle_cnt == 6'd5) begin
            state <= READ_DATA;
            cycle_cnt <= 6'd0;
            dout_en <= 1'b1;  // 准备输出数据
            nibble_idx <= 2'b0;
          end
        end
        
        READ_DATA: begin
          //$write("READ_DATA\n");
          //$write("addr: %h\n", addr);
          //$write("dout: %b\n", dout);
          // 每次输出 4 位，2 个周期输出 1 个字节
          if (nibble_idx == 2'b0) begin
            dout <= mem[addr][7:4];  // 高 4 位
            nibble_idx <= 2'b1;
          end else begin
            dout <= mem[addr][3:0];  // 低 4 位
            nibble_idx <= 2'b0;
            addr <= addr + 1;  // 地址自增
          end
        end
        
        WRITE_DATA: begin
          //$write("WRITE_DATA\n");
          //$write("addr: %h\n", addr);
          //$write("dio: %b\n", dio);
          // 每次接收 4 位，2 个周期写入 1 个字节
          if (cycle_cnt[0] == 1'b0) begin
            mem[addr][7:4] <= dio;  // 高 4 位
          end else begin
            mem[addr][3:0] <= dio;  // 低 4 位
            addr <= addr + 1;  // 地址自增
          end
          cycle_cnt <= cycle_cnt + 1;
        end
        
        default: state <= IDLE;
      endcase
    end
  end

endmodule