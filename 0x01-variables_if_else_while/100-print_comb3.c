#include <stdio.h>

/**
 * main - prints combination of numbers
 */
void main(void)
{
	int i, j , x = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; i <= 9; j++)
		{
			if (i < j)
			{
				if (x != 0)
				{
					putchar(',');
					putchar(' ');
				}
				else 
				{
					x = 1;
				}
					putchar(i + '0');
					putchar(j + '0');
			}
		}
	}
}
