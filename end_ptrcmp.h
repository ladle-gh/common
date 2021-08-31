/* It is recommended that ladle/common/ptrcmp.h
 * is included at the beginning of header file */

/* Header guard ignored on purpose to allow
 * multiple headers to define and undefine
 * symbols without error */

#ifdef LADLE_KEEP_PTRCMP
#undef LADLE_KEEP_PTRCMP
#else
#undef ptr_lt
#undef ptr_gt
#undef ptr_lte
#undef ptr_gte
#undef ptr_eq
#undef ptr_neq
#undef LADLE_COMMON_PTRCMP_H
