#include "main.h"

/**
 * _abs - outputs absolute value of n
 * @n: character (in int) input to be checked
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}

	_putchar('\n');
}
