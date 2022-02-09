#include <stdio.h>
#include "main.h"

/**
 * main - prints fizz or buzz based on input
 *
 * Return: 0 success
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
			printf("Fizz");

		if (a % 5 == 0)
			printf("Buzz");

		if (a % 3 != 0 && a % 5 != 0)
			printf("%i", a);

		if (a < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
