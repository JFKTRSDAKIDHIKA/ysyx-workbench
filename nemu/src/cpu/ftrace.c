#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include <stdint.h>

// extern bool ftrace_enabled;
extern const char* find_func(uint32_t addr);

// 简单的栈来保存调用层级
#define CALL_STACK_SIZE 1024
static const char *call_stack[CALL_STACK_SIZE];
static int call_stack_top = 0;

// 调用时压栈
static void push_func(const char *func_name) {
  if(call_stack_top < CALL_STACK_SIZE) {
    call_stack[call_stack_top++] = func_name;
  }
  else {
    // 栈满了？可以做一些异常处理
    printf("ftrace: call stack overflow!\n");
  }
}

// 返回时弹栈
static const char *pop_func() {
  if(call_stack_top > 0) {
    return call_stack[--call_stack_top];
  }
  return "???";
}

// 对外暴露的钩子，用于 jal/jalr 指令发现要跳转时调用
void ftrace_call(uint32_t call_site, uint32_t target) {
  // if(!ftrace_enabled) return;
  const char *callee = find_func(target);
  // const char *caller = find_func(call_site);
  printf("0x%08x: call [%s@0x%x]\n", call_site, callee, target);
  push_func(callee);
}

void ftrace_ret(uint32_t ret_site) {
  // if(!ftrace_enabled) return;
  // const char *current_func = find_func(ret_site);
  // 一般我们希望 ret 对应的是从当前函数返回
  // 但也可能存在嵌套深的情况
  const char *popped = pop_func();
  printf("0x%08x: ret  [%s]\n", ret_site, popped);
  // 如果你想确认 popped 是否与 current_func 一致，可做对比
}
