#include <stdio.h>
#include "main.h"

/**
 * fizzbuzz - checks if input is in range 0 to 0
 */
void fizz_buzz(void)
{
	int a;
	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
			printf("Fizz");

		if (a % 5 == 0)
			printf("Buzz");
		
		if (a % 3 == 0 || a % 5 == 0)
			printf("%i", a);
	}
	_putchar('\n');
}
