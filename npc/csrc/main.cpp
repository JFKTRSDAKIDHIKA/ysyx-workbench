#include "Vysyx_24120009_core.h" // 顶层模块的 Verilator 生成类
#include "verilated.h"

void pmem_write(uint32_t address, uint32_t data);
uint32_t pmem_read(uint32_t address);

void load_instructions() {
    // 示例：在存储器的开头放置若干条 addi 指令
    pmem_write(0, 0x00100093); // addi x1, x0, 1
    pmem_write(4, 0x00208113); // addi x2, x1, 2
    pmem_write(8, 0x00310193); // addi x3, x2, 3
    // 可以继续添加更多指令
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vysyx_24120009_core* top = new Vysyx_24120009_core;

    // 初始化存储器并加载指令
    load_instructions();

    // Reset
    top->rst = 1;
    int n = 10;
    while (n >= 0) {
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
        n--;
    }
    top->rst = 0;

    // 仿真循环，只运行三个指令
    for (int cycle = 0; cycle < 3; ++cycle) {
        uint32_t pc = top->imem_addr;           // 从顶层模块读取 PC
        top->imem_rdata = pmem_read(pc);       // 根据 PC 从存储器读取指令
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();

        Verilated::timeInc(1);                 // 增加仿真时间
    }

    delete top;
    return 0;
}
