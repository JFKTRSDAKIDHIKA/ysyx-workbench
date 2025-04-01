#include "include/dpi_interface.h"
#include "include/memory.h"  

extern "C" void flash_read(int32_t addr, int32_t *data) {
    *data = Memory::pmem_read(addr + FLASH_BASE_ADDR);
}

extern "C" void mrom_read(int32_t addr, int32_t *data) { 
    *data = Memory::pmem_read(addr); 
}

extern "C" void write_mem(int instance_id, int bank, int row, int col, int data, int mask) {
    SDRAM::write(instance_id, bank, row, col, data, mask);
}

extern "C" int read_mem(int instance_id, int bank, int row, int col) {
    return SDRAM::read(instance_id, bank, row, col);
}
