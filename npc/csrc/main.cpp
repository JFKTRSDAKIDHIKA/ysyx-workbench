#include "VysyxSoCFull.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "include/difftest.h"
#include "include/registers.h"
#include "include/program_loader.h"
#include "include/memory.h"
#include "include/disassemble.h"
#include "include/device.h"
#include "include/config.h"
#include "include/dpi_interface.h"
#include "include/simulation.h"
#include "include/itrace.h"
#include "include/mtrace.h"
#include <iostream>
#include <svdpi.h>
#include <iomanip> 
#include <readline/readline.h>
#include <readline/history.h>
#include <cassert>    

#define NEED_CHECK(top) ((top)->io_wbu_state_debug == 2)

void print_config();

// Declare global variables
VysyxSoCFull* top;      // Top module (global)
static bool step_mode;  // Step mode flag (global)
static riscv32_CPU_state ref;
static int total_cycles;
InstructionTrace itrace;
MemoryTrace mtrace;

#ifdef TRACE
static int time_i = 0;
VerilatedVcdC* tfp;
#endif

#ifdef DIFFTEST
int check_dut_and_ref(VysyxSoCFull* top, paddr_t start_addr, size_t size) {
  // ----------- 检查寄存器 -----------
  // Compare DUT registers with REF registers
  for (int i = 0; i < 32; i++) {
      if (rf_values[i] != ref.gpr[i]) {
          std::cerr << "Register mismatch at " << regs[i]
                    << " - DUT: 0x" << std::hex << rf_values[i] 
                    << " REF: 0x" << ref.gpr[i] 
                    << std::endl;
          
          // Print all registers of DUT (rf_values) and REF (ref.gpr)
          std::cerr << "DUT Registers (rf_values):" << std::endl;
          for (int j = 0; j < 32; j++) {
              std::cerr << regs[j] << ": 0x" << std::hex << rf_values[j] << std::endl;
          }
          std::cerr << "REF Registers (ref.gpr):" << std::endl;
          for (int j = 0; j < 32; j++) {
              std::cerr << regs[j] << ": 0x" << std::hex << ref.gpr[j] << std::endl;
          }

          // Stop the simulation on a mismatch
          return -1;  
      }
  }

  // Compare program counter (PC) between DUT and REF
  if (top->io_pc_debug != ref.pc) {
      std::cerr << "PC mismatch - DUT: 0x" << std::hex << top->io_pc_debug 
                << " REF: 0x" << std::hex << ref.pc << std::endl;
      
      // Print DUT and REF register values (optional)
      std::cerr << "DUT Registers (rf_values):" << std::endl;
      for (int j = 0; j < 32; j++) {
          std::cerr << regs[j] << ": 0x" << std::hex << rf_values[j] << std::endl;
      }
      std::cerr << "REF Registers (ref.gpr):" << std::endl;
      for (int j = 0; j < 32; j++) {
          std::cerr << regs[j] << ": 0x" << std::hex << ref.gpr[j] << std::endl;
      }

      return -1;  // End simulation
  }
  // If no mismatches, return 0
  return 0;
}
#endif


void tick(void) {
    total_cycles++;
    top->clock = 0;
    top->eval();
#ifdef TRACE
    tfp->dump(time_i);
    time_i++;
#endif

  if ((top->io_wbu_state_debug == 2)) {
    // instruction trace
    itrace.addEntry(top->io_pc_debug, top->io_inst_debug);

    // Memory trace
    if (top->io_lsu_is_ld_or_st_debug) {  
      std::string inst_str = disassemble_instruction(top->io_lsu_reg_inst_debug);
      
      bool is_load = (inst_str[0] == 'l');  
      bool is_store = (inst_str[0] == 's'); 
  
      uint32_t addr = top->io_lsu_reg_dmem_addr_debug;
      uint32_t data = is_load ? top->io_dmem_rdata_debug : top->io_dmem_wdata_debug;
  
      mtrace.addEntry(addr, data, is_load, is_store);
    }
  
    // print cpu execution information
#ifndef SILENT_MODE
    printf("------------------------------------------------------------------------------\n");
    std::cout << "Instruction Info: "
              << "Instruction: " << std::setw(8) << disassemble_instruction(top->io_inst_debug)
              << ", PC: 0x" << std::setw(8) << std::setfill('0') << std::hex << top->io_pc_debug << "\n"
              << "Write-Back Info: "
              << "wb_data: 0x" << std::setw(8) << std::setfill('0') << std::hex << top->io_wb_data_debug
              << ", wbu_reg_dmem_rdata: 0x" << std::setw(8) << std::setfill('0') << std::hex << top->io_wbu_reg_dmem_rdata_debug
              << ", wb_wen: 0x" << std::hex << static_cast<int>(top->io_wb_wen_debug)
              << ", wb_sel: 0x" << std::hex << static_cast<int>(top->io_wb_sel_debug) << "\n"
              << "LSU Info: "
              << "lsu_reg_inst: 0x" << std::setw(8) << std::setfill('0') << std::hex << top->io_lsu_reg_inst_debug
              << ", lsu_reg_dmem_addr: 0x" << std::setw(8) << std::setfill('0') << std::hex << top->io_lsu_reg_dmem_addr_debug
              << ", dmem_rdata: 0x" << std::setw(8) << std::setfill('0') << std::hex << top->io_dmem_rdata_debug
              << ", dmem_wdata: 0x" << std::setw(8) << std::setfill('0') << std::hex << top->io_dmem_wdata_debug
              << ", lsu_is_ld_or_st: 0x" << std::hex << static_cast<int>(top->io_lsu_is_ld_or_st_debug) 
              << ", lsu_memory_ar_size 0x:" << std::hex << static_cast<int>(top->io_lsu_memory_ar_size) << "\n"
              << "State Machines: "
              << "ifu_state: 0x" << std::setw(2) << std::setfill('0') << std::hex << static_cast<int>(top->io_ifu_state_debug)
              << ", lsu_state: 0x" << std::setw(2) << std::setfill('0') << std::hex << static_cast<int>(top->io_lsu_state_debug)
              << ", wbu_state: 0x" << std::setw(2) << std::setfill('0') << std::hex << static_cast<int>(top->io_wbu_state_debug)
              << ", Arbiter_state: 0x" << std::setw(2) << std::setfill('0') << std::hex << static_cast<int>(top->io_Arbiter_state_debug)
              << std::dec << std::endl;
#endif

  }

    top->clock = 1;
    top->eval();
    Verilated::timeInc(1);
}


void reset(VysyxSoCFull* top, int cycles) {
    top->reset = 1;
    for (int i = 0; i < cycles; ++i) {
        tick();  // forbidden single-step mode
    }
    top->reset = 0;
}

/* We use the 'readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
    static char *line_read = NULL;
  
    if (line_read) {
      free(line_read);
      line_read = NULL;
    }
  
    line_read = readline("(npc) ");
  
    if (line_read && *line_read) {
      add_history(line_read);
    }
  
    return line_read;
  }

static int need_check = 0;
static int execute_single_step() {
  tick();
#ifdef DIFFTEST
  if (need_check) {
    need_check = NEED_CHECK(top);
    ref_difftest_exec(1);
    ref_difftest_regcpy(&ref, DIFFTEST_TO_REF);
    return check_dut_and_ref(top, 0, 0);
  } else {
    need_check = NEED_CHECK(top);
    return 0;
  }
#else 
  return 0;
#endif
}

static int cmd_c(char *args) {
  while(!Verilated::gotFinish()) {
    int ret = execute_single_step();
    if (ret < 0) return -1;
  }
  return 0;
}

static int cmd_q(char *args) {
  return -1;
}

static int cmd_si(char* args);

static int cmd_x(char* args);

static int cmd_info(char* args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NPC", cmd_q },
  { "si", "Single-step execute N instructions and then pause. If N is not provided, default to 1", cmd_si },
  { "info", "Print registers", cmd_info},
  { "x", "Use the expression as the starting memory address, and output N consecutive 4-byte blocks in hexadecimal", cmd_x}
};

#define NR_CMD 5

static int cmd_si(char* args) {
  char *arg = strtok(NULL, "");

  if (arg == NULL) {
      // 单步执行
      int ret = execute_single_step();
      if (ret < 0) return -1;
  } else {
      // 多步执行
      int steps = atoi(arg);
      for (int i = 0; i < steps; i++) {
          int ret = execute_single_step();
          if (ret < 0) return -1;
      }
  }

  return 0;
}

static int cmd_info(char* args){
  char *arg = strtok(NULL, "");

  if (arg == NULL){
    printf("Note: Currently only the 'info r' command is available, which prints register contents\n");
  } else if (strcmp(arg, "r") == 0) {
    print_register_values();
  } else {
    printf("Unknown arg '%s'\n", arg);
  }
  return 0;
}

static int cmd_x(char* args){
  int arg0;
  char arg1[100]; 

  if (args == NULL){
    printf("Lack args\n");
    return 0;
  }
    
  if (sscanf(args, "%d %[^\n]", &arg0, arg1) != 2) {
    printf("Invalid args\n");
    return 0;
  }
  
  int len = 4 * arg0;

  printf("Memory dump skipped (SDRAM access is non-trivial)\n");
  return 0;
}

int sdb_mainloop() {
  for (char *str; (str = rl_gets()) != NULL && !Verilated::gotFinish(); ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
    * which may need further parsing
    */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return -1; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
  return 0;
}
  
int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    top = new VysyxSoCFull;

#ifdef TRACE
    Verilated::traceEverOn(true);
    tfp = new VerilatedVcdC;
    top ->trace(tfp, 3);
    tfp->open("waveform.vcd");
#endif

    // Default to single step mode (if no argument is provided)
    step_mode = true;
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

    // Initialize SDRAM chips
    SDRAM::init(0);
    SDRAM::init(1);
    SDRAM::init(2);
    SDRAM::init(3);

#ifdef DIFFTEST
    // Initialize difftest
    init_difftest("/root/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so", 0);
#endif

    // Reset
    reset(top, 10); // Reset for 10 cycles

    auto start_time = std::chrono::high_resolution_clock::now();
    
    if (step_mode) {
      if (sdb_mainloop() < 0) {
        itrace.printTrace();
        return -1;
      }
    } else {
      if (cmd_c(NULL) < 0) {
        itrace.printTrace();
        return -1;
      }
    }
    mtrace.printTrace();

    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end_time - start_time;
    double seconds = elapsed.count();
    double cycles_per_second = total_cycles / seconds;

    std::cout << "Total time: " << seconds << " seconds" << std::endl;
    std::cout << "Simulation speed: " << cycles_per_second << " cycles/second" << std::endl;

#ifdef TRACE
    tfp->close();
    delete tfp;
#endif

    delete top;
    return 0;
}


