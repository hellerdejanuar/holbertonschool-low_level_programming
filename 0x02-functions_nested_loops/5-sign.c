#include "main.h"

/**
 * print_sign - prints sign of int
 * @n: character (in int) input to be checked
 * Return: 1 positive. 0 zero. -1 negative
 */

int print_sign(int n)
{
	if (n >= 1)
	{
		return (1);
	}
	else
	{
		if (n == 0)
			return (0);
		else
			return (-1);
	}

	_putchar('\n');
}
