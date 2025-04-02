

module EBreakHandler(
    input wire [31:0] inst,
    input wire        lsu_axi_resp_err
);

import "DPI-C" function void simulation_exit();

    always @(*) begin
        if (inst == 32'h00100073) begin
            $display("EBREAK: Simulation exiting...");
            simulation_exit(); // 通知仿真环境结束
        end
    end

    always @(*) begin
        if (lsu_axi_resp_err == 1'b1) begin
            $display("LSU memory access error...");
            simulation_exit(); // 通知仿真环境结束
        end
    end

endmodule
    
