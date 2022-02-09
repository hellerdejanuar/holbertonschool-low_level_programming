#include "main.h"

/**
 * more_numbers - writes some numbers
 */

void more_numbers(void)
{
	int times, x, rem, rvNum, nextD;
	for(times = 0; times < 10; times++)
	{
		for(x = 0; x <= 14; x++)
		{
			rvNum = rev(x); 
			for (rem = rvNum; rem != 0; rem /= 10)
			{
				nextD = rem % 10;
				_putchar(nextD +'0');
			}
		}
		_putchar('\n');
	}
}

/**
 * rev - reverses int
 * @a: int input
 * return: reversed int
 */

int rev(int a)
{
	int rem, rev = 0;

	while (a != 0)
	{
		rem = a % 10;
		rev = rev * 10 + rem;
		a /= 10;
	}
	return (rev);
}
