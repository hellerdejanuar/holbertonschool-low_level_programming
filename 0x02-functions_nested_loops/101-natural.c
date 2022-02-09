#include "main.h"
#include <stdio.h>

/**
 * main - print sum of all multiples of 3 and 5 lower than 1024
 */
void main(void)
{
	int max = 1024;
	int a = 3;
	int b = 5;
	int sum = 0;
	int x;

	for (x = 0; x < max; x++)
	{
		if (x % a == 0 || x % b == 0)
		{
		sum += x;
		}
	}
	printf("%i\n", sum);
}
