#include <common.h>
#define MAX_TOKENS 1024  // Adjust as needed
			 

uint32_t expr(char *e, bool *success);
void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();
int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  FILE *input = fopen("/root/ysyx-workbench/nemu/tools/gen-expr/input", "r"); // Open the input file
  if (input == NULL) {
    perror("Failed to open input file");
    return 1;
  }

  char line[MAX_TOKENS * 2]; // Increased size for longer expressions
			     
  while (fgets(line, sizeof(line), input) != NULL) {
    char expression[100];
    unsigned int expected_result;
    if (sscanf(line, "%u %[^\n]", &expected_result, expression) == 2) { // Read expected result and expression
      /*
      size_t len = strlen(expression);					
      if (len > 0 && expression[len - 1] == '\n'){
	printf("最后的字符:%c\n", expression[len - 1]);
        expression[len - 1] = '\0';
      }
      */
      bool success = 1;
       //printf("expression is %s\n", expression);
      uint32_t actual_result = expr(expression, &success);

      if (!success) {
        printf("Expression evaluation failed: %s\n", expression);
      } else if (actual_result == expected_result) {
        // printf("Test passed: %s = %u\n", expression, actual_result);
        } else {
        printf("Test failed: %s\nExpected: %u\nActual: %u\n", expression, expected_result, actual_result);
        }
    } else {
      printf("Invalid input line: %s\n", line);
      }
    memset(expression, 0, sizeof(expression));  // 全部初始化为 '\0'
  }

  fclose(input);
  return 0;
  // return is_exit_status_bad();
}