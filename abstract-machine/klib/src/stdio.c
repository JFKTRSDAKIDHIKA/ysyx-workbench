#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

static void int_to_str(int value, char *buf);
static void int_to_hex(unsigned int value, char *buf);

int vsprintf(char *out, const char *fmt, va_list ap) {
  char *str = out;
  const char *p = fmt;

  while (*p) {
      if (*p == '%') {
          p++;
          // 解析宽度和填充
          int width = 0;
          int pad_zero = 0;
          if (*p == '0') {
              pad_zero = 1; // 左侧补 0
              p++;
          }
          while (*p >= '0' && *p <= '9') {
              width = width * 10 + (*p - '0');
              p++;
          }

          switch (*p) {
              case 'd': {
                  int val = va_arg(ap, int);
                  char buf[32];
                  int_to_str(val, buf);
                  int len = strlen(buf);
                  if (pad_zero && width > len) {
                      for (int i = 0; i < width - len; i++) {
                          *str++ = '0';
                      }
                  }
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
              case 'x': {
                  unsigned int val = va_arg(ap, unsigned int);
                  char buf[32];
                  int_to_hex(val, buf);
                  int len = strlen(buf);
                  if (pad_zero && width > len) {
                      for (int i = 0; i < width - len; i++) {
                          *str++ = '0';
                      }
                  }
                  char *b = buf;
                  while (*b) {
                      *str++ = *b++;
                  }
                  break;
              }
              default: {
                  *str++ = '%';
                  if (*p) *str++ = *p; // 避免越界
                  break;
              }
          }
          p++;
      } else {
          *str++ = *p++;
      }
  }
  *str = '\0';
  return (int)(str - out);
}

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

// Function vsnprintf only supports "%d" and "%s".
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

int snprintf(char *out, size_t n, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int ret = vsnprintf(out, n, fmt, ap);
  va_end(ap);
  return ret;
}

// helper function
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

static void int_to_hex(unsigned int value, char *buf) {
  char temp[32]; 
  int pos = 0;

  if (value == 0) {
    temp[pos++] = '0';
  } else {
    while (value > 0) {
      int digit = value % 16;
      temp[pos++] = (digit < 10) ? ('0' + digit) : ('a' + (digit - 10));
      value /= 16;
    }
  }

  int i = 0;
  while (pos > 0) {
    buf[i++] = temp[--pos];
  }
  buf[i] = '\0';
}
