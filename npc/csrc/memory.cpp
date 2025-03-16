#include "include/memory.h"
#include <iostream>

std::vector<uint8_t> Memory::mrom(MROM_SIZE, 0);  // Initialize mrom with size MROM_SIZE and set all elements to 0
std::vector<uint8_t> Memory::flash(FLASH_SIZE, 0);  // Initialize mrom with size MROM_SIZE and set all elements to 0

void Memory::write_memory_region(std::vector<uint8_t>& memory, uint32_t offset, uint32_t data, char write_mask) {
    if (write_mask & 0x1) {
        memory[offset] = data & 0xFF; // Write the least significant byte
    }
    if (write_mask & 0x2) {
        memory[offset + 1] = (data >> 8) & 0xFF; // Write the second byte
    }
    if (write_mask & 0x4) {
        memory[offset + 2] = (data >> 16) & 0xFF; // Write the third byte
    }
    if (write_mask & 0x8) {
        memory[offset + 3] = (data >> 24) & 0xFF; // Write the most significant byte
    }
}

// Function to read data from memory
uint32_t Memory::pmem_read(uint32_t address) {
    uint32_t offset;

    // Support both read from mrom and flash.
    if (address >= MROM_BASE_ADDR && address <= MROM_BASE_ADDR + MROM_SIZE) {
        offset = address - MROM_BASE_ADDR; // Calculate the offset

        // Read 4 bytes of data in little-endian format
        return mrom[offset] | (mrom[offset + 1] << 8) | 
        (mrom[offset + 2] << 16) | (mrom[offset + 3] << 24);

    } else if (address >= FLASH_BASE_ADDR && address <= FLASH_BASE_ADDR + FLASH_SIZE){
        offset = address - FLASH_BASE_ADDR;

        // Read 4 bytes of data in little-endian format
        return flash[offset] | (flash[offset + 1] << 8) | 
        (flash[offset + 2] << 16) | (flash[offset + 3] << 24);

    } else {
        std::cerr << "Memory read address invalid at address: " << address << std::endl;
        return 0;
    }
}

// Function to write data to flash(mrom does not support write action)
void Memory::pmem_write(uint32_t address, uint32_t data, char write_mask) {
    if (address >= MROM_BASE_ADDR && address <= MROM_BASE_ADDR + MROM_SIZE) {
        uint32_t offset = address - MROM_BASE_ADDR; // Calculate the offset
        write_memory_region(mrom, offset, data, write_mask);
    } else if (address >= FLASH_BASE_ADDR && address <= FLASH_BASE_ADDR + FLASH_SIZE) {
        uint32_t offset = address - FLASH_BASE_ADDR; // Calculate the offset
        write_memory_region(flash, offset, data, write_mask);
    } else {
        std::cerr << "Memory write address invalid at address: " << address << std::endl;
        return; // Return if the address is out of bounds
    }
}

// This function simulates the process of programming data into a flash chip.
void Memory::init_flash(){
    for (int i = 0; i <= FLASH_SIZE - 1; i = i + 4){
        uint32_t addr = i + FLASH_BASE_ADDR;
        pmem_write(addr, i+4, (char)0xf);
    }
}

