#include "main.h"

/**
 * print_binary - print an uli as binary
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned int word_sz = sizeof(n) * 4 - 1;
	int flag = 0;

	for (; word_sz >= 0; word_sz--)
	{
		/* if comparator & n is not 0 then true */
		if (1 << word_sz & n)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag || word_sz == 0)
			putchar('0');
	}
}
