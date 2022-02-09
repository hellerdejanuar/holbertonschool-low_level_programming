#include "main.h"

/**
 * print_diagonal - prints spaces ending in a backslash
 * @n: number of rows
 */

void print_diagonal(int n)
{
	int a, cn;

	for (cn = 0; cn < n && n > 0; cn++)
	{
		for (a = 0; a < cn; a++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
