#include "main.h"

/**
 * print_line - prints spaces ending in a backslash
 * @n: number of dashes
 */

void print_line(int n)
{
	int cn;

	for (cn = 0; cn < n; cn++)
		_putchar('_');

	_putchar('\n');
}
