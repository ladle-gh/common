/* It is recommended that ladle/common/defs.h
 * is included at the beginning of header file */

/* Header guard ignored on purpose to allow
 * multiple headers to define and undefine
 * symbols without error */

#ifdef LADLE_KEEP_HEADER
#undef LADLE_KEEP_HEADER
#else
#undef export
#undef nonnull
#undef noexcept
#undef pure
#undef restricted
#undef BEGIN
#undef END
#undef LADLE_COMMON_HEADER_H
#endif
