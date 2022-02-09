#include "main.h"
#include <stdio.h>

/**
 * sumMult - print sum of all multiples of 3 and 5 lower than 1024
 * Return: sum
 */
int sumMult(void)
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
	return (sum);
}

/**
 * main - print
 * Return: 0
 */
int main(void)
{
	printf("%i\n", sumMult());

	return (0);
}
