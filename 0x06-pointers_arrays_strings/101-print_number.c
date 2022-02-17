#include "main.h"

/**
 * print_number - print some numbers
 * @n: number to be printed
 */

void print_number(int n)
{
	int rem, rvNum, nextD;

	if (n == 0)
		_putchar('0');

	else
	{
		if (n > 0)
		{
			rvNum = rev(n);
			for (rem = rvNum; rem != 0; rem /= 10)
			{
				nextD = rem % 10;
				_putchar(nextD + '0');
			}
		}
		else if (n < 0)
		{
			n = n * -1;
			rvNum = rev(n);
			_putchar('-');
			for (rem = rvNum; rem != 0; rem /= 10)
			{
				nextD = rem % 10;
				_putchar(nextD + '0');
			}
		}

	}
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
