#ifndef REGISTERS_H
#define REGISTERS_H

#include <cstdint>

extern uint32_t rf_values[32]; 
extern const char *regs[];
void set_register_values(uint32_t rf[32]);  
void print_register_values();  

extern "C" void get_register_values(uint32_t rf[32]);

#endif // REGISTERS_H
