#include "main.h"
#include <math.h>

/**
 * times_table - prints all numbers times all others from 0 to 10
 */

void print_times_table(int n)
{
	int col;
	int row;
	int firstD;
	int secD;
	int x;
	int intlen;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			x = col * row;
			if (x > 9)
			{
				secD = x % 10;
				firstD = (x - secD) / 10;
				_putchar(firstD + '0');
				_putchar(secD + '0');
			}
			else
			{
				if (col != 0)
					_putchar(' ');

				_putchar(x + '0');
			}
			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
				intlen = log(10);
			}
		}
	}
}
