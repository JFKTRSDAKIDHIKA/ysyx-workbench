module ysyx_24120009_sram_axi4_lite_wrapper #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32
)(
    // Clock and reset signals
    input wire clk,
    input wire rst,

    // AXI4-Lite Write Channel
    input wire awvalid,                         // Write address valid
    output reg awready,                         // Write address ready
    input wire [ADDR_WIDTH-1:0] awaddr,         // Write address
    input wire wvalid,                          // Write data valid
    output reg wready,                          // Write data ready
    input wire [DATA_WIDTH-1:0] wdata,          // Write data
    input wire [(DATA_WIDTH/4)-1:0] wstrb,      // Write strobes
    output reg bvalid,                          // Write response valid
    input wire bready,                          // Write response ready
    output reg [1:0] bresp,                     // Write response

    // AXI4-Lite Read Channel
    input wire arvalid,                         // Read address valid
    output reg arready,                         // Read address ready
    input wire [ADDR_WIDTH-1:0] araddr,         // Read address
    output reg rvalid,                          // Read data valid
    input wire rready,                          // Read data ready
    output reg [DATA_WIDTH-1:0] rdata,          // Read data
    output reg [1:0] rresp,                     // Read response

    // debug signals
    output wire [1:0] axi4_ifu_state_debug
);
    // debug signals assignment
    assign axi4_ifu_state_debug = state;

    // Internal signals for SRAM interface
    wire [DATA_WIDTH-1:0] sram_data_out;        // SRAM read data
    wire sram_rd_res_valid;                     // SRAM read response valid
    wire sram_wt_res_valid;                     // SRAM write response valid

    // State machine definition
    reg [1:0] state;
    localparam IDLE = 2'b00,
               WRITE = 2'b01,
               READ = 2'b10;

    // Internal registers for AXI4-Lite to SRAM conversion
    reg [ADDR_WIDTH-1:0] addr_reg;              // Registered address for SRAM
    reg [DATA_WIDTH-1:0] wdata_reg;             // Registered write data for SRAM
    reg [(DATA_WIDTH/4)-1:0] wstrb_reg;         // Registered write strobes for SRAM

    // SRAM instance
    ysyx_24120009_SRAM sram_inst (
        // Clock and reset signals
        .clk(clk),
        .rst(rst),

        // Read memory signals
        .rd_req_valid(rd_req_valid),            // SRAM read request valid
        .addr(addr_reg),                        // SRAM address
        .data_out(sram_data_out),               // SRAM read data
        .rd_res_valid(sram_rd_res_valid),       // SRAM read response valid

        // Write memory signals
        .wt_req_valid(wt_req_valid),            // SRAM write request valid
        .waddr(addr_reg),                       // SRAM write address
        .wdata(wdata_reg),                      // SRAM write data
        .wmask(wstrb_reg),                      // SRAM write mask
        .wt_res_valid(sram_wt_res_valid)        // SRAM write response valid
    );

    // Internal signals for SRAM control
    reg rd_req_valid;                           // SRAM read request valid
    reg wt_req_valid;                           // SRAM write request valid

    // Reset logic
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            awready <= 1'b0;
            wready <= 1'b0;
            bvalid <= 1'b0;
            bresp <= 2'b00;
            arready <= 1'b0;
            rvalid <= 1'b0;
            rresp <= 2'b00;
            rd_req_valid <= 1'b0;
            wt_req_valid <= 1'b0;
        end else begin
            case (state)
                // Idle state: Wait for a valid AXI4-Lite request
                IDLE: begin
                    bvalid <= 1'b0;
                    rvalid <= 1'b0;
                    awready <= 1'b1;
                    wready <= 1'b1;
                    arready <= 1'b1;
                    if (awvalid && wvalid) begin
                        // Capture write request
                        addr_reg <= awaddr;
                        wdata_reg <= wdata;
                        wstrb_reg <= wstrb;
                        state <= WRITE;
                        awready <= 1'b0;
                        wready <= 1'b0;
                        wt_req_valid <= 1'b1;
                    end else if (arvalid) begin
                        // Capture read request
                        addr_reg <= araddr;
                        state <= READ;
                        arready <= 1'b0;
                    end
                end

                // Write state: Send write request to SRAM and wait for response
                WRITE: begin
                    wt_req_valid <= 1'b0; // Set wt_req_valid to zero when state switches to WRITE state to ensure that wt_req_valid sustains hign for only one clock cycle
                    if (sram_wt_res_valid) begin
                        bvalid <= 1'b1;
                        bresp <= 2'b00; // OKAY response
                        if (bready) begin
                            state <= IDLE;
                        end
                    end
                end

                // Read state: Send read request to SRAM and wait for response
                READ: begin
                    rd_req_valid <= 1'b1;
                    if (sram_rd_res_valid) begin
                        rd_req_valid <= 1'b0;
                        rdata <= sram_data_out;
                        rvalid <= 1'b1;
                        rresp <= 2'b00; // OKAY response
                        if (rready) begin
                            state <= IDLE;
                        end
                    end
                end

                default: state <= IDLE;
            endcase
        end
    end

endmodule