#ifndef DPI_INTERFACE_H
#define DPI_INTERFACE_H

#include <cstdint>

// DPI-C binding for memory read/write operations
extern "C" {
    void flash_read(int32_t addr, int32_t *data);
    void mrom_read(int32_t addr, int32_t *data);
    void write_mem(int instance_id, int bank, int row, int col, int data, int mask);
    int read_mem(int instance_id, int bank, int row, int col);
}

#endif // DPI_INTERFACE_H
