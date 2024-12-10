typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char* exp;
  uint32_t val;
  /* 可以在这里添加更多的成员变量 */
} WP;


WP* new_wp();
void free_wp(WP *wp);
bool check_watchpoint();
void print_watchpoint();
WP* find_NO(int NO);
