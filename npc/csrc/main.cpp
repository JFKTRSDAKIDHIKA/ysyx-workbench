#include "Vysyx_24120009_core.h" // 顶层模块的 Verilator 生成类
#include "verilated.h"
#include <ostream>
#include <iostream>

void pmem_write(uint32_t address, uint32_t data);
uint32_t pmem_read(uint32_t address);

void load_instructions() {
    // 示例：在存储器的开头放置若干条 addi 指令
    pmem_write(0, 0x00100093); // addi x1, x0, 1
    pmem_write(4, 0x00208113); // addi x2, x1, 2
    pmem_write(8, 0x00310193); // addi x3, x2, 3
    // 可以继续添加更多指令
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

    // 初始化存储器并加载指令
    load_instructions();

    // Reset
    reset(top, 10); // 复位保持 10 个周期


    for (int cycle = 0; cycle < 3; ++cycle) {
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
                  << ", x3 = " << std::hex << top->x3 << std::endl;
    }


    delete top;
    return 0;
}
