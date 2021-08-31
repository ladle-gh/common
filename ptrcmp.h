#ifdef LADLE_COMMON_PTRCMP_H
#define LADLE_KEEP_PTRCMP
#else
#define LADLE_COMMON_PTRCMP_H
#include <stdint.h>

#ifndef UINTPTR_MAX
#pragma GCC error "<ladle/common/ptrcmp.h>: Program requires `uintptr_t'"
#endif  // #ifndef UINTPTR_MAX

/* Takes:   void *, void *
 * Returns: bool
 * 
 * Macros for defined pointer comparison */
#define ptr_lt(x, y)    ((uintptr_t) (x) < (uintptr_t) (y))
#define ptr_gt(x, y)    ((uintptr_t) (x) > (uintptr_t) (y))
#define ptr_lte(x, y)   ((uintptr_t) (x) <= (uintptr_t) (y))
#define ptr_gte(x, y)   ((uintptr_t) (x) >= (uintptr_t) (y))
#define ptr_eq(x, y)    ((uintptr_t) (x) == (uintptr_t) (y))
#define ptr_neq(x, y)   ((uintptr_t) (x) != (uintptr_t) (y))

#endif  // #ifndef LADLE_COMMON_PTRCMP_H
