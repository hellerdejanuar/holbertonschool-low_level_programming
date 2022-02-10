#include "main.h"

/**
 * print__most_numbers - Print numbers from 0 to 10 except 2 and 4
 */
int print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)

		if (n != 50 && n != 52)
			_putchar(n);

	_putchar('\n');
}
