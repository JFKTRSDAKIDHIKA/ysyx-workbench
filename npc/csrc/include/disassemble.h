#ifndef DISASSEMBLE_H
#define DISASSEMBLE_H

#include <iostream>
#include <iomanip>
#include <string>    
#include <cstdint>   

std::string disassemble_instruction(uint32_t inst);

#endif