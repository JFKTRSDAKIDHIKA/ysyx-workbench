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

#endif // DIFFTEST_H
