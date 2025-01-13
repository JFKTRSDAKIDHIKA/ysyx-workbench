#include <cstdint>
#include <vector>
#include <iostream>

const uint32_t BASE_ADDR = 0x80000000;       // 存储器的基地址
const int MEMORY_SIZE = 1024 * 64; // 假设 64KB 存储器
std::vector<uint8_t> memory(MEMORY_SIZE, 0); // 初始化存储器

// 读取指令的函数
uint32_t pmem_read(uint32_t address) {
    uint32_t offset = address - BASE_ADDR; // 计算偏移量

    // 将地址限制在存储器范围内
    if (offset + 3 >= MEMORY_SIZE) {
        std::cerr << "Memory read out of bounds at address: " << offset << std::endl;
        return 0;
    }

    // 按小端序读取 4 字节数据
    return memory[offset] | (memory[offset + 1] << 8) | 
           (memory[offset + 2] << 16) | (memory[offset + 3] << 24);
}

// 写入数据的函数（可选，用于调试或扩展）
void pmem_write(uint32_t address, uint32_t data) {
    if (address + 3 >= MEMORY_SIZE) {
        std::cerr << "Memory write out of bounds at address: " << address << std::endl;
        return;
    }
    memory[address] = data & 0xFF;
    memory[address + 1] = (data >> 8) & 0xFF;
    memory[address + 2] = (data >> 16) & 0xFF;
    memory[address + 3] = (data >> 24) & 0xFF;
}
