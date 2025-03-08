/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  int num_regs = MUXDEF(CONFIG_RVE, 16, 32);
  
  for (int i = 0; i < num_regs; i++) {
    printf("%s = 0x%lx\n", regs[i], (long)cpu.gpr[i]); 
  }
  
  printf("PC = 0x%lx\n", (long)cpu.pc); 
}

word_t isa_reg_str2val(const char *s, bool *success) { 
  if (strcmp(s, "PC") == 0){
      *success = 1;
      return cpu.pc;
  }

  int num_regs = MUXDEF(CONFIG_RVE, 16, 32);
  for (int i = 0; i < num_regs; i++){
    if (strcmp(s, regs[i]) == 0){
       *success = 1;
       return cpu.gpr[i];
    }
  }

  *success = 0;
  return 0;
}
