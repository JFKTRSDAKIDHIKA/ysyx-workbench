/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include "../monitor/sdb/watchpoint.h"

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;
void device_update();

static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif

#ifdef CONFIG_WATCHPOINT
  if (check_watchpoint()) {
    // 检查是否有监视点相应表达式的值发生变化
    // 20241211修改：当程序执行结束以后，不能再把nemu_state.state改为暂停（stop状态）
    if (nemu_state.state != NEMU_END && nemu_state.state != NEMU_ABORT && nemu_state.state != NEMU_QUIT)
      nemu_state.state = NEMU_STOP;
  }  
#endif
  
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
}

static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;
#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst;
#ifdef CONFIG_ISA_x86
  for (i = 0; i < ilen; i ++) {
#else
  for (i = ilen - 1; i >= 0; i --) {
#endif
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst, ilen);
#endif
}

static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
#ifdef CONFIG_IRINGBUF
    iringbuf_push(&s);          // 将当前指令信息写入环形缓冲区
#endif
    trace_and_difftest(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

#ifdef CONFIG_IRINGBUF

// 环形缓冲区元素，用于保存一条指令的关键信息
typedef struct {
  vaddr_t pc;           // 该指令的 PC
  char logbuf[128];     // 用于存储反汇编结果或调试日志
} IRingBufItem;

// 定义环形缓冲区数组
static IRingBufItem iringbuf[IRINGBUF_SIZE] = {0};
static int iringbuf_index = 0;  // 环形缓冲区当前写入位置
static bool iringbuf_full = false; // 标记是否已经写满过一轮

static void iringbuf_push(Decode *s) {
  // 将当前指令信息写入环形缓冲区
  IRingBufItem *slot = &iringbuf[iringbuf_index];
  slot->pc = s->pc;
  // 将 s->logbuf（里存有：PC、机器码、反汇编等信息）复制进来
  // s->logbuf 由 exec_once() 中组装好
  strncpy(slot->logbuf, s->logbuf, sizeof(slot->logbuf) - 1);
  slot->logbuf[sizeof(slot->logbuf) - 1] = '\0';

  // 更新索引
  iringbuf_index = (iringbuf_index + 1) % IRINGBUF_SIZE;
  if (iringbuf_index == 0) {
    iringbuf_full = true;
  }
}

// 辅助函数：打印环形缓冲区内容
// 当出现访存越界或其他错误，需要调试时调用此函数
static void iringbuf_print() {
  printf("\n================ IRINGBUF DUMP ================\n");

  // 如果还没写满过，说明缓冲区只有从 0 到 iringbuf_index-1 的内容
  // 如果已经写满，说明缓冲区已循环过一轮，需要从 iringbuf_index 开始打印
  int start = iringbuf_full ? iringbuf_index : 0;
  int count = iringbuf_full ? IRINGBUF_SIZE : iringbuf_index;

  // 逐条输出指令信息，顺序是最先写入 -> 最后写入
  for (int i = 0; i < count; i++) {
    int idx = (start + i) % IRINGBUF_SIZE;
    IRingBufItem *slot = &iringbuf[idx];
    printf("%2d: %s\n", i, slot->logbuf);
  }

  printf("================ IRINGBUF END ================\n\n");
}

#endif // CONFIG_IRINGBUF


void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT: case NEMU_QUIT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;
    
    case NEMU_STOP: break;

    case NEMU_END: case NEMU_ABORT:
      // 在程序正常结束或者出现错误（ABORT）时，都可以打印出最近指令
#ifdef CONFIG_IRINGBUF
      iringbuf_print(); 
#endif
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}
