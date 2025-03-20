#ifndef NPC_H__
#define NPC_H__

// USAR
#define UART_BASE 0x10000000
#define UART_TX   (UART_BASE + 0x0)     // Transmitter Holding Register (THR)
#define UART_LCR  (UART_BASE + 0x03)    // Line Control Register
#define UART_DLL  (UART_BASE + 0x00)    // Divisor Latch Byte 1
#define UART_DLM  (UART_BASE + 0x01)    // Divisor Latch Byte 2 
#define UART_IER  (UART_BASE + 0x01)    // Interrupt enable
#define UART_LSR  (UART_BASE + 0x05)    // Line status register
#define UART_LSR_THRE  (1 << 5)         // Transmit FIFO is empty bit
#define UART_FCR  (UART_BASE + 0x02)    // FIFO Control Register
#define UART_FCR_CLEAR_RX     (1 << 1)  // Clear receiver FIFO
#define UART_FCR_CLEAR_TX     (1 << 2)  // Clear transmitter FIFO

// SRAM
#define SRAM_SIZE 8192

// PSRAM
#define PSRAM_BASR 0x80000000
#define PSRAM_TOP 0x9fffffff
#define PSRAM_TEST_SIZE 0x400000

//SDRAM
#define SDRAM_BASR 0xa0000000
#define SDRAM_TEST_SIZE 0x10000

#endif