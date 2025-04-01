#ifndef ITRACE_H
#define ITRACE_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

class InstructionTrace {
private:
    struct TraceEntry {
        uint32_t pc;
        uint32_t inst;
    };

    static constexpr int TRACE_SIZE = 10;
    std::vector<TraceEntry> trace_buffer;
    int trace_index = 0;
    bool buffer_full = false;

public:
    void addEntry(uint32_t pc, uint32_t inst);
    void printTrace() const;
};

#endif // ITRACE_H
