#ifndef DIFFTEST_H
#define DIFFTEST_H

#include <stdint.h>
#include <stdbool.h>

// Define the type for physical address
typedef uint32_t paddr_t;

// Define the CPU state structure
typedef struct {
    uint32_t gpr[32];
    uint32_t pc;
  } riscv32_CPU_state;

// Direction for register copy (DUT to REF or REF to DUT)
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

// Memory boundaries and reset vector
#define PMEM_LEFT  ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

// Declare the function pointers for the reference model's dynamic library functions
extern void (*ref_difftest_memcpy)(paddr_t dest, void *src, size_t n, bool direction);
extern void (*ref_difftest_meminit)(const char *img_file);
extern void (*ref_difftest_exec)(uint64_t n);
extern void (*ref_difftest_regcpy)(void *dut, bool direction);
extern void (*ref_difftest_raise_intr)(uint64_t NO);
extern void (*ref_difftest_init)(int port);

// Function to initialize the difftest library and get function pointers
void init_difftest(const char *ref_so_file, int port);

// Function to convert guest physical address to host address
uint8_t* guest_to_host(paddr_t paddr);

// Macro for colored output
#define RED     "\033[1;31m"
#define YELLOW  "\033[1;33m"
#define GREEN   "\033[1;32m"
#define BLUE    "\033[1;34m"
#define RESET   "\033[0m"
#define BOLD    "\033[1m"
#define COLOR_RED     "\033[31m"
#define COLOR_GREEN   "\033[32m"
#define COLOR_YELLOW  "\033[33m"
#define COLOR_BLUE    "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_CYAN    "\033[36m"
#define COLOR_RESET   "\033[0m"

#endif // DIFFTEST_H
