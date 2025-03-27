#ifndef __SRAM_FLASH_H__
#define __SRAM_FLASH_H__

// Add sram and flash to NEMU
// SRAM
#define CONFIG_SRAM_SIZE_KB 8
#define CONFIG_SRAM_BASE  0x0f000000
#define CONFIG_SRAM_TOP  CONFIG_SRAM_BASE + 1024 * CONFIG_SRAM_SIZE_KB
// FLASH
#define CONFIG_FLASH_SIZE_KB 262144
#define CONFIG_FLASH_BASE  0x30000000
#define CONFIG_FLASH_TOP  0x3fffffff
// SDRAM
#define CONFIG_SDRAM_SIZE_KB 4096*32
#define CONFIG_SDRAM_BASE  0xa0000000
#define CONFIG_SDRAM_TOP  0xbfffffff
// Range check
#define IS_SDRAM_ADDR(addr) \
    ((addr) >= CONFIG_SDRAM_BASE && (addr) <= CONFIG_SDRAM_TOP)
#define IS_SRAM_ADDR(addr) \
    ((addr) >= CONFIG_SRAM_BASE && (addr) <= CONFIG_SRAM_TOP)
#define IS_FLASH_ADDR(addr) \
    ((addr) >= CONFIG_FLASH_BASE && (addr) <= CONFIG_FLASH_TOP)

#endif