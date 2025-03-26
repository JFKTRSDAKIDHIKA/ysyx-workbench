#ifndef MEMORY_H
#define MEMORY_H

#include <cstdint>
#include <vector>

#define  MROM_BASE_ADDR   0x20000000          // Base address of MROM
#define  MROM_SIZE  4096                      // 64KB MROM
#define  FLASH_BASE_ADDR  0x30000000          // Base address of FLASH
#define  FLASH_SIZE  0xfffffff                // 16MB FLASH

// SDRAM 
const int BANK_COUNT = 4;
const int ROW_COUNT = 1 << 13;  // 8192
const int COL_COUNT = 1 << 9;   // 512

class Memory {
public:
    static std::vector<uint8_t> mrom;  // Declare memory as a static member
    static std::vector<uint8_t> flash;  // Declare memory as a static member
    static void pmem_write(uint32_t address, uint32_t data, char wmask);
    static uint32_t pmem_read(uint32_t address);
    static void init_flash();
private:
    static void write_memory_region(std::vector<uint8_t>& memory, uint32_t offset, uint32_t data, char write_mask);
};

#endif // MEMORY_H

