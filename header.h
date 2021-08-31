/* It is recommended that ladle/common/undefs.h
 * is included at the end of header file to
 * prevent conflict with client-defined macros */

/* Header guard ignored on purpose to allow
 * multiple headers to define and undefine
 * symbols without error */

#ifdef  LADLE_COMMON_HEADER_H
#define LADLE_KEEP_HEADER
#else
#define LADLE_COMMON_HEADER_H

#undef export

/* Portable dynamically-linked symbol management
 * Symbol `LADLE_BUILD' should be defined by makefile */
#ifdef LADLE_BUILD
#ifdef _WIN32
#define export __declspec(dllexport)
#elif __GNUC__ >= 4
#define export __attribute__((visibility("default")))
#else
#define export
#endif  // #ifdef _WIN32 ...
#else
#ifdef _WIN32
#define export __declspec(dllimport)
#elif __GNUC__ >= 4
#define export __attribute__((visibility("default")))
#else
#define export
#endif  // #ifdef _WIN32 ...
#endif  // #ifdef LADLE_BUILD

#undef attribute

// Portable attribute syntax
#ifdef __GNUC__
#define nonnull     __attribute__((nonnull))
#define noexcept    __attribute__((nothrow))
#define pure        __attribute__((pure))
#else
#define nonnull
#define noexcept
#define pure
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

#undef BEGIN
#undef END

// 'extern' specifier for C++ compatability
#ifdef __cplusplus
#define BEGIN   extern "C" {
#define END     }
#else
#define BEGIN
#define END
#endif

#endif  // #ifndef LADLE_COMMON_HEADER_H
