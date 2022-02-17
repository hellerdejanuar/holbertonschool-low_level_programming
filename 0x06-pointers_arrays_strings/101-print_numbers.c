#include "main.h"

/**
 * print_number - print some numbers
 * @n: number to be printed
 */

void print_number(int n)
{
	int rem, rvNum, nextD;

	rvNum = rev(n);
	for (rem = rvNum; rem != 0; rem /= 10)
	{
		nextD = rem % 10;
		_putchar(nextD + '0');
	}
	_putchar('\n');
}

/**
 * rev - reverses int
 * @a: int input
 *
 * Return: rev reversed int
 */

int rev(int a)
{
	int rem, rev = 0;

	if (a == 0)
	{
		return (0);
	}
	else
	{
		while (a != 0)
		{
			rem = a % 10;
			rev = rev * 10 + rem;
			a /= 10;
		}
		return (rev);
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/

int _putchar(char c)
{
		return (write(1, &c, 1));
}
