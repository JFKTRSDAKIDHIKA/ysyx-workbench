#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include "../riscv.h"
#include "include/npc.h"

extern char _heap_start;
extern char _sram_start;
extern char _data_lma;    /* LMA（加载地址）来自 mrom */
extern char _data;        /* VMA（运行时地址）在 sram */
extern char _edata;    
extern char _ebss;
extern char _bss_start;

int main(const char *args);
#define SRAM_END  ((uintptr_t)&_sram_start + SRAM_SIZE)

Area heap = RANGE(&_heap_start, SRAM_END);
static const char mainargs[MAINARGS_MAX_LEN] = MAINARGS_PLACEHOLDER; // defined in CFLAGS

void putch(char ch) {
  outb(UART_TX, ch);
}

void halt(int code) {
  __asm__ volatile("ebreak"); 
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

void init_uart() {
  // Set the 7th (DLAB) bit of the Line Control Register to ‘1’.
  // The divisor latches can be accessed.
  outb(UART_LCR, 0x80);

  // Set Baud rate
  outb(UART_DLL, 0x11); 
  outb(UART_DLM, 0x11); 

  // Exit DLAB, and set 8-N-1 configration
  outb(UART_LCR, 0x03);
}

void _trm_init() {
  crt0_init();
  //init_uart();
  int ret = main(mainargs);
  halt(ret);
}
    


