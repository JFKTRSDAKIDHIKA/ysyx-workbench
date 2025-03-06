#include "program_loader.h"
#include <iostream>
#include <fstream>
#include "memory.h"

void load_program(const char *program_path) {
    std::ifstream program_file(program_path, std::ios::binary);
    if (!program_file) {
        std::cerr << "Error opening program file: " << program_path << std::endl;
        return;
    }

    uint32_t address = 0x20000000; 
    uint32_t data;
    int t = 0;
    while (program_file.read(reinterpret_cast<char*>(&data), sizeof(data))) {
        t++;
        if(t!=2)
        Memory::pmem_write(address, data, 0xf);
        address += sizeof(data); 
    }
}
