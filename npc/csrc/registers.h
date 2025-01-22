#ifndef REGISTERS_H
#define REGISTERS_H

extern int rf_values[32];  // 声明寄存器值数组

void set_register_values(int rf[32]);  // 设置寄存器值
void print_register_values();  // 打印寄存器值

#endif // REGISTERS_H
