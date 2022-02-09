#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * print_times_table - prints times table according to args
 *
 * @n: number input
 */

/*
void print_times_table(int n)
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
			}
		}
	}
}
*/

char _itostr (int n)
{
	int intlen;
	char* intstr = "";
	int lastD;
	char lastChar;
	int x;
	
	if(n > 0)
	{
		intlen = (log(n) / 1) + 1;
		for (x = 0; x <= intlen; x++)
		{
			lastD = n % 10;
			lastChar = (char) lastD + '0';
			intstr = intstr + lastChar;
			printf("%s", intstr);
		}
	}
	return (0);
}
