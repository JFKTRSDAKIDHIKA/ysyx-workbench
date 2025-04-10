#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      // value in mcause is not standard 
      // case 0x8: 
      //   ev.event = EVENT_YIELD; 
      //   c->mepc += 4;
      //   break;
      default: ev.event = EVENT_ERROR; break;
    }

    // Not standard approach
    ev.event = EVENT_YIELD; 
    c->mepc += 4;

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  Context *c = (Context *)((uintptr_t)kstack.end - sizeof(Context));
  c->mepc = (uintptr_t)entry;
  c->gpr[2] = (uintptr_t)kstack.end;
  c->gpr[10] = (uintptr_t)arg;  
  return c;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
