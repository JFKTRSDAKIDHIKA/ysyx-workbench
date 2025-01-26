#include "Vysyx_24120009_core.h"
#include "verilated.h"
#include "difftest.h"
#include "registers.h"
#include "program_loader.h"
#include "memory.h"
#include "difftest.h"
#include <iostream>
#include <svdpi.h>
#include <iomanip> 

// define the DPI-C functions
extern "C" void simulation_exit() {
    Verilated::gotFinish(true); 
}

extern "C" void get_register_values(uint32_t rf[32]) {
    set_register_values(rf);  // set the register values
}

// fundamental memory access unit is 4 bytes, and the address is aligned to 4 bytes
extern "C" int pmem_read(int raddr) {
    raddr = raddr & ~0x3u;  // 清除低两位，确保按4字节对齐
    return Memory::pmem_read(raddr);
}

extern "C" void pmem_write(int waddr, int wdata, char wmask) {
    waddr = waddr & ~0x3u;  // 清除低两位，确保按4字节对齐
    Memory::pmem_write(waddr, wdata, wmask);
}

typedef struct {
  uint32_t gpr[32];
  uint32_t pc;
} riscv32_CPU_state;
riscv32_CPU_state ref;

void print_memory(paddr_t start_addr, size_t size) {
    // Allocate buffers for memory data
    std::vector<uint8_t> ref_mem(size, 0); // Buffer for REF memory
    std::vector<uint8_t> dut_mem(size, 0); // Buffer for DUT memory

    // Fetch memory data from REF
    ref_difftest_memcpy(start_addr, ref_mem.data(), size, DIFFTEST_TO_DUT);

    // Fetch memory data from DUT
    for (size_t i = 0; i < size; ++i) {
        dut_mem[i] = Memory::pmem_read(start_addr + i) & 0xFF; // Read byte by byte
    }

    // Print the memory in a more readable format
    std::cout << "\nMemory Dump (Start Address: 0x" << std::hex << start_addr << ", Size: " << std::dec << size << " bytes)" << std::endl;
    std::cout << "-------------------------------------------------------------------------------" << std::endl;
    std::cout << "| Address      | REF Value  | DUT Value  | Match |" << std::endl;
    std::cout << "-------------------------------------------------------------------------------" << std::endl;

    for (size_t i = 0; i < size; ++i) {
        paddr_t addr = start_addr + i;
        bool match = (ref_mem[i] == dut_mem[i]);

        // Print memory content with formatting
        std::cout << "| 0x" << std::setw(10) << std::setfill('0') << std::hex << addr
                  << " | 0x" << std::setw(8) << std::setfill('0') << static_cast<int>(ref_mem[i])
                  << " | 0x" << std::setw(8) << std::setfill('0') << static_cast<int>(dut_mem[i])
                  << " |  " << (match ? "Yes" : "No ") << "  |" << std::endl;
    }

    std::cout << "-------------------------------------------------------------------------------" << std::endl;
}

int check_reg(Vysyx_24120009_core* top) {
    // Compare DUT registers with REF registers
    for (int i = 0; i < 32; i++) {
        if (rf_values[i] != ref.gpr[i]) {
            std::cerr << "Register mismatch at x" << i 
                      << " - DUT: 0x" << std::hex << rf_values[i] 
                      << " REF: 0x" << ref.gpr[i] 
                      << std::endl;
            // Optionally, you can stop the simulation on a mismatch
            print_memory(0x800001ac, 20);
            return -1;  // End simulation
        }
    }
    if (top->imem_addr_debug != ref.pc) {
        std::cerr << "PC mismatch - DUT: 0x" << std::hex << top->imem_addr_debug << " REF: 0x" << std::hex << ref.pc << std::endl;
        return -1;  // End simulation
    }
    return 0;
}

int check_memory(paddr_t start_addr, size_t size) {
    // Allocate buffers for memory comparison
    std::vector<uint8_t> ref_mem(size, 0); // Buffer to store memory from REF
    std::vector<uint8_t> dut_mem(size, 0); // Buffer to store memory from DUT

    // Copy memory from REF to ref_mem buffer
    ref_difftest_memcpy(start_addr, ref_mem.data(), size, DIFFTEST_TO_DUT);

    // Copy memory from DUT to dut_mem buffer
    for (size_t i = 0; i < size; ++i) {
        dut_mem[i] = Memory::pmem_read(start_addr + i) & 0xFF; // Read one byte at a time
    }

    // Compare REF memory and DUT memory
    if (memcmp(ref_mem.data(), dut_mem.data(), size) != 0) {
        // If there's a mismatch, find the first mismatched byte
        for (size_t i = 0; i < size; ++i) {
            if (ref_mem[i] != dut_mem[i]) {
                std::cerr << "Memory mismatch detected!" << std::endl;
                std::cerr << "Address: 0x" << std::hex << (start_addr + i) << std::endl;
                std::cerr << "REF: 0x" << std::hex << static_cast<int>(ref_mem[i]) << std::endl;
                std::cerr << "DUT: 0x" << std::hex << static_cast<int>(dut_mem[i]) << std::endl;
                print_memory(0x800001ac, 20);
                return -1;
            }
        }
    } else {
        return 0;
    }
    return 0;
}

void tick(Vysyx_24120009_core* top, bool step_mode, bool is_reset) {
    top->clk = 0;
    top->eval();
                print_memory(0x800001a8, 40);
    
    if (!is_reset) {
        // print some debug info when registers have yet been updated!
        printf("------------------------------------------------------------------------------\n");
        std::cout << "Op1: 0x" << std::setw(8) << std::setfill('0') << std::hex << top->Op1_debug
            << ", Op2: 0x" << std::setw(8) << std::setfill('0') << top->Op2_debug
            << ", wb_data: 0x" << std::setw(8) << std::setfill('0') << top->reg_write_data_debug
            << ", Instruction: 0x" << std::setw(8) << std::setfill('0') << top->inst_debug
            << std::dec << std::endl;
    }

    // print some debug info of memory write
    if (top->mem_wen_debug == 1 && !is_reset) {  
        std::cout << "Memory Write - Addr: 0x" << std::setw(8) << std::setfill('0') << std::hex << top->dmem_addr_debug
                << ", Data: 0x" << std::setw(8) << std::setfill('0') << top->dmem_wdata_debug
                << ", Mask: 0x" << std::setw(2) << static_cast<unsigned>(top->wmask_debug) 
                << std::dec << std::endl;
    }

    // print some debug info of memory read
    if (top->mem_en_debug == 1 && top->mem_wen_debug != 1 && !is_reset) {  
            std::cout << "Memory Read  - Addr: 0x" << std::setw(8) << std::setfill('0') << std::hex << top->dmem_addr_debug
                      << std::dec << std::endl;
    }

    top->clk = 1;
    top->eval();
    Verilated::timeInc(1); // 增加仿真时间
}

void reset(Vysyx_24120009_core* top, int cycles) {
    top->rst = 1;
    for (int i = 0; i < cycles; ++i) {
        tick(top, false, true);  // forbidden single-step mode
    }
    top->rst = 0;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vysyx_24120009_core* top = new Vysyx_24120009_core;

    // Default to single step mode (if no argument is provided)
    bool step_mode = true;
    if (argc > 2) {
        std::string mode = argv[2];
        if (mode == "step") {
            step_mode = true; // Single-step mode
        } else if (mode == "run") {
            step_mode = false; // Run mode (continuous execution)
        } else {
            std::cerr << "Invalid step_mode argument. Use 'step' or 'run'." << std::endl;
            return -1; // Exit with error code
        }
    }

    // Load program
    load_program(argv[1]);

    // Initialize difftest
    init_difftest("/root/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so", 0);
    // Copy the program to the reference model
    ref_difftest_meminit(argv[1]);  

    // Reset
    reset(top, 10); // Reset for 10 cycles

    while(!Verilated::gotFinish()) {
        if (step_mode) {
            std::string input;
            std::cout << "(npc) : ";
            std::getline(std::cin, input);

            // 根据用户输入的命令来决定行为
            if (input == "si") {
                // 执行单步操作
                tick(top, step_mode, false);  // 执行一次 tick
                // ref execute one instruction
                ref_difftest_exec(1);
                // Copy registers from DUT to REF and compare them
                ref_difftest_regcpy(&ref, DIFFTEST_TO_REF);
                // Check if the registers are consistent
                int ret = check_reg(top);
                if (ret < 0) return -1;                 
                // Check memory consistency
                ret = check_memory(0x80000000, 0x1000); 
                if (ret < 0) return -1;
            } 
            else if (input == "info r") {
                // 打印寄存器信息，不进行 tick
                print_register_values();  // 打印寄存器
            } 
            else if (input == "q") {
                // 退出仿真
                Verilated::gotFinish(true);  
            }
            else {
                std::cout << "Unknown command!" << std::endl;
            }
        } else {
            // 执行单步操作
            tick(top, step_mode, false);  // 执行一次 tick
            // ref execute one instruction
            ref_difftest_exec(1);
            // Copy registers from DUT to REF and compare them
            ref_difftest_regcpy(&ref, DIFFTEST_TO_REF);
            // Check if the registers are consistent
            int ret = check_reg(top);
            if (ret < 0) return -1;
            // Check memory consistency
            ret = check_memory(0x80000000, 0x1000); 
            if (ret < 0) return -1;
        }
    } 

    delete top;
    return 0;
}
