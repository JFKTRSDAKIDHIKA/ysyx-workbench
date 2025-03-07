#include <iostream>
#include <iomanip>
#include "include/registers.h"

uint32_t rf_values[32];  // define the register values array

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


