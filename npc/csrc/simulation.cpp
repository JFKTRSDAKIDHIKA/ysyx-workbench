#include "include/simulation.h"
#include <verilated.h>

extern "C" void simulation_exit() {
    Verilated::gotFinish(true);
}
