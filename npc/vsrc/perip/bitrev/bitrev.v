module bitrev (
  input  sck,
  input  ss,
  input  mosi,
  output reg miso
);

  // Internal signal declaration
  localparam RX = 2'b00,
             TX   = 2'b01,
             DONE   = 2'b10;
  reg [7:0]  counter;
  reg [7:0]  data_in;
  reg [1:0]  state;
  wire inactive = ss;

/*
  always @(*) begin
    $write("mosi: %d\n", mosi);
  end
*/

  always @(posedge sck) begin
    if (inactive) begin 
      state <= RX;
      counter <= 8'd0;
      data_in <= 8'd0;
      miso <= 1'b1;
    end else begin
      //$write("ss: %d\n", ss);
      //$write("sck: %d\n", sck);
      case (state)
        RX: begin
          $write("RX\n");
          $write("mosi: %d\n", mosi);
          data_in <= { data_in[6:0], mosi };
          counter <= (counter < 8'd7 ) ? counter + 8'd1 : 8'd0;
          state <= (counter == 8'd7 ) ? TX : state;
          miso <= 1'b1;
        end
        TX: begin
          $write("TX\n");
          counter <= (counter < 8'd7 ) ? counter + 8'd1 : 8'd0;
          state <= (counter == 8'd7 ) ? DONE : state;
          miso <= data_in[7];
          data_in <= {data_in[6:0], data_in[7]};
          $write("mosi: %d\n", mosi);
          $write("miso: %d\n", miso);
        end 
        DONE: begin
          state <= state;
          miso <= 1'b1;
          //$write("done");
        end
        default: begin
          state <= state;
          miso <= 1'b1;
          $write("Invalid state");
          $fatal;
        end
      endcase
    end
  end

endmodule
