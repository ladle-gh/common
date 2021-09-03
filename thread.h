// Thread-local storage class specifier

#ifdef LADLE_COMMON_THREAD
#define LADLE_KEEP_THREAD
#else
#define LADLE_COMMON_THREAD
#undef thread
#ifdef __GNUC__
#define thread __thread
#else
#define thread
#endif  // #ifdef __GNUC__
#endif  // #ifdef LADLE_COMMON_THREAD
