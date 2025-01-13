#include "Vysyx_24120009_core.h" // 顶层模块的 Verilator 生成类
#include "verilated.h"
#include <ostream>
#include <iostream>
#include <svdpi.h>

// 定义结束仿真的函数
extern "C" void simulation_exit() {
    Verilated::gotFinish(true); // 通知仿真器结束
}

void pmem_write(uint32_t address, uint32_t data);
uint32_t pmem_read(uint32_t address);

void load_instructions() {
    // 示例：在存储器的开头放置若干条 addi 和 add 指令
    pmem_write(0, 0xfff00093); // addi x1, x0, -1   ; x1 = -1
    pmem_write(4, 0x00208113); // addi x2, x1, 2    ; x2 = x1 + 2
    pmem_write(8, 0x00208113); // addi x2, x1, 2    ; 再次赋值 x2 = x1 + 2
    pmem_write(12, 0x00310193); // addi x3, x2, 3   ; x3 = x2 + 3
    pmem_write(16, 0x002182b3); // add x5, x3, x2   ; x5 = x3 + x2
    pmem_write(20, 0x00218333); // add x6, x3, x2   ; x6 = x3 + x2
    pmem_write(24, 0x00410213); // addi x4, x2, 4   ; x4 = x2 + 4
    pmem_write(28, 0xfff20293); // addi x5, x4, -1  ; x5 = x4 - 1
    pmem_write(32, 0x005283b3); // add x7, x5, x5   ; x7 = x5 + x5
    pmem_write(36, 0x00100073); // ebreak           ; 结束仿真
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

    std::cout << "AfterReset: "
                  << "PC = 0x" << std::hex << top->pc_debug
                  << ", x1 = " << std::hex << top->x1
                  << ", x2 = " << std::hex << top->x2
                  << ", x3 = " << std::hex << top->x3 << std::endl;

    int cycle = 0;
    for(;cycle <= 4; cycle++){
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
    } 


    delete top;
    return 0;
}
