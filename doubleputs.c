#define _GNU_SOURCE
#include <dlfcn.h>

typedef int (*original_puts_function_type)(const char *str);

int puts(const char *str) {
  original_puts_function_type original_puts;
  original_puts = (original_puts_function_type)dlsym(RTLD_NEXT, "puts");
  original_puts(str);
  return original_puts(str);
}
