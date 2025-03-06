#include <iostream>
#include <fstream>
#include "include/memory.h"
#include "include/program_loader.h"
#include "ELFIO/elfio/elfio.hpp"


void load_program(const char *program_path) {

    ELFIO::elfio reader;

    if (!reader.load(program_path)) {
        std::cerr << "Failed to load ELF file: " << program_path << std::endl;
    }

    for (int i = 0; i < reader.sections.size(); ++i) {
        ELFIO::section* sec = reader.sections[i];

        if (sec->get_name() == ".text") {
            std::cout << "Found .text section!" << std::endl;
            std::cout << "Size: " << sec->get_size() << " bytes" << std::endl;

            const char* code = sec->get_data();
            if (code == nullptr) {
                std::cerr << "Failed to get .text section data!" << std::endl;
            }

            uint32_t address = 0x20000000; 

            for (int j = 0; j < sec->get_size(); ++j) {
                // printf("%02X ", (unsigned char)code[j]);
                Memory::pmem_write(address, code[j], 0x1);
                address += sizeof(code[j]); 
            }
            std::cout << std::endl;
            break;
        }
    }

}
