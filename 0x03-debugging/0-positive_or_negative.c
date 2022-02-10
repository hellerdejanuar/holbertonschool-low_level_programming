#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - generates random number and prints text according to value
 *
 * Return values
 * Return: (0) success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}
	return (0);
}
