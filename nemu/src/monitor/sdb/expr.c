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

word_t isa_reg_str2val(const char *s, bool *success);
bool check_parentheses(int, int);
int get_priority(int);
int find_main_operator(int, int);
word_t eval(int, int);
word_t vaddr_read(vaddr_t addr, int len);
bool check_dereference(int p, int q);

enum {
  TK_NOTYPE = 256, TK_EQ,
  TK_NUM,
  TK_MINUS,
  TK_DIV,
  TK_LPAREN,
  TK_RPAREN,
  TK_NEQ,         // !=
  TK_AND,         // and
  TK_HEX,         // hex number
  TK_REG,         // register name
  TK_DEREF,       // 词法分析时,识别所有'*'为同一类型,求值时再区分。
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {
  {" +", TK_NOTYPE},         // spaces
  {"\\+", '+'},              // plus
  {"==", TK_EQ},             // equal
  {"!=", TK_NEQ},            // noe equal
  {"\\-", TK_MINUS},         // minus	 
  {"\\*", '*'},	             // multiplicate or dereference
  {"\\/", TK_DIV},           // divide
  {"\\(", TK_LPAREN},        // left paren
  {"\\)", TK_RPAREN},        // right paren
  {"0x[0-9a-fA-F]+", TK_HEX},// hex number
  {"[0-9]+", TK_NUM},        // num
  {"\\$[a-zA-Z0-9]+", TK_REG},  // register name
  {"&&", TK_AND},            // and
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

static Token tokens[128] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    // 生成的表达式最大长度是256,这里检查position大小以防止段错误。
    if (position >= 257) {
      printf("Error: Position overflow. Position = %d, max allowed = 256\n", position);
      return false;
    }

    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
	// int regexec(const regex_t *preg, const char *string, size_t nmatch, regmatch_t pmatch[], int eflags);
	// preg : 指向编译好的正则表达式对象，该对象是通过 regcomp() 函数编译得到的。这是待匹配的正则表达式。
	// char : 指向要进行匹配操作的输入字符串。
	// nmatch : 指定要捕获的子表达式（即匹配组）的最大数量。
	// pmatch : 用于存储匹配到的子表达式的起始和结束位置。包含两个成员：rm_so（匹配的开始位置）和 rm_eo（匹配的结束位置）。
	// falgs
	// return 0 implys 匹配成功。
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        //Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
         //   i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

	if (rules[i].token_type != TK_NOTYPE){
	  tokens[nr_token].type = rules[i].token_type;
 	
	  if (rules[i].token_type == TK_NUM){
	    strncpy(tokens[nr_token].str, substr_start, substr_len);
	    tokens[nr_token].str[substr_len] = '\0';
	  }
	  
	  if (rules[i].token_type == TK_HEX){
	    strncpy(tokens[nr_token].str, substr_start, substr_len);
	    tokens[nr_token].str[substr_len] = '\0';
	  }
 	  
	  if (rules[i].token_type == TK_REG){
	    strncpy(tokens[nr_token].str, substr_start + 1, substr_len - 1);
	    tokens[nr_token].str[substr_len - 1] = '\0';
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


uint32_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  for (int i = 0; i < nr_token; i ++) {
    if (tokens[i].type == '*' && (i == 0 || (tokens[i - 1].type != TK_NUM && tokens[i - 1].type != TK_HEX && tokens[i - 1].type != TK_REG &&
tokens[i - 1].type != TK_RPAREN))) {
    tokens[i].type = TK_DEREF;  // 识别为解引用操作
    }
  }

  *success = true;
  return eval(0, nr_token - 1);
}

uint32_t eval(int p, int q){
  if (p > q){
    printf("Bad expression! Starting from %d, ending in %d.\n",p ,q);
    return -1;
  }else if (p == q){
    if (tokens[p].type == TK_NUM)
      return (uint32_t)(atoi(tokens[p].str)); 
    if (tokens[p].type == TK_REG){
      bool success;
      uint32_t reg_val = isa_reg_str2val(tokens[p].str, &success); 
      if (success == 0) {
          printf("Invalid reg name!\n");
          return -1;
      } else { 
          return reg_val;
      }
    }
    if (tokens[p].type == TK_HEX){
      return (uint32_t)(strtol(tokens[p].str, NULL, 16));
    }else {
      printf("this token should be a number.\n");
    }
  }else if (check_parentheses(p, q) == 1){
  //  printf("expression 被括号包起来了. Starting from %d, ending in %d.\n", p, q);
    return eval(p + 1, q - 1);
  }else if (check_dereference(p, q)){
    return vaddr_read(eval(p + 1, q), 4);
  }else {
    int op = find_main_operator(p ,q);
    uint32_t val1 = eval(p, op - 1);
    uint32_t val2 = eval(op + 1, q);
    switch (tokens[op].type) {
      case '+': return val1 + val2;
      case TK_MINUS : return val1 - val2;
      case '*': return val1 * val2;
      case TK_DIV: return val1 / val2;
      case TK_EQ : return val1 == val2;
      case TK_NEQ : return val1 != val2;
      case TK_AND : return val1 && val2;
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
    
    if (get_priority(tokens[p].type) <= get_priority(tokens[main_op].type)){
      main_op = p;
   //   printf("main_op = %d\n",main_op);
    }
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
      
      if (sp == -1 && p != q)
        return 0;

    }
    if (sp == -1)
      return 1;
    else 
      return 0; 
  }
}

int get_priority(int op) {
    if (op == TK_EQ || op == TK_NEQ){
        return 0;
    } else if (op == '+' || op == TK_MINUS) {
        return 1;  // 加法和减法的优先级最低
    } else if (op == '*' || op == TK_DIV || op == TK_AND) {
        return 2;  // 乘法和除法优先级稍高
    } else {
        return 3; // 非运算符返回一个无效值
    }
}

bool check_dereference(int p, int q){
  if (tokens[p].type != TK_DEREF){
    return 0;
  } else {
    if ((tokens[p + 1].type == TK_NUM || tokens[p + 1].type == TK_HEX) && q == p + 1){
      return 1;
    } else if (tokens[p + 1].type == TK_LPAREN && tokens[q].type == TK_RPAREN){
      return 1;
    } else {
      return 0;
    }
  }
}
