#ifndef MTRACE_H
#define MTRACE_H

#include <vector>
#include <iostream>
#include <iomanip>
#include <cstdint>

#define MTRACE_SIZE 10  

struct MemoryTraceEntry {
    uint32_t addr;   
    uint32_t data;   
    bool is_load;    
    bool is_store;  
};

class MemoryTrace {
private:
    std::vector<MemoryTraceEntry> trace_buffer;
    int trace_index = 0;
    bool buffer_full = false;

public:
    void addEntry(uint32_t addr, uint32_t data, bool is_load, bool is_store);
    void printTrace() const;
};

#endif
