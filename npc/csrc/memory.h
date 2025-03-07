#ifndef MEMORY_H
#define MEMORY_H

#include <cstdint>
#include <vector>

class Memory {
public:
    static std::vector<uint8_t> memory;  // Declare memory as a static member
    static void pmem_write(uint32_t address, uint32_t data, char wmask);
    static uint32_t pmem_read(uint32_t address);
};

#endif // MEMORY_H

