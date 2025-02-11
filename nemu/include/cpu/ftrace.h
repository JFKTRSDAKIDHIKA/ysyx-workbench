#ifndef FTRACE_H
#define FTRACE_H

#include <stdint.h>

extern const char* find_func(uint32_t addr);

void ftrace_call(uint32_t call_site, uint32_t target);

void ftrace_ret(uint32_t ret_site);

#endif // FTRACE_H
