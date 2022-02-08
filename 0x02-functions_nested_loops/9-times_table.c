#include "main.h"

/**
 * times_table - prints all numbers times all others from 0 to 10
 */

void times_table(void)
{
	int col;
	int row;
	int firstD;
	int secD;
	int x;

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
			}
		}
	}
}

