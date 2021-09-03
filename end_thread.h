/* It is recommended that ladle/common/thread.h
 * is included at the beginning of header file */

/* Header guard ignored on purpose to allow
 * multiple headers to define and undefine
 * symbols without error */

#ifdef LADLE_KEEP_THREAD
#undef LADLE_KEEP_THREAD
#else
#undef thread
#endif
