#ifndef LOGGER_HELPER_H
#define LOGGER_HELPER_H
#include <stdint.h>
#include <stdarg.h>


typedef int (*fnptr_t)(unsigned c, void *helper);

int string_format(const char *fmt, va_list args, fnptr_t fn, void *ptr);

void serial_log(const char *fmt, ...);

#define DEBUG serial_log

#endif /* DEBUG_HELPER_H */

