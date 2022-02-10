#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: number of rows
 */

void print_triangle(int size)
{
	int a, cn;

	for (a = 0; a < size; a++)
	{
		for (cn = a; cn < size; cn++)
		{
			_putchar(' ');
		}

		for (cn = 0; cn <= a; cn++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
