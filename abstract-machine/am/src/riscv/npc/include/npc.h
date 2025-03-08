#ifndef NPC_H__
#define NPC_H__

// USAR
#define UART_BASE 0x10000000L
#define UART_TX   (UART_BASE + 0x0)   // Transmitter Holding Register (THR)
#define UART_LCR  (UART_BASE + 0x03)  // Line Control Register
#define UART_DLL  (UART_BASE + 0x00)  // Divisor Latch Byte 1
#define UART_DLM  (UART_BASE + 0x01)  // Divisor Latch Byte 2 

// SRAM
#define SRAM_SIZE 8192

#endif