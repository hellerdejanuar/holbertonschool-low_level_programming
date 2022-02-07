#include "main.h"

/**
 * print_alphabet_x10 - prints the entire alphabet
 */

void print_alphabet_x10(void)
	{
		char alpha;
		int x;

		for (x = 0; x < 10; x++)
		{
			for (alpha = 'a'; alpha <= 'z'; alpha++)
			{
				_putchar(alpha);
			}
		_putchar('\n');
		}
	}
