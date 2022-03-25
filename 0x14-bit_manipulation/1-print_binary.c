#include "main.h"

/**
 * print_binary - print an uli as binary
 * @n: number
 */
void print_binary(unsigned long int n)
{
	long int word_sz = sizeof(n) * 4 - 1;
	int flag = 0;

	for (; word_sz >= 0; word_sz--)
	{i
		/* if comparator & n is not 0 then true */
		if (1 << word_sz & n)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag || word_sz == 0)
			_putchar('0');
	}
}
