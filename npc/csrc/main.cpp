#include "Vysyx_24120009_core.h" // 顶层模块的 Verilator 生成类
#include "verilated.h"
#include <ostream>
#include <iostream>
#include <svdpi.h>
#include <fstream>

// define the DPI-C functions
extern "C" void simulation_exit() {
    Verilated::gotFinish(true); 
}

extern "C" void get_register_values(int rf[32]) {
    // 处理寄存器值
    for (int i = 0; i < 32; ++i) {
        std::cout << "x" << i << ": " << std::hex << rf[i] << std::endl;
    }
}


void pmem_write(uint32_t address, uint32_t data);
uint32_t pmem_read(uint32_t address);

// 加载程序到存储器中
void load_program(const char *program_path) {
    std::ifstream program_file(program_path, std::ios::binary);
    if (!program_file) {
        std::cerr << "Error opening program file: " << program_path << std::endl;
        return;
    }

    uint32_t address = 0x80000000; // 从内存基地址开始加载
    uint32_t data;
    while (program_file.read(reinterpret_cast<char*>(&data), sizeof(data))) {
        pmem_write(address, data);
        address += sizeof(data); // 增加偏移量，写入下一条指令
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
        std::cout << "Enter command : ";
        std::getline(std::cin, input);  // 等待用户输入

        if (input == "si") {
            // 执行单步操作
            std::cout << "Single-step execution..." << std::endl;
            return;  // 返回以继续执行单步操作
        } 
        else if (input == "info r") {
            // 输出所有寄存器信息
            std::cout << "Register information:" << std::endl;
            std::cout << "PC = 0x" << std::hex << top->pc_debug << std::endl;

        } 
        else {
            std::cout << "Unknown command!" << std::endl;
        }
    }
}


void reset(Vysyx_24120009_core* top, int cycles) {
    top->rst = 1;
    for (int i = 0; i < cycles; ++i) {
        tick(top, false);  // 不在复位期间启用单步
    }
    top->rst = 0;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vysyx_24120009_core* top = new Vysyx_24120009_core;

    // print the command line arguments
    std::cout << "argc: " << argc << std::endl;
    for (int i = 0; i < argc; ++i) {
        std::cout << "argv[" << i << "]: " << argv[i] << std::endl;
    }

    bool step_mode = true; // default to single step mode

    // Load program
    load_program(argv[1]);

    // Reset
    reset(top, 10); // 复位保持 10 个周期

    do {
        // Fetch 阶段
        uint32_t pc = top->imem_addr;          
        top->imem_rdata = pmem_read(pc);       
        // Tick 时钟
        tick(top, step_mode);  // 传入step_mode来决定是否启用单步模式
        // 输出状态
    } while(!Verilated::gotFinish());

    delete top;
    return 0;
}

