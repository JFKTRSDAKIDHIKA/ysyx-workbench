// iringbuf.h
#ifndef __IRINGBUF_H__
#define __IRINGBUF_H__

#include <cpu/decode.h>  // For Decode struct and vaddr_t

#ifdef CONFIG_IRINGBUF

#define IRINGBUF_SIZE 16  // size of instruction ring buffer

// declare inst ring buffer API
void iringbuf_push(Decode *s);
void iringbuf_print();

#else
// empty function
static inline void iringbuf_push(Decode *s) {}
static inline void iringbuf_print() {}
#endif

#endif // __IRINGBUF_H__