module bitrev (
  input  sck,
  input  ss,
  input  mosi,
  output reg miso
);

  // Internal signal declaration
  localparam IDLE = 2'b00,
             RX   = 2'b01,
             TX   = 2'b10;
  reg [7:0]  counter;
  reg [7:0]  data_in;
  reg [1:0]  state;
  wire inactive = ss;

/*
  always @(*) begin
    $write("ss: %d\n", ss);
    $write("sck: %d\n", sck);
  end
*/

  always @(posedge sck or inactive) begin
    if (inactive) begin 
      counter <= 8'd0;
      data_in <= 8'd0;
    end else begin
      case (state)
        IDLE:  begin
          miso <= 1'b1;  // slave空闲时, 将MISO信号设置为高电平
          state <= IDLE;
          counter <= 8'd0;
          $write("IDLE\n");
        end
        RX: begin
          $write("RX\n");
          data_in <= { data_in[6:0], mosi };
          counter <= (counter < 8'd7 ) ? counter + 8'd1 : 8'd0;
          state <= (counter == 8'd7 ) ? TX : state;
          miso <= 1'b1;
        end
        TX: begin
          $write("TX\n");
          counter <= (counter < 8'd7 ) ? counter + 8'd1 : 8'd0;
          state <= (counter == 8'd7 ) ? IDLE : state;
          miso <= data_in[7];
          data_in <= {data_in[6:0], 1'b0};
        end 
        default: begin
          state <= state;
          $write("Invalid state");
          $fatal;
        end
      endcase
    end
  end

endmodule
