#include "main.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list argp;
	int sum;
	unsigned int i;

	va_start (argp, n);

	if (n == 0)
		return (0);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(argp, int);
	
	va_end(argp);
	return (sum);

}
