#include "/home/jiashuao/Desktop/ysyx-workbench/abstract-machine/klib/include/klib.h"
#include <stdint.h>
#include "/home/jiashuao/Desktop/ysyx-workbench/abstract-machine/am/src/riscv/npc/include/npc.h"

extern char _heap_start;
extern char _sram_start;
extern void halt(void);
#define SRAM_END  ((uintptr_t)&_sram_start + SRAM_SIZE)

void write_memory(uintptr_t start, uintptr_t end, uint8_t len) {
    uintptr_t i;
    for (i = start; i < end; i += len) {
        switch (len) {
            case 1:
                *((uint8_t *)i) = (uint8_t)i & 0xFF;
                break;
            case 2:
                *((uint16_t *)i) = (uint16_t)i & 0xFFFF;
                break;
            case 4:
                *((uint32_t *)i) = (uint32_t)i & 0xFFFFFFFF;
                break;
            default:
                halt();
        }
    }
}

int main() {
    int heap_size = SRAM_END - _heap_start;
    write_memory((uintptr_t)start_addr, (uintptr_t)SRAM_END, 1);

    return 0;
}