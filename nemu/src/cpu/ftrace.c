#ifdef CONFIG_FTRACE

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include <stdint.h>

// extern bool ftrace_enabled;
extern const char* find_func(uint32_t addr);

// simple call stack
#define CALL_STACK_SIZE 1024
static const char *call_stack[CALL_STACK_SIZE];
static int call_stack_top = 0;

// push function name to call stack
static void push_func(const char *func_name) {
  if(call_stack_top < CALL_STACK_SIZE) {
    call_stack[call_stack_top++] = func_name;
  }
  else {
    // call stack overflow
    printf("ftrace: call stack overflow!\n");
  }
}

// pop function name from call stack
static const char *pop_func() {
  if(call_stack_top > 0) {
    return call_stack[--call_stack_top];
  }
  return "???";
}

// helper function to print spaces according to the current stack depth
static void print_indent() {
  for (int i = 0; i < call_stack_top; i++) {
    printf("  ");  // print 2 spaces for each level in the call stack
  }
}

// 对外暴露的钩子，用于 jal/jalr 指令发现要跳转时调用
void ftrace_call(uint32_t call_site, uint32_t target) {
  const char *callee = find_func(target);
  
  // Print indentation and the function call
  print_indent();
  printf("0x%08x: call [%s@0x%x]\n", call_site, callee, target);
  
  // Push the callee function onto the call stack
  push_func(callee);
}

// 对外暴露的钩子，用于函数返回时的处理
void ftrace_ret(uint32_t ret_site) {
  // Pop the current function from the call stack
  const char *popped = pop_func();
  
  // Print indentation and the function return
  print_indent();
  printf("0x%08x: ret  [%s]\n", ret_site, popped);
}

#endif