#include <iostream>
#include <iomanip>
#include "include/registers.h"

extern "C" void get_register_values(uint32_t rf[32]) {
    set_register_values(rf);  // set the register values
}

uint32_t rf_values[32];  // define the register values array
const char *regs[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
  };

void set_register_values(uint32_t rf[32]) {
    for (int i = 0; i < 64; i = i + 2) {
        rf_values[i/2] = rf[i];
    }
}

void print_register_values() {
    std::cout << "--------------------------------------" << std::endl;
    std::cout << "| Register Information              |" << std::endl;
    std::cout << "--------------------------------------" << std::endl;

    std::cout << std::left 
              << std::setw(6) << "Reg"   
              << std::setw(6) << "Name"  
              << std::setw(12) << "Value (HEX)" 
              << std::endl;

    std::cout << "--------------------------------------" << std::endl;

    for (int i = 0; i < 32; ++i) {
        std::cout << std::left << std::setw(6) << ("x" + std::to_string(i)) 
                  << std::setw(6) << regs[i]   
                  << "0x" << std::uppercase 
                  << std::setw(8) << std::setfill('0') << std::hex << rf_values[i] 
                  << std::setfill(' ')  
                  << std::endl;
    }
    
    std::cout << "--------------------------------------" << std::endl;
}


