#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include "../riscv.h"
#include "include/npc.h"
#include <stdio.h>

extern char _heap_start;
extern char _psram_start;
extern char _psram_end;

Area heap = RANGE(&_heap_start, &_psram_end);
static const char mainargs[MAINARGS_MAX_LEN] = MAINARGS_PLACEHOLDER; // defined in CFLAGS

void putch(char ch) {
  while ((inb(UART_LSR) & UART_LSR_THRE) == 0);
  outb(UART_TX, ch);
}

void halt(int code) {
  __asm__ volatile("ebreak"); 
  while (1);
}

__attribute__((section(".SSBL")))
void second_stage_boot_loader() {
  // External symbols
  extern char _etext, _text, _text_lma;
  extern char _edata, _data, _data_lma;
  extern int main(const char *args);

  // Copy .text section
  if (&_etext > &_text) {
    uint32_t *src = (uint32_t *)&_text_lma;  // Source addr in Flash
    uint32_t *dst = (uint32_t *)&_text;      // Target addr in PSRAM 
    unsigned long text_size = (uintptr_t)&_etext - (uintptr_t)&_text;
    
    // Copy in 4-byte chunks
    unsigned long word_count = text_size / 4;
    while (word_count--) {
        *dst++ = *src++;
    }
    
    // Handle remaining bytes (if size not multiple of 4)
    unsigned long remainder = text_size % 4;
    if (remainder) {
        char *byte_src = (char *)src;
        char *byte_dst = (char *)dst;
        while (remainder--) {
            *byte_dst++ = *byte_src++;
        }
    }
  }

  // Copy .data section
  if (&_edata > &_data) {
    uint32_t *src = (uint32_t *)&_data_lma;
    uint32_t *dst = (uint32_t *)&_data;
    unsigned long data_size = (uintptr_t)&_edata - (uintptr_t)&_data;
    
    // Copy in 4-byte chunks
    unsigned long word_count = data_size / 4;
    while (word_count--) {
        *dst++ = *src++;
    }
    
    // Handle remaining bytes (if size not multiple of 4)
    unsigned long remainder = data_size % 4;
    if (remainder) {
        char *byte_src = (char *)src;
        char *byte_dst = (char *)dst;
        while (remainder--) {
            *byte_dst++ = *byte_src++;
        }
    }
  }

  // Jump to main with mainargs as parameter
  __asm__ volatile (
    "mv t0, %0\n\t"      
    "mv a0, %1\n\t"      
    "jalr t0"            
    :                    
    : "r"(&main), "r"(mainargs)  
    : "t0", "a0"        
  );

  __asm__ volatile ("ebreak");
  while (1); 
}

__attribute__((section(".SSBL")))
void init_uart() {  
  // Set the 7th (DLAB) bit of the Line Control Register to ‘1’.
  // The divisor latches can be accessed.
  outb(UART_LCR, (char)0x80);

  // Set Baud rate
  outb(UART_DLM, (char)0x00); 
  outb(UART_DLL, (char)0x01); 

  // Exit DLAB, and set 8-N-1 configration
  outb(UART_LCR, (char)0x03);

  // Clear fifo
  outb(UART_FCR, UART_FCR_CLEAR_RX | UART_FCR_CLEAR_TX);

  // Disable interrupt
  outb(UART_IER, (char)0x00);
}

__attribute__((section(".SSBL")))
void _trm_init() {
  //init_uart();
  second_stage_boot_loader();
}

__attribute__((section(".FSBL")))
void first_stage_boot_loader() {
  // External symbols
  extern char _eSSBL, _SSBL, _SSBL_lma;

  // Copy .SSBL section
  if (&_eSSBL > &_SSBL) {
    char *src = &_SSBL_lma;  // Source addr in Flash
    char *dst = &_SSBL;      // Target addr in SRAM 
    unsigned long SSBL_size = (uintptr_t)&_eSSBL - (uintptr_t)&_SSBL;

    // Copy bytes
    while (SSBL_size--) {
      *dst++ = *src++;
    }
  }

  // Jump to main with mainargs as parameter
  __asm__ volatile (
    "mv t0, %0\n\t"      
    "jalr t0"            
    :                    
    : "r"(&_trm_init)
    : "t0"      
  );
}

    

