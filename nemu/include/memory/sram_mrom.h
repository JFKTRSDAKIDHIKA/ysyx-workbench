#ifndef __SRAM_MROM_H__
#define __SRAM_MROM_H__

// Add sram and mrom to NEMU
#define CONFIG_SRAM_SIZE_KB 8
#define CONFIG_SRAM_BASE  0x0f000000
#define CONFIG_SRAM_TOP  CONFIG_SRAM_BASE + 1024 * CONFIG_SRAM_SIZE_KB
#define CONFIG_MROM_SIZE_KB 4
#define CONFIG_MROM_BASE  0x20000000
#define CONFIG_MROM_TOP  0x20000fff
#define IS_SRAM_ADDR(addr) \
    ((addr) >= CONFIG_SRAM_BASE && (addr) <= CONFIG_SRAM_TOP)
#define IS_MROM_ADDR(addr) \
    ((addr) >= CONFIG_MROM_BASE && (addr) <= CONFIG_MROM_TOP)

#endif