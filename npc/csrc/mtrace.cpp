#include "include/mtrace.h"

void MemoryTrace::addEntry(uint32_t addr, uint32_t data, bool is_load, bool is_store) {
    if (!is_load && !is_store) return;  

    if (trace_buffer.size() < MTRACE_SIZE) {
        trace_buffer.push_back({addr, data, is_load, is_store});
    } else {
        trace_buffer[trace_index] = {addr, data, is_load, is_store};
        trace_index = (trace_index + 1) % MTRACE_SIZE;
        buffer_full = true;
    }
}

void MemoryTrace::printTrace() const {
    std::cout << "Memory Trace (Most Recent First):\n";
    int start = buffer_full ? trace_index : 0;
    int count = buffer_full ? MTRACE_SIZE : trace_buffer.size();

    for (int i = 0; i < count; ++i) {
        int idx = (start + i) % MTRACE_SIZE;
        std::cout << "Addr: 0x" << std::setw(8) << std::setfill('0') << std::hex << trace_buffer[idx].addr
                  << ", Data: 0x" << std::setw(8) << trace_buffer[idx].data
                  << ", Type: " << (trace_buffer[idx].is_load ? "LOAD" : "STORE") << "\n";
    }
    std::cout << std::dec;
}
