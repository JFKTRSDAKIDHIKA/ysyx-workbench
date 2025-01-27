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

#include "sdb.h"

#define NR_WP 32

uint32_t expr(char *e, bool *success);

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char* exp;  // 监视点监视的表达式。
  uint32_t val;  // 表达式的value。

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

WP* find_NO(int NO){
  return &wp_pool[NO];
}

void print_watchpoint() {
  WP* wp = head;
  while (wp != NULL) {
    printf("Watchpoint ID: %d，Expression：%s, value：0x%-10x\n", wp->NO, wp->exp, wp->val);
    wp = wp->next;
  }
}

// Returns 1 if any watchpoint expression changes, otherwise returns 0
bool check_watchpoint() {
  WP* wp = head;
  int trigger_count = 0;
  while (wp != NULL) {
    bool success;
    uint32_t nval = expr(wp->exp, &success); 
    if (!success) {
      printf("Expression evaluation failed!\n");
      return 0;
    }
    if (nval != wp->val) {
        printf("============= Watchpoint expression changed! =============\n");
        printf("Expression: %s, Watchpoint ID: %d\n", wp->exp, wp->NO);
        printf("Old value: 0x%-10x New value: 0x%-10x\n", wp->val, nval);
        printf("===========================================================\n");
        wp->val = nval;
        trigger_count++;
    } else {
        wp->val = nval;
    }
    wp = wp->next;
  }

  return (trigger_count == 0) ? 0 : 1;
}

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

// return a free watchpoint from linked list free.
WP* new_wp() {
  if (free_ == NULL) {
     // if no free_ watchpoint, assert(0).
     assert(0);
     return 0;
  } else {
     // delete the wp from list free_.
     WP* wp = free_; 
     free_ = wp->next;
     // add the wp to list head.
     wp->next = head;
     head = wp;
     return wp;
  } 
}

// free_ a watchpoint from head to free_.
void free_wp(WP* wp) {
  // 特殊处理链表的第一个节点。
  if (head->NO == wp->NO) {
      head = head->next;    
  } else { 
    WP* wtpt = head->next;
    WP* prev = head;
    while (wtpt->NO != wp->NO) {
      prev = prev->next;
      wtpt = wtpt->next; 
    } 
    prev->next = wp->next; 
  }
  
  // push the node wp to list free_.
  wp->next = free_;
  free_ = wp;
}
