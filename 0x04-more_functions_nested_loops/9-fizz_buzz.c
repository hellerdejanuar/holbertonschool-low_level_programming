#include <stdio.h>
#include "main.h"

/**
 * main - prints fizz or buzz based on input
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

		putchar(' ');
	}
	putchar('\n');
	return (0);
}
