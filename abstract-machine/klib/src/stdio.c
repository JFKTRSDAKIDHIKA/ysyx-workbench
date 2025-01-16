#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

// 辅助函数：将整数转换为字符串
static void itoa(char *buf, int num) {
  char temp[12]; // 临时缓冲区，足够存储 32 位整数
  int i = 0;
  int is_negative = 0;

  if (num < 0) {
    is_negative = 1;
    num = -num; // 转为正数
  }

  // 将数字转换为字符串（反向存储）
  do {
    temp[i++] = '0' + (num % 10);
    num /= 10;
  } while (num > 0);

  // 如果是负数，添加负号
  if (is_negative) {
    temp[i++] = '-';
  }

  // 反转到最终缓冲区
  for (int j = i - 1; j >= 0; j--) {
    *buf++ = temp[j];
  }

  *buf = '\0'; // 添加字符串结束符
}

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

// 核心函数：vsprintf
int vsprintf(char *out, const char *fmt, va_list ap) {
  char *str = out; // 输出缓冲区指针
  const char *p = fmt;

  while (*p) {
    if (*p == '%') {
      p++; // 跳过 '%'

      switch (*p) {
        case 's': { // 字符串
          const char *arg_str = va_arg(ap, const char *);
          while (*arg_str) {
            *str++ = *arg_str++;
          }
          break;
        }
        case 'd': { // 十进制整数
          int arg_int = va_arg(ap, int);
          char num_buf[12]; // 足够存储 32 位整数
          itoa(num_buf, arg_int);
          char *num_p = num_buf;
          while (*num_p) {
            *str++ = *num_p++;
          }
          break;
        }
        default: // 未知格式符，直接输出
          *str++ = '%';
          *str++ = *p;
          break;
      }
    } else {
      // 普通字符，直接拷贝
      *str++ = *p;
    }
    p++;
  }

  *str = '\0'; // 添加字符串结束符
  return str - out; // 返回写入的字符数
}

// 包装函数：sprintf
int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int written = vsprintf(out, fmt, ap);
  va_end(ap);
  return written;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
