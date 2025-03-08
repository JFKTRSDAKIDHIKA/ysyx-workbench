#ifndef MEMORY_H
#define MEMORY_H

#include <cstdint>
#include <vector>

#define  BASE_ADDR  0x20000000                     // Base address of the memory
#define  MEMORY_SIZE  4096                         // 64KB memory

class Memory {
public:
    static std::vector<uint8_t> memory;  // Declare memory as a static member
    static void pmem_write(uint32_t address, uint32_t data, char wmask);
    static uint32_t pmem_read(uint32_t address);
};

#endif // MEMORY_H

