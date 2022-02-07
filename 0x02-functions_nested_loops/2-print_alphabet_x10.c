#include "main.h"

/**
 * print_alphabet - prints the entire alphabet
 */

void print_alphabet(void)
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
