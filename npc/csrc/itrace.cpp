#include "include/itrace.h"
#include "include/disassemble.h"

void InstructionTrace::addEntry(uint32_t pc, uint32_t inst) {
    if (trace_buffer.size() < TRACE_SIZE) {
        trace_buffer.push_back({pc, inst});
    } else {
        trace_buffer[trace_index] = {pc, inst};
        if (trace_index == TRACE_SIZE - 1) buffer_full = true;
    }
    trace_index = (trace_index + 1) % TRACE_SIZE;
}

void InstructionTrace::printTrace() const { 
    std::cout << "Instruction Trace (Most Recent First):\n";
    int start = buffer_full ? trace_index : 0;
    int count = buffer_full ? TRACE_SIZE : trace_buffer.size();

    for (int i = 0; i < count; ++i) {
        int idx = (start + i) % TRACE_SIZE;
        std::cout << "PC: 0x" << std::setw(8) << std::setfill('0') << std::hex << trace_buffer[idx].pc
                  << ", INST: 0x" << std::setw(8) << trace_buffer[idx].inst
                  << " (" << disassemble_instruction(trace_buffer[idx].inst) << ")\n"; 
    }
    std::cout << std::dec;
}
