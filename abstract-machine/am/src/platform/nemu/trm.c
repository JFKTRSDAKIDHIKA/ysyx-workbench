#include <am.h>
#include <nemu.h>
#include <klib.h>

extern char _heap_start;
extern char _data_lma;    /* LMA（加载地址）来自 mrom */
extern char _data;        /* VMA（运行时地址）在 sram */
extern char _edata;    
extern char _ebss;
extern char _bss_start;

int main(const char *args);

Area heap = RANGE(&_heap_start, PMEM_END);
static const char mainargs[MAINARGS_MAX_LEN] = MAINARGS_PLACEHOLDER; // defined in CFLAGS

void putch(char ch) {
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  nemu_trap(code);

  // should not reach here
  while (1);
}

void crt0_init() {
  // Copy .data section
  if (&_edata > &_data) {
    size_t data_size = (uintptr_t)&_edata - (uintptr_t)&_data;
    memcpy(&_data, &_data_lma, data_size);
  }

  // Zero out .bss section
  if (&_ebss > &_bss_start) {
    size_t bss_size = (uintptr_t)&_ebss - (uintptr_t)&_bss_start;
    memset(&_bss_start, 0, bss_size);
  }
}

void _trm_init() {
  crt0_init();
  int ret = main(mainargs);
  halt(ret);
}
