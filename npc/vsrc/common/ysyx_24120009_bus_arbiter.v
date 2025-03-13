module ysyx_24120009_bus_arbiter (
    // Clock and reset signals
    input wire clk,
    input wire rst,

    // IFU memory interface
    input wire ifu_arvalid,    // IFU read address valid
    output reg ifu_arready,    // IFU read address ready
    input wire [31:0] ifu_araddr, // IFU read address
    output reg ifu_rvalid,     // IFU read data valid
    input wire ifu_rready,     // IFU read data ready
    output reg [31:0] ifu_rdata,  // IFU read data

    // MEM memory interface
    input wire mem_awvalid,    // LSU write address valid
    output reg mem_awready,    // LSU write address ready
    input wire [31:0] mem_awaddr, // LSU write address
    input wire mem_wvalid,     // LSU write data valid
    output reg mem_wready,     // LSU write data ready
    input wire [31:0] mem_wdata,  // LSU write data
    input wire [7:0] mem_wstrb,   // LSU write strobes
    output reg mem_bvalid,     // LSU write response valid
    input wire mem_bready,     // LSU write response ready
    input wire mem_arvalid,    // LSU read address valid
    output reg mem_arready,    // LSU read address ready
    input wire [31:0] mem_araddr, // LSU read address
    output reg mem_rvalid,     // LSU read data valid
    input wire mem_rready,     // LSU read data ready
    output reg [31:0] mem_rdata,  // LSU read data

    // Unified memory interface
    output reg awvalid_wire,   // Memory write address valid
    input wire awready_wire,   // Memory write address ready
    output reg [31:0] awaddr_wire, // Memory write address
    output reg wvalid_wire,    // Memory write data valid
    input wire wready_wire,    // Memory write data ready
    output reg [31:0] wdata_wire,  // Memory write data
    output reg [7:0] wstrb_wire,   // Memory write strobes
    input wire bvalid_wire,    // Memory write response valid
    output reg bready_wire,    // Memory write response ready
    output reg arvalid_wire,   // Memory read address valid
    input wire arready_wire,   // Memory read address ready
    output reg [31:0] araddr_wire, // Memory read address
    input wire rvalid_wire,    // Memory read data valid
    output reg rready_wire,    // Memory read data ready
    input wire [31:0] rdata_wire,  // Memory read data

    // debug signals
    output wire [1:0] arbiter_state_debug
);

    // State machine states
    localparam IDLE     = 2'b00; // Idle state
    localparam IFU_READ = 2'b01; // IFU read transaction
    localparam mem_WRITE = 2'b10; // LSU write transaction
    localparam mem_READ = 2'b11; // LSU read transaction

    reg [1:0] state; // Current state

    assign arbiter_state_debug = state;

    // Single always block for state machine and output logic
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            // Reset all outputs and state
            state <= IDLE;
            ifu_arready <= 0;
            ifu_rvalid <= 0;
            ifu_rdata <= 0;
            mem_awready <= 0;
            mem_wready <= 0;
            mem_bvalid <= 0;
            mem_arready <= 0;
            mem_rvalid <= 0;
            mem_rdata <= 0;
            awvalid_wire <= 0;
            awaddr_wire <= 0;
            wvalid_wire <= 0;
            wdata_wire <= 0;
            wstrb_wire <= 0;
            bready_wire <= 0;
            arvalid_wire <= 0;
            araddr_wire <= 0;
            rready_wire <= 0;
        end else begin
            // Default values
            ifu_arready <= 0;
            ifu_rvalid <= 0;
            ifu_rdata <= 0;
            mem_awready <= 0;
            mem_wready <= 0;
            mem_bvalid <= 0;
            mem_arready <= 0;
            mem_rvalid <= 0;
            mem_rdata <= 0;
            awvalid_wire <= 0;
            awaddr_wire <= 0;
            wvalid_wire <= 0;
            wdata_wire <= 0;
            wstrb_wire <= 0;
            bready_wire <= 0;
            arvalid_wire <= 0;
            araddr_wire <= 0;
            rready_wire <= 0;

            // State machine logic
            case (state)
                IDLE: begin
                    if (ifu_arvalid) begin
                        state <= IFU_READ;
                        arvalid_wire <= ifu_arvalid;
                        araddr_wire <= ifu_araddr;
                    end else if (mem_awvalid) begin
                        state <= mem_WRITE;
                        awvalid_wire <= mem_awvalid;
                        awaddr_wire <= mem_awaddr;
                        wvalid_wire <= mem_wvalid;
                        wdata_wire <= mem_wdata;
                        wstrb_wire <= mem_wstrb;
                    end else if (mem_arvalid) begin
                        state <= mem_READ;
                        arvalid_wire <= mem_arvalid;
                        araddr_wire <= mem_araddr;
                    end
                end
                IFU_READ: begin
                    if (rvalid_wire && ifu_rready) begin
                        state <= IDLE;
                    end
                    // IFU read transaction
                    ifu_arready <= arready_wire;
                    ifu_rvalid <= rvalid_wire;
                    ifu_rdata <= rdata_wire;
                    rready_wire <= ifu_rready;
                end
                mem_WRITE: begin
                    if (bvalid_wire && mem_bready) begin
                        state <= IDLE;
                    end
                    // MEM write transaction
                    mem_awready <= awready_wire;
                    mem_wready <= wready_wire;
                    mem_bvalid <= bvalid_wire;
                    bready_wire <= mem_bready;
                end
                mem_READ: begin
                    if (rvalid_wire && mem_rready) begin
                        state <= IDLE;
                    end
                    // MEM read transaction
                    mem_arready <= arready_wire;
                    mem_rvalid <= rvalid_wire;
                    mem_rdata <= rdata_wire;
                    rready_wire <= mem_rready;
                end
            endcase
        end
    end

endmodule