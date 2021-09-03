/* It is recommended that ladle/common/header.h
 * is included at the beginning of header file */

/* Header guard ignored on purpose to allow
 * multiple headers to define and undefine
 * symbols without error */

#ifdef LADLE_KEEP_HEADER
#undef LADLE_KEEP_HEADER
#else
#ifndef LADLE_COMMON_LIB_H
#undef export
#endif
#undef nonnull
#undef noexcept
#undef pure
#undef restricted
#undef BEGIN
#undef END
#undef LADLE_COMMON_HEADER_H
#endif
