#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: separator to be printed between numbers
 * @n: number of integers passed to the fn
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argp;
	unsigned int i;

	va_start(argp, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1 || separator == NULL)
			printf("%d", va_arg(argp, int));

		else
		{
			printf("%d", va_arg(argp, int));
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(argp);
}
