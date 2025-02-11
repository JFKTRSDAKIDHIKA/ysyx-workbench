#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#define ALIGN(x) __attribute__((aligned(x)))
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

extern Area heap;

static uintptr_t cur_addr ALIGN(4) = 0;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

void *malloc(size_t size) {
  if (size == 0) return NULL;

  if (cur_addr == 0) {
    cur_addr = (uintptr_t)heap.start;
  }

  size = (size + 7) & ~7;

  if (cur_addr + size > (uintptr_t)heap.end) {
    return NULL;
  }

  void *ret = (void *)cur_addr;
  cur_addr += size;
  return ret;
}

void free(void *ptr) {
}

#endif
