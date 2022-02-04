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
	int lastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastD = n % 10;

	printf("Last digit of %i is %i ", n, lastD);
	if (lastD > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (n < 6 && n !== 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	else
	{
		printf("and is 0\n");
	}
	return (0);
}
