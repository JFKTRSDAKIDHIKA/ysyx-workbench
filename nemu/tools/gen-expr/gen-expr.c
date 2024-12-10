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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[62144] = {};
static char code_buf[262144] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"#include <stdint.h>\n"
"#include <stdlib.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";


// choose函数用于生成一个小于n的随机数
static uint32_t choose(uint32_t n) {
    return rand() % n;
}

static void gen_num() {
    uint32_t num = rand() % 1000; // 生成 0 到 999 的随机数
    char str[64];

    strcat(buf, "(uint32_t)"); // 先拼接强制类型转换
    sprintf(str, "%u", num);  // 生成数字字符串
    strcat(buf, str);         // 追加数字字符串
}

static void gen_rand_op() {
    switch (choose(4)) {
        case 0: strcat(buf, " + "); break;
        case 1: strcat(buf, " - "); break;
        case 2: strcat(buf, " * "); break;
        default: strcat(buf, " / "); break;
    }
}

static void gen_rand_expr(int depth) {
    if (depth > 6) {  // 控制递归深度，避免生成过长表达式
        gen_num();  // 生成数字作为叶子节点
        return;
    }

    switch (choose(3)) {
        case 0: 
            gen_num();  // 生成数字
            break;
        case 1:
            strcat(buf, "(");  // 生成带括号的子表达式
            gen_rand_expr(depth + 1);
            strcat(buf, ")");
            break;
        default:
            // 递归生成运算符两边的表达式
            gen_rand_expr(depth + 1);
            gen_rand_op();  // 添加运算符
            gen_rand_expr(depth + 1);
            break;
    }
}

int main(int argc, char *argv[]) {
    int seed = time(0);
    srand(seed);
    int loop = 1;
    if (argc > 1) {
        sscanf(argv[1], "%d", &loop);
    }

    for (int i = 0; i < loop; i++) {
        memset(buf, 0, sizeof(buf)); // Clear buffer at the start of each loop
        gen_rand_expr(0);            // Generate expression (adjust depth as needed)

        sprintf(code_buf, code_format, buf);
        FILE *fp = fopen("/tmp/.code.c", "w");
        if(fp == NULL){
	      perror("fopen failed");
	      return 1;
	    }
        fputs(code_buf, fp);
        fclose(fp);

        FILE *pipe = popen("gcc -m32 -funsigned-char -Werror=div-by-zero /tmp/.code.c -o /tmp/.expr 2>&1", "r");
	    // "gcc -Werror=div-by-zero /tmp/.code.c -o /tmp/.expr 2>&1" 会调用 gcc 编译器，并将任何警告或错误消息重定向到标准输出
	    // 2>&1 将 标准错误输出（stderr） 重定向到 标准输出（stdout）
	    if (pipe == NULL) {
            perror("popen failed");
            return 1; // Return an error code
        }

        char compiler_output[1024];
         while (fgets(compiler_output, sizeof(compiler_output), pipe) != NULL) {
            if (strstr(compiler_output, "division by zero") != NULL || strstr(compiler_output, "error:")) {
                pclose(pipe);
                i--; // Decrement i to retry
                goto next_iteration;
            }
        }


        int status = pclose(pipe);
        if (status != 0) {
            i--;
            goto next_iteration;
        }


        fp = popen("/tmp/.expr", "r");
        assert(fp != NULL);
        unsigned int result;

        if (fscanf(fp, "%u", &result) != 1) {
	    // fscanf 用于从文件中读取格式化的数据。
            pclose(fp);
            perror("fscanf failed");
            return 1; // Return an error code
        }
        pclose(fp);

        printf("%u %s\n", result, buf);

        next_iteration:
	  ;
    }

    return 0;
}
