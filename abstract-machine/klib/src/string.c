#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

// 1. 计算字符串长度，不包含结尾 '\0'
size_t strlen(const char *s) {
  size_t len = 0;
  while (*s++) {
    len++;
  }
  return len;
}

// 2. 复制字符串，包括结尾 '\0'
char *strcpy(char *dst, const char *src) {
  char *ret = dst;
  while ((*dst++ = *src++) != '\0');
  return ret;
}

// 3. 在 n 范围内复制字符串，若 src 长度不足 n，则用 '\0' 补足
char *strncpy(char *dst, const char *src, size_t n) {
  char *ret = dst;
  while (n && *src) {
    *dst++ = *src++;
    n--;
  }
  // 如果还没到 n = 0，就补 '\0'
  while (n--) {
    *dst++ = '\0';
  }
  return ret;
}

// 4. 将 src 追加到 dst 后面，包含结尾 '\0'
char *strcat(char *dst, const char *src) {
  char *ret = dst;
  // 先移动到 dst 的结尾
  while (*dst) dst++;
  // 把 src 内容拷贝到 dst 末尾
  while ((*dst++ = *src++) != '\0');
  return ret;
}

// 5. 字符串比较，返回值 < 0 / = 0 / > 0
int strcmp(const char *s1, const char *s2) {
  while (*s1 && (*s1 == *s2)) {
    s1++;
    s2++;
  }
  return (*s1) - (*s2);
}

// 6. 在 n 范围内比较字符串
int strncmp(const char *s1, const char *s2, size_t n) {
  while (n && *s1 && (*s1 == *s2)) {
    s1++;
    s2++;
    n--;
  }
  if (n == 0) {
    return 0; // 前 n 个字符均相等
  }
  return (unsigned char)(*s1) - (unsigned char)(*s2);
}

// 7. 将内存区 s 的前 n 个字节设置为 c
void *memset(void *s, int c, size_t n) {
  unsigned char *p = (unsigned char *)s;
  while (n--) {
    *p++ = (unsigned char)c;
  }
  return s;
}

// 8. 内存移动，可以正确处理重叠
void *memmove(void *dst, const void *src, size_t n) {
  unsigned char *d = (unsigned char *)dst;
  const unsigned char *s = (const unsigned char *)src;
  if (d == s || n == 0) {
    return dst;
  }
  // 如果 dst 与 src 区间有重叠，并且 dst 在 src 之后
  // 就从末尾开始拷贝，以避免覆盖
  if (d > s && d < s + n) {
    d += n - 1;
    s += n - 1;
    while (n--) {
      *d-- = *s--;
    }
  } else {
    // 正常从头开始拷贝
    while (n--) {
      *d++ = *s++;
    }
  }
  return dst;
}

// 9. 内存拷贝，不处理重叠（若有重叠建议用 memmove）
void *memcpy(void *out, const void *in, size_t n) {
  unsigned char *dst = (unsigned char *)out;
  const unsigned char *src = (const unsigned char *)in;
  while (n--) {
    *dst++ = *src++;
  }
  return out;
}

// 10. 比较两个内存区的前 n 个字节
int memcmp(const void *s1, const void *s2, size_t n) {
  const unsigned char *p1 = (const unsigned char *)s1;
  const unsigned char *p2 = (const unsigned char *)s2;
  while (n--) {
    if (*p1 != *p2) {
      return (int)(*p1 - *p2);
    }
    p1++; 
    p2++;
  }
  return 0;
}

#endif
