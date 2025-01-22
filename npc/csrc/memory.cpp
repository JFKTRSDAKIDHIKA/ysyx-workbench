#include "memory.h"
#include <iostream>

const uint32_t BASE_ADDR = 0x80000000;       // Base address of the memory
const int MEMORY_SIZE = 1024 * 64;           // 64KB memory
std::vector<uint8_t> Memory::memory(MEMORY_SIZE, 0); // Initialize memory with size MEMORY_SIZE and set all elements to 0


// Function to read data from memory
uint32_t Memory::pmem_read(uint32_t address) {
    uint32_t offset = address - BASE_ADDR; // Calculate the offset

    // Check if the address is within the memory range
    if (offset + 3 >= MEMORY_SIZE) {
        std::cerr << "Memory read out of bounds at address: " << address << std::endl;
        return 0; // Return 0 if the address is out of bounds
    }

    // Read 4 bytes of data in little-endian format
    return memory[offset] | (memory[offset + 1] << 8) | 
           (memory[offset + 2] << 16) | (memory[offset + 3] << 24);
}


// Function to write data to memory
void Memory::pmem_write(uint32_t address, uint32_t data) {
    uint32_t offset = address - BASE_ADDR; // Calculate the offset

    // Check if the address is within the memory range
    if (offset + 3 >= MEMORY_SIZE) {
        std::cerr << "Memory write out of bounds at address: " << address << std::endl;
        return; // Return if the address is out of bounds
    }

    // Write 4 bytes of data in little-endian format
    memory[offset] = data & 0xFF;
    memory[offset + 1] = (data >> 8) & 0xFF;
    memory[offset + 2] = (data >> 16) & 0xFF;
    memory[offset + 3] = (data >> 24) & 0xFF;
}


