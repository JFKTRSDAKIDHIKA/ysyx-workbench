#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

// 工具函数：将整型转换成字符串
static void int_to_str(int value, char *buf) {
  // 这里采用简单的方式，将整数转换成字符串并写入buf中
  // 不考虑 64 位长整型；若有需要再自行扩展
  // 也没有考虑进制转换需求（比如 %x），如有需要再自行实现

  char temp[32]; // 暂存反转前的数字字符
  int pos = 0;
  bool neg = false;

  if (value < 0) {
    neg = true;
    value = -value;
  }

  // 特殊情况：value 为 0
  if (value == 0) {
    temp[pos++] = '0';
  } else {
    // 将数字逆序存放到 temp 中
    while (value > 0) {
      temp[pos++] = (char)('0' + (value % 10));
      value /= 10;
    }
  }

  // 如果是负数，记得加上 '-'
  if (neg) {
    temp[pos++] = '-';
  }

  // 现在 temp 中是逆序存放的数字字符（最后一位是正负号或数字）
  // 将其反转到 buf 中
  int i = 0;
  while (pos > 0) {
    buf[i++] = temp[--pos];
  }
  buf[i] = '\0';
}

// vsprintf 函数负责根据可变参数列表将结果写到 out 中
int vsprintf(char *out, const char *fmt, va_list ap) {
  char *str = out;
  const char *p = fmt;
  while (*p) {
    if (*p == '%') {
      p++;
      switch (*p) {
        case 'd': {
          int val = va_arg(ap, int);
          char buf[32];
          int_to_str(val, buf);
          // 将 buf 中的内容复制到 str
          char *b = buf;
          while (*b) {
            *str++ = *b++;
          }
          break;
        }
        case 's': {
          char *s = va_arg(ap, char *);
          if (s == NULL) s = "(null)";
          while (*s) {
            *str++ = *s++;
          }
          break;
        }
        // 如果有需要支持更多的格式，例如 %c、%x、%f 等
        // 可以在这里添加对应的逻辑
        default: {
          // 遇到未知的格式化符号，直接原样输出
          *str++ = '%';
          *str++ = *p;
          break;
        }
      }
    } else {
      // 普通字符，直接输出
      *str++ = *p;
    }
    p++;
  }
  *str = '\0';              // 在末尾补上 '\0'
  return (int)(str - out);  // 返回输出的字符数，不包括末尾的 '\0'
}

// sprintf 函数：先启动可变参数，然后调用 vsprintf
int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int ret = vsprintf(out, fmt, ap);
  va_end(ap);
  return ret;
}

int printf(const char *fmt, ...) {
  char buf[1024];  
  va_list ap;
  va_start(ap, fmt);
  int ret = vsprintf(buf, fmt, ap);
  va_end(ap);
  for (int i = 0; buf[i] != '\0'; i++) {
    putch(buf[i]);
  }
  return ret;
}


int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
  return 0;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
  return 0;
}

#endif
