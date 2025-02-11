#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

// 工具函数：将整型转换成字符串（已有实现）
static void int_to_str(int value, char *buf) {
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

  // 将 temp 中的字符逆序复制到 buf 中
  int i = 0;
  while (pos > 0) {
    buf[i++] = temp[--pos];
  }
  buf[i] = '\0';
}

// vsprintf 实现（已有实现）
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
        default: {
          *str++ = '%';
          *str++ = *p;
          break;
        }
      }
    } else {
      *str++ = *p;
    }
    p++;
  }
  *str = '\0';
  return (int)(str - out);
}

// sprintf 实现（已有实现）
int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int ret = vsprintf(out, fmt, ap);
  va_end(ap);
  return ret;
}

// printf 实现（已有实现）
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

// 下面我们来实现 vsnprintf 和 snprintf

// vsnprintf 实现：将格式化字符串写入 out 中，但最多写入 n 个字符（包括结尾的 '\0'）
// 返回值是“如果 n 足够大，最终写入的字符数（不含 '\0'）；否则返回本来需要写入的字符数”。
int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  int pos = 0;   // 记录实际写入到 out 的字符数量
  int total = 0; // 记录应写入的字符总数（不受 n 限制）
  const char *p = fmt;
  
  while (*p) {
    if (*p == '%') {
      p++;  // 跳过 '%'
      switch (*p) {
        case 'd': {  // 处理整型格式 %d
          int val = va_arg(ap, int);
          char buf[32];
          int_to_str(val, buf);
          char *b = buf;
          while (*b) {
            // 每个字符写入前都要判断是否还有空间写入（保留一个字节给 '\0'）
            if (n > 0 && pos < (int)(n - 1)) {
              out[pos] = *b;
              pos++;
            }
            total++;
            b++;
          }
          break;
        }
        case 's': {  // 处理字符串格式 %s
          char *s = va_arg(ap, char *);
          if (s == NULL) s = "(null)";
          while (*s) {
            if (n > 0 && pos < (int)(n - 1)) {
              out[pos] = *s;
              pos++;
            }
            total++;
            s++;
          }
          break;
        }
        default: {   // 遇到未知的格式符，直接输出 '%' 和后面的字符
          if (n > 0 && pos < (int)(n - 1)) {
            out[pos] = '%';
            pos++;
          }
          total++;
          // 输出未知格式符本身
          if (*p) {
            if (n > 0 && pos < (int)(n - 1)) {
              out[pos] = *p;
              pos++;
            }
            total++;
          }
          break;
        }
      }
    } else {
      // 普通字符处理
      if (n > 0 && pos < (int)(n - 1)) {
        out[pos] = *p;
        pos++;
      }
      total++;
    }
    p++;  // 处理完当前字符或格式符后，继续前进
  }
  // 写入终止的空字符，注意只有当 n > 0 时才需要写入
  if (n > 0) {
    out[pos] = '\0';
  }
  return total;
}

// snprintf 实现：调用 vsnprintf 完成实际工作
int snprintf(char *out, size_t n, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int ret = vsnprintf(out, n, fmt, ap);
  va_end(ap);
  return ret;
}
