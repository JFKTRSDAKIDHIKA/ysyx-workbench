#include <iostream>
#include <iomanip> 
#include <fstream>
#include "include/memory.h"
#include "include/program_loader.h"
#include "ELFIO/elfio/elfio.hpp"

void load_program(const char *program_path) {
    std::ifstream program_file(program_path, std::ios::binary);
    if (!program_file) {
        std::cerr << "Error opening program file: " << program_path << std::endl;
        return;
    }

    uint32_t address = BASE_ADDR; 
    uint32_t data;
    while (program_file.read(reinterpret_cast<char*>(&data), sizeof(data))) {
        Memory::pmem_write(address, data, 0xf);
        address += sizeof(data); 
    }
}