#include <dlfcn.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "include/difftest.h"
#include "include/memory.h"

void (*ref_difftest_memcpy)(paddr_t dest, void *src, size_t n, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;
void (*ref_difftest_init)(int port) = NULL;

void diff_test_sync_mrom(){
  ref_difftest_memcpy(BASE_ADDR, Memory::memory.data(), MEMORY_SIZE, DIFFTEST_TO_REF);
}

// Function to initialize difftest
void init_difftest(const char *ref_so_file, int port) {
  // Open the dynamic library
  void *handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle != NULL && "Failed to load reference dynamic library!");

  // Get the function pointers
  ref_difftest_memcpy = (void (*)(paddr_t, void *, size_t, bool))dlsym(handle, "difftest_memcpy");
  ref_difftest_regcpy = (void (*)(void *, bool))dlsym(handle, "difftest_regcpy");
  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  ref_difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
  ref_difftest_init = (void (*)(int))dlsym(handle, "difftest_init");

  // Check if all functions are successfully loaded
  assert(ref_difftest_memcpy != NULL && "Failed to get function difftest_memcpy!");
  assert(ref_difftest_regcpy != NULL && "Failed to get function difftest_regcpy!");
  assert(ref_difftest_exec != NULL && "Failed to get function difftest_exec!");
  assert(ref_difftest_raise_intr != NULL && "Failed to get function difftest_raise_intr!");
  assert(ref_difftest_init != NULL && "Failed to get function difftest_init!");

  // Call the init function
  ref_difftest_init(port);

  // Copy MROM content to NEMU for DiffTest initialization
  diff_test_sync_mrom();
}





