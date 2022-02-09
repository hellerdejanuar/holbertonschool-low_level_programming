#include "main.h"

/**
 * print_diagonal - prints spaces ending in a backslash
 * @n: number of dashes
 */

void print_line(int n)
{
	int cn;

	for (cn = 0; cn < n; cn++)
	{
		_putchar('_');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
