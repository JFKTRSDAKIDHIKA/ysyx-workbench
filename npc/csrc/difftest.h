#ifndef DIFFTEST_H
#define DIFFTEST_H

#include "Vysyx_24120009_core.h"

void init_difftest(const char *ref_so_file, long img_size, int port);
void difftest_step(Vysyx_24120009_core* top, uint32_t pc);

#endif // DIFFTEST_H
