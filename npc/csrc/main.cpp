#include "Vysyx_24120009_core.h"
#include "verilated.h"
#include "difftest.h"
#include "registers.h"
#include "program_loader.h"
#include "memory.h"
#include "difftest.h"
#include <iostream>
#include <svdpi.h>

// define the DPI-C functions
extern "C" void simulation_exit() {
    Verilated::gotFinish(true); 
}
extern "C" void get_register_values(int rf[32]) {
    set_register_values(rf);  // set the register values
}

typedef struct {
  uint32_t gpr[32];
  uint32_t pc;
} riscv32_CPU_state;
riscv32_CPU_state ref;

void check_reg(Vysyx_24120009_core* top) {
    // Compare DUT registers with REF registers
    for (int i = 0; i < 32; i++) {
        if (rf_values[i] != ref.gpr[i]) {
            std::cerr << "Register mismatch at x" << i << " - DUT: " << rf_values[i] << " REF: " << ref.gpr[i] << std::endl;
            // Optionally, you can stop the simulation on a mismatch
            // Verilated::gotFinish(true);  // End simulation
        }
    }
    if (top->imem_addr != ref.pc) {
        std::cerr << "PC mismatch - DUT: " << top->imem_addr << " REF: " << ref.pc << std::endl;
        // Verilated::gotFinish(true);  // End simulation
    }
}


void tick(Vysyx_24120009_core* top, bool step_mode) {
    top->clk = 0;
    top->eval();
    top->clk = 1;
    top->eval();
    Verilated::timeInc(1); // 增加仿真时间

    if (step_mode) {
        std::string input;
        std::cout << "(npc) : ";
        std::getline(std::cin, input);  // 等待用户输入

        if (input == "si") {
            // 执行单步操作
            return;  // 返回以继续执行单步操作
        } 
        else if (input == "info r") {
            print_register_values();  // 打印寄存器信息
        } 
        else if (input == "q") {
            Verilated::gotFinish(true);  // 退出仿真
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

    // Initialize difftest
    init_difftest("/root/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so", 0);
    // Copy the program to the reference model
    ref_difftest_memcpy(argv[1]);  

    // Reset
    reset(top, 10); // Reset for 10 cycles

    do {
        // Fetch 阶段
        uint32_t pc = top->imem_addr;          
        top->imem_rdata = Memory::pmem_read(pc);     

        // dut execute one instruction
        tick(top, step_mode);  // 传入step_mode来决定是否启用单步模式

        std::cout << "Op1_debug: " << top->Op1_debug << ", Op2_debug: " << top->Op2_debug << "reg_write_data" << top->reg_write_data_debug << std::endl;

        // ref execute one instruction
        ref_difftest_exec(1);
          
        // Copy registers from DUT to REF and compare them
        ref_difftest_regcpy(&ref, DIFFTEST_TO_REF);

        // Check if the registers are consistent
        check_reg(top);

        // print the instruction whatever the mode is
        std::cout << "Instruction: 0x" << std::hex << top->inst_debug << std::endl;
    } while(!Verilated::gotFinish());

    delete top;
    return 0;
}
