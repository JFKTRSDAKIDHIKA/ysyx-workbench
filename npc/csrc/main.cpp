#include "Vysyx_24120009_core.h"
#include "verilated.h"
#include <iostream>
#include <svdpi.h>
#include "difftest.h"
#include "registers.h"
#include "program_loader.h"
#include "memory.h"

// define the DPI-C functions
extern "C" void simulation_exit() {
    Verilated::gotFinish(true); 
}
extern "C" void get_register_values(int rf[32]) {
    set_register_values(rf);  // set the register values
}

void tick(Vysyx_24120009_core* top, bool step_mode) {
    top->clk = 0;
    top->eval();
    top->clk = 1;
    top->eval();
    Verilated::timeInc(1); // 增加仿真时间

    if (step_mode) {
        std::string input;
        std::cout << "Enter command : ";
        std::getline(std::cin, input);  // 等待用户输入

        if (input == "si") {
            // 执行单步操作
            std::cout << "Single-step execution..." << std::endl;
            return;  // 返回以继续执行单步操作
        } 
        else if (input == "info r") {
            print_register_values();  // 打印寄存器信息
        } 
        else {
            std::cout << "Unknown command!" << std::endl;
        }
    }
}

void reset(Vysyx_24120009_core* top, int cycles) {
    top->rst = 1;
    for (int i = 0; i < cycles; ++i) {
        tick(top, false);  // forbidden single-step mode
    }
    top->rst = 0;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vysyx_24120009_core* top = new Vysyx_24120009_core;

    // Default to single step mode (if no argument is provided)
    bool step_mode = true;
    if (argc > 2) {
        std::string mode = argv[2];
        if (mode == "step") {
            step_mode = true; // Single-step mode
        } else if (mode == "run") {
            step_mode = false; // Run mode (continuous execution)
        } else {
            std::cerr << "Invalid step_mode argument. Use 'step' or 'run'." << std::endl;
            return 1; // Exit with error code
        }
    }

    // init_difftest("nemu/build/riscv32-nemu-interpreter-so", 0x10000, 1234);

    // Load program
    load_program(argv[1]);

    // Reset
    reset(top, 10); // Reset for 10 cycles

    do {
        // Fetch 阶段
        uint32_t pc = top->imem_addr;          
        top->imem_rdata = Memory::pmem_read(pc);     

        // difftest_step(top, pc);  // 比较寄存器和内存状态

        // Tick 时钟
        tick(top, step_mode);  // 传入step_mode来决定是否启用单步模式
    } while(!Verilated::gotFinish());

    delete top;
    return 0;
}
