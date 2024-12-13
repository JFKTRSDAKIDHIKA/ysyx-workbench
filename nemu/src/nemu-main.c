#include <common.h>
#define MAX_TOKENS 2048  // Adjust as needed
			 

uint32_t expr(char *e, bool *success);
void init_monitor(int, char *[]);
void am_init_monitor();
int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  char line[MAX_TOKENS];

  FILE *input = fopen("/root/ysyx-workbench/nemu/tools/gen-expr/input", "r"); 
  if (input == NULL) {
    perror("Failed to open input file");
    return 1;
  }
			     
  while (fgets(line, sizeof(line), input) != NULL) {
    char expression[62144]; // Bug: overflow!
    unsigned int expected_result;
    if (sscanf(line, "%u %[^\n]", &expected_result, expression) == 2) { 
      bool success = 1;
      uint32_t actual_result = expr(expression, &success);

      if (!success) {
          printf("Expression evaluation failed: %s\n", expression);
      } else if (actual_result == expected_result) {
          printf("One Test Passed: %s = %u\n", expression, actual_result);
      } else {
        printf("One Test Failed: %s\nExpected: %u\nActual: %u\n", expression, expected_result, actual_result);
      }
    } else {
      printf("Invalid input line: %s\n", line);
      }
    memset(expression, 0, sizeof(expression));  // 全部初始化为 '\0'
  }

  fclose(input);
  printf("All tests passed!\n");
  return 0;
}
