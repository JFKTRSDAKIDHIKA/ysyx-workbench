// iringbuf.h
#ifndef __IRINGBUF_H__
#define __IRINGBUF_H__

#include <cpu/decode.h>  // For Decode struct and vaddr_t

#ifdef CONFIG_IRINGBUF

// 声明环形缓冲区操作接口
void iringbuf_push(Decode *s);
void iringbuf_print();

#else
// 空实现（当 CONFIG_IRINGBUF 未定义时）
static inline void iringbuf_push(Decode *s) {}
static inline void iringbuf_print() {}
#endif

#endif // __IRINGBUF_H__