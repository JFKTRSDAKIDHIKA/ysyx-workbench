#include <cpu/cpu.h>

// iringbuf.c
#ifdef CONFIG_IRINGBUF

#include "cpu/iringbuf.h"
#include <stdio.h>
#include <string.h>
#include <cpu/decode.h>

// Ring buffer element
typedef struct {
  vaddr_t pc;
  char logbuf[128];
} IRingBufItem;

// Ring buffer declaration
static IRingBufItem iringbuf[IRINGBUF_SIZE] = {0};
static int iringbuf_index = 0;
static bool iringbuf_full = false;

// push instruction infomation into the ring buffer
void iringbuf_push(Decode *s) {
  IRingBufItem *slot = &iringbuf[iringbuf_index];
  slot->pc = s->pc;
  snprintf(slot->logbuf, sizeof(slot->logbuf), "%s", s->logbuf);

  iringbuf_index = (iringbuf_index + 1) % IRINGBUF_SIZE;
  if (iringbuf_index == 0) {
    iringbuf_full = true;
  }
}

// print the content of the ring buffer
void iringbuf_print() {
  printf("\n================ IRINGBUF DUMP ================\n");
  int start = iringbuf_full ? iringbuf_index : 0;
  int count = iringbuf_full ? IRINGBUF_SIZE : iringbuf_index;

  for (int i = 0; i < count; i++) {
    int idx = (start + i) % IRINGBUF_SIZE;
    IRingBufItem *slot = &iringbuf[idx];
    printf("%2d: PC = 0x%lx, Log: %s\n", i, (unsigned long)slot->pc, slot->logbuf);
  }
  printf("================ IRINGBUF END ================\n\n");
}

#endif // CONFIG_IRINGBUF