#include "Vysyx_24120009_core.h" // 顶层模块的 Verilator 生成类
#include "verilated.h"
#include <ostream>
#include <iostream>
#include <svdpi.h>
#include <fstream>

// 定义结束仿真的函数
extern "C" void simulation_exit() {
    Verilated::gotFinish(true); // 通知仿真器结束
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

void tick(Vysyx_24120009_core* top) {
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    Verilated::timeInc(1); // 增加仿真时间
}

void reset(Vysyx_24120009_core* top, int cycles) {
    top->rst = 1;
    for (int i = 0; i < cycles; ++i) {
        tick(top);
    }
    top->rst = 0;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vysyx_24120009_core* top = new Vysyx_24120009_core;

    // 检查是否传入了程序路径
    if (argc < 2) {
        std::cerr << "Program path not provided!" << std::endl;
        return -1;
    }

    // 从命令行参数加载程序
    load_program(argv[1]);

    // Reset
    reset(top, 10); // 复位保持 10 个周期

    std::cout << "AfterReset: "
                  << "PC = 0x" << std::hex << top->pc_debug
                  << ", x1 = " << std::hex << top->x1
                  << ", x2 = " << std::hex << top->x2
                  << ", x3 = " << std::hex << top->x3 << std::endl;

    int cycle = 0;
    do {
        // Fetch 阶段
        uint32_t pc = top->imem_addr;          
        top->imem_rdata = pmem_read(pc);       
        // Tick 时钟
        tick(top);
        // 输出状态
        std::cout << "Cycle: " << cycle
                  << ", PC = 0x" << std::hex << top->pc_debug
                  << ", x1 = " << std::hex << top->x1
                  << ", x2 = " << std::hex << top->x2
                  << ", x3 = " << std::hex << top->x3 
                  << ", Op1 = " << std::hex << top->Op1_debug
                  << ", Op2 = " << std::hex << top->Op2_debug
                  << std::endl;
        cycle++;
    } while(!Verilated::gotFinish() || cycle >=20);


    delete top;
    return 0;
}
