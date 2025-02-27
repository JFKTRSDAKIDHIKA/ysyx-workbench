module ysyx_24120009_axi4_lite_interface (
    // Clock and reset signals
    input wire clk,
    input wire rst,

    // AXI4-Lite Interface
    // Write Address Channel
    input wire [31:0]  awaddr,
    input wire         awvalid,
    output reg         awready,

    // Write Data Channel
    input wire [31:0]  wdata,
    input wire [3:0]   wstrb,
    input wire         wvalid,
    output reg         wready,

    // Write Response Channel
    output reg  [1:0]  bresp,
    output reg         bvalid,
    input wire         bready,

    // Read Address Channel
    input wire [31:0]  araddr,
    input wire         arvalid,
    output reg         arready,

    // Read Data Channel
    output reg  [31:0] rdata,
    output reg  [1:0]  rresp,
    output reg         rvalid,
    input wire         rready
);

    // SRAM Interface Signals
    reg rd_req_valid;
    reg [31:0] sram_addr;
    reg [31:0] sram_data_out;
    wire rd_res_valid;

    reg wt_req_valid;
    reg [31:0] sram_waddr;
    reg [31:0] sram_wdata;
    reg [7:0] sram_wmask;
    wire wt_res_valid;

    // Instantiate the SRAM module
    ysyx_24120009_SRAM sram (
        .clk(clk),
        .rst(rst),
        .rd_req_valid(rd_req_valid),
        .addr(sram_addr),
        .data_out(sram_data_out),
        .rd_res_valid(rd_res_valid),
        .wt_req_valid(wt_req_valid),
        .waddr(sram_waddr),
        .wdata(sram_wdata),
        .wmask(sram_wmask),
        .wt_res_valid(wt_res_valid)
    );

    // State Machine for AXI4-Lite Interface
    typedef enum reg [1:0] {
        IDLE,
        READ,
        WRITE
    } state_t;

    state_t state;

    // Write Address and Data Buffers
    reg [31:0] awaddr_buf;
    reg [31:0] wdata_buf;
    reg [3:0]  wstrb_buf;

    // Read Address Buffer
    reg [31:0] araddr_buf;

    // State Machine Logic
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            awready <= 0;
            wready <= 0;
            bvalid <= 0;
            arready <= 0;
            rvalid <= 0;
            rdata <= 0;
            rresp <= 0;
            bresp <= 0;
        end else begin
            // Default values
            awready <= 0;
            wready <= 0;
            arready <= 0;

            // Handle write response handshake
            if (bvalid && bready) begin
                bvalid <= 0; // Clear write response after handshake
            end

            // Handle read data handshake
            if (rvalid && rready) begin
                rvalid <= 0; // Clear read data after handshake
            end
            
            case (state)
                IDLE: begin
                    // Default signals
                    awready <= 0;
                    wready <= 0;
                    arready <= 0;

                    // Check for read or write request
                    if (arvalid) begin
                        // Read request
                        araddr_buf <= araddr;
                        arready <= 1;
                        state <= READ;
                    end else if (awvalid && wvalid) begin
                        // Write request
                        awaddr_buf <= awaddr;
                        wdata_buf <= wdata;
                        wstrb_buf <= wstrb;
                        awready <= 1;
                        wready <= 1;
                        state <= WRITE;
                    end
                end

                READ: begin
                    // Issue read request to SRAM
                    rd_req_valid <= 1;
                    sram_addr <= araddr_buf;

                    // Wait for read response
                    if (rd_res_valid) begin
                        rd_req_valid <= 0;
                        rdata <= sram_data_out;
                        rvalid <= 1;
                        rresp <= 2'b00; // OKAY response
                        state <= IDLE;
                    end
                end

                WRITE: begin
                    // Issue write request to SRAM
                    wt_req_valid <= 1;
                    sram_waddr <= awaddr_buf;
                    sram_wdata <= wdata_buf;
                    sram_wmask <= {4'b0, wstrb_buf}; // Convert 4-bit wstrb to 8-bit wmask

                    // Wait for write response
                    if (wt_res_valid) begin
                        wt_req_valid <= 0;
                        bvalid <= 1;
                        bresp <= 2'b00; // OKAY response
                        state <= IDLE;
                    end
                end

                default: begin
                    state <= IDLE;
                end
            endcase
        end
    end

endmodule