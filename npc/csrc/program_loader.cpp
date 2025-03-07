#include <iostream>
#include <iomanip> 
#include <fstream>
#include "include/memory.h"
#include "include/program_loader.h"
#include "ELFIO/elfio/elfio.hpp"

void load_program(const char *program_path) {
    ELFIO::elfio reader;

    if (!reader.load(program_path)) {
        std::cerr << "Failed to load ELF file: " << program_path << std::endl;
    }

    uint32_t address = 0x20000000; 

    // Load .text from elf to MROM
    for (int i = 0; i < reader.sections.size(); ++i) {
        ELFIO::section* sec = reader.sections[i];

        if (sec->get_name() == ".text") {
            const char* code = sec->get_data();
            if (code == nullptr) {
                std::cerr << "Failed to get .text section data!" << std::endl;
            }

            std::cout << "Loading .text section to MROM: 0x" << std::setw(8) << std::setfill('0') << std::hex << address <<std::endl;
            for (int j = 0; j < sec->get_size(); ++j) {
                // printf("%02X ", (unsigned char)code[j]);
                Memory::pmem_write(address, code[j], 0x1);
                address += sizeof(code[j]); 
            }
            break;
        }
    }

    // Load .data from elf to MROM
    for (int i = 0; i < reader.sections.size(); ++i) {
        ELFIO::section* sec = reader.sections[i];

        if (sec->get_name() == ".data") {
            const char* code = sec->get_data();
            if (code == nullptr) {
                std::cerr << "Failed to get .data section data!" << std::endl;
            }

            std::cout << "Loading .data section to MROM: 0x" << std::setw(8) << std::setfill('0') << std::hex << address <<std::endl;
            for (int j = 0; j < sec->get_size(); ++j) {
                // printf("%02X ", (unsigned char)code[j]);
                Memory::pmem_write(address, code[j], 0x1);
                address += sizeof(code[j]); 
            }
            break;
        }
    }

    
    // Load .bbs from elf to MROM
    for (int i = 0; i < reader.sections.size(); ++i) {
        ELFIO::section* sec = reader.sections[i];

        if (sec->get_name() == ".bbs") {
            const char* code = sec->get_data();
            if (code == nullptr) {
                std::cerr << "Failed to get .bbs section data!" << std::endl;
            }

            std::cout << "Loading .bbs section to MROM: 0x" << std::setw(8) << std::setfill('0') << std::hex << address <<std::endl;
            for (int j = 0; j < sec->get_size(); ++j) {
                // printf("%02X ", (unsigned char)code[j]);
                Memory::pmem_write(address, code[j], 0x1);
                address += sizeof(code[j]); 
            }
            break;
        }
    }
}
