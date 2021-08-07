/* It is recommended that ladle/common/undefs.h
 * is included at the end of header file to
 * prevent conflict with client-defined macros */

/* Header guard ignored on purpose to allow
 * multiple headers to define and undefine
 * symbols without error */

// Define 'bool' for C
#ifndef __cplusplus
#include <stdbool.h>
#endif

#undef attribute

// Portable attribute syntax
#ifdef __GNUC__
#define attribute(...)  __attribute__((__VA_ARGS__))
#else
#define attribute(...)
#endif  // glibc || libstdc++

#undef restricted

// Use implementation-specific 'restrict', if exists
#ifdef __cplusplus
#ifdef __GNUC__
#define restricted  __restrict__
#elif defined(_MSC_VER)
#define restricted  __restrict
#else
#define restricted
#endif
#else
#define restricted  restrict
#endif  // C++

// 'extern' specifier for C++ compatability
#ifdef __cplusplus
#define BEGIN   extern "C" {
#define END     }
#else
#define BEGIN
#define END
#endif
