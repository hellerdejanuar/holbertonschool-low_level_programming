#include <stdio.h>

/**
 * main - Writes alphabet
 *
 * Return values
 * Return: (0) success
 */

int main(void)
{
	char c;
	char nl = '\n';

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar(nl);
	return (0);
}
