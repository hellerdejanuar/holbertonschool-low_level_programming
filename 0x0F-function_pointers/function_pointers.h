#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *, size_t, void (*action)(int));
#endif
