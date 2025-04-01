#ifndef MEMORY_H
#define MEMORY_H

#include <cstdint>
#include <vector>
// sdram_model
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <unordered_map>

#define  MROM_BASE_ADDR   0x20000000          // Base address of MROM
#define  MROM_SIZE  4096                      // 64KB MROM
#define  FLASH_BASE_ADDR  0x30000000          // Base address of FLASH
#define  FLASH_SIZE  0xfffffff                // 16MB FLASH

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

// SDRAM 
const int BANK_COUNT = 4;
const int ROW_COUNT = 1 << 13;  // 8192
const int COL_COUNT = 1 << 9;   // 512

class SDRAM {
    public:
        static void init(int instance_id);
        static void write(int instance_id, int bank, int row, int col, int data, int mask);
        static int read(int instance_id, int bank, int row, int col);
        
    private:
        static std::unordered_map<int, std::vector<std::vector<std::vector<uint16_t>>>> sdram_instances;
};

#endif // MEMORY_H

