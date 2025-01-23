#ifndef REGISTERS_H
#define REGISTERS_H

#include <cstdint>

extern uint32_t rf_values[32];  // 声明寄存器值数组

void set_register_values(uint32_t rf[32]);  // 设置寄存器值
void print_register_values();  // 打印寄存器值

#endif // REGISTERS_H
