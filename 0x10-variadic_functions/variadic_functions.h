#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct print_selector - pair of selector char and function pointer
 *
 * @a_type: arg type
 * @f: function to be called
 */
typedef struct print_selector
{
	char *a_type;
	void (*f)(va_list ap);
} p_sel;

void p_str(va_list ap);
void p_float(va_list ap);
void p_int(va_list ap);
void p_char(va_list ap);
#endif
