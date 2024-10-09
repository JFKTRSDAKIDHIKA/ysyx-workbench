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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

bool check_parentheses(int, int);
int get_priority(char);
int find_main_operator(int, int);
word_t eval(int, int);

enum {
  TK_NOTYPE = 256, TK_EQ,
  TK_NUM,
  TK_MINUS,
  TK_MULT,
  TK_DIV,
  TK_LPAREN,
  TK_RPAREN
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {
  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"\\-", TK_MINUS},     // minus	 
  {"\\*", TK_MULT},	 // multiplicate
  {"\\/", TK_DIV},       // divide
  {"\\(", TK_LPAREN},
  {"\\)", TK_RPAREN},
  {"[0-9]+", TK_NUM},  
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

	if (rules[i].token_type != TK_NOTYPE){
	  tokens[nr_token].type = rules[i].token_type;
 	
	  if (rules[i].token_type == TK_NUM){
	    strncpy(tokens[nr_token].str, substr_start, substr_len);
	    tokens[nr_token].str[substr_len] = '\0';
	  }
	  nr_token++;
	}
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  printf("nr_token = %d\n", nr_token);
  /* TODO: Insert codes to evaluate the expression. */
  return eval(0, nr_token - 1);
  


  return 0;
}

word_t eval(int p, int q){
  if (p > q){
    printf("Bad expression! Starting from %d, ending in %d.\n",p ,q);
    return 0;
  }else if (p == q){
    if (tokens[p].type == TK_NUM){
      printf("token type: %d\n", tokens[p].type);
      printf("tokens str: %d\n", atoi(tokens[p].str));
      return (uint)(atoi(tokens[p].str)); 
    }else {
      printf("this token should be a number.\n");
    }
  }else if (check_parentheses(p, q) == 1){
    printf("expression 被括号包起来了. Starting from %d, ending in %d.\n", p, q);
    return eval(p + 1, q - 1);
  }else {
    int op = find_main_operator(p ,q);
    printf("main_operator is at %d. Starting from %d, ending in %d.\n", op, p, q);
    uint val1 = eval(p, op - 1);
    uint val2 = eval(op + 1, q);
    switch (tokens[op].type) {
      case '+': return val1 + val2;
      case TK_MINUS : return val1 - val2;
      case TK_MULT: return val1 * val2;
      case TK_DIV: return val1 / val2;
      default: assert(0); 
  }
  }
  return -1;
}

int find_main_operator(int p, int q){
  int paren_level = 0;
  int main_op = p;

  for (; p <= q; p++){
    if (tokens[p].type == TK_LPAREN){
      paren_level++;
      continue;
    }
    
    if (tokens[p].type == TK_RPAREN){
      paren_level--;
      continue;
    }

    if (tokens[p].type == TK_NUM)
      continue;

    if (paren_level != 0)
      continue;

    if (get_priority(tokens[p].str[0]) <= get_priority(tokens[main_op].str[0]))
      main_op = p;
  }
  return main_op;
}

bool check_parentheses(int p, int q){
  int sp = -1; // statck pointer.
  int stk[32];
  if (tokens[p].type != TK_LPAREN){
    return 0;
  }else {
    sp++; // invariance: sp always points to the hightest element in the array.
    stk[sp] = TK_LPAREN;
    p++;
    for(; p <= q; p++){
      if (tokens[p].type == TK_RPAREN){
        if (sp == -1){
	  return 0;
	}else {
	  if (stk[sp] == TK_LPAREN){
	    stk[sp] = 0;
	    sp--;
	  }
	} 
      }

      if (tokens[p].type == TK_LPAREN){
	// in case of condition : "(4 + 3) * (2 - 1)"   // false, the leftmost '(' and the rightmost ')' are not matched
	if (sp == -1)
	  return 0;
        sp++;
        stk[sp] = TK_LPAREN;
      } 
    }
    if (sp == -1)
      return 1;
    else 
      return 0; 
  }
}

int get_priority(char op) {
    if (op == '+' || op == '-') {
        return 1;  // 加法和减法的优先级最低
    } else if (op == '*' || op == '/') {
        return 2;  // 乘法和除法优先级稍高
    } else {
        return -1; // 非运算符返回一个无效值
    }
}


