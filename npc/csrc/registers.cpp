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
    std::cout << "Register information:" << std::endl;
    std::cout << std::setw(5) << "Reg"   // Column title width for "Reg"
              << std::setw(10) << "Value" << std::endl; // Column title width for "Value"

    // Output the value of each register
    for (int i = 0; i < 32; ++i) {
        std::cout << std::setw(5)  // Width for "x" and register number
                  << "x" << i << ": " 
                  << std::setw(10)  // Width for the register value
                  << "0x" << std::setfill('0') << std::setw(8) << std::hex << rf_values[i] << std::endl;
    }
}


