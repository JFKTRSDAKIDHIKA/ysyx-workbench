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

// 环形缓冲区定义
#define IRINGBUF_SIZE 16  // 或从其他配置头文件引入
static IRingBufItem iringbuf[IRINGBUF_SIZE] = {0};
static int iringbuf_index = 0;
static bool iringbuf_full = false;

// 将指令信息推入缓冲区
void iringbuf_push(Decode *s) {
  IRingBufItem *slot = &iringbuf[iringbuf_index];
  slot->pc = s->pc;
  strncpy(slot->logbuf, s->logbuf, sizeof(slot->logbuf) - 1);
  slot->logbuf[sizeof(slot->logbuf) - 1] = '\0';

  iringbuf_index = (iringbuf_index + 1) % IRINGBUF_SIZE;
  if (iringbuf_index == 0) {
    iringbuf_full = true;
  }
}

// 打印缓冲区内容
void iringbuf_print() {
  printf("\n================ IRINGBUF DUMP ================\n");
  int start = iringbuf_full ? iringbuf_index : 0;
  int count = iringbuf_full ? IRINGBUF_SIZE : iringbuf_index;

  for (int i = 0; i < count; i++) {
    int idx = (start + i) % IRINGBUF_SIZE;
    IRingBufItem *slot = &iringbuf[idx];
    printf("%2d: %s\n", i, slot->logbuf);
  }
  printf("================ IRINGBUF END ================\n\n");
}

#endif // CONFIG_IRINGBUF