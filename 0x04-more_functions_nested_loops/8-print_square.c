#include "main.h"

/**
 * print_square - prints a square of #
 * @size: square size
 */

void print_square(int size)
{
	int cn1, cn2;

	for (cn1 = 0; cn1 < size; cn1++)
	{
		for (cn2 = 0; cn2 < size; cn2++)
			_putchar('#');

		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
