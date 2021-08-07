// Basic compiler directives for implementation files

#ifndef LADLE_COMMON_ERROR_H
#define LADLE_COMMON_ERROR_H

// Allows for null check in spite of 'nonnull' attribute
#pragma GCC diagnostic ignored  "-Wnonnull-compare"

/* Error handler
 * For use within an if-statement
 * Preserves original cause of error */
#define error(err, ret) {   \
    if (!errno)             \
        errno = err;        \
    return ret;             \
}

#endif  // #ifndef LADLE_COMMON_ERROR_H
