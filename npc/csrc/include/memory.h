#ifndef MEMORY_H
#define MEMORY_H

#include <cstdint>
#include <vector>

#define  MROM_BASE_ADDR   0x20000000          // Base address of MROM
#define  MROM_SIZE  4096                      // 64KB MROM
#define  FLASH_BASE_ADDR  0x30000000          // Base address of FLASH
#define  FLASH_SIZE  0xfffffff                // 16MB FLASH
#define  MEMORY_SIZE (FLASH_SIZE + MROM_SIZE) // Memory size need to simulate


class Memory {
public:
    static std::vector<uint8_t> memory;  // Declare memory as a static member
    static void pmem_write(uint32_t address, uint32_t data, char wmask);
    static uint32_t pmem_read(uint32_t address);
};

#endif // MEMORY_H

