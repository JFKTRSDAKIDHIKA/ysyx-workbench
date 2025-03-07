#include <am.h>
#include <nemu.h>
#include <klib.h>

extern char _heap_start;
extern char _data_lma;    /* LMA（加载地址）来自 mrom */
extern char _data;        /* VMA（运行时地址）在 sram */
extern char _edata;      
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

void copy_data() {
  uint32_t *src = (uint32_t *)&_data_lma;
  uint32_t *dst = (uint32_t *)&_data;
  uint32_t len = &_edata - &_data;

  memcpy((void *)dst, (void *)src, len);
}

void _trm_init() {
  copy_data();
  int ret = main(mainargs);
  halt(ret);
}
