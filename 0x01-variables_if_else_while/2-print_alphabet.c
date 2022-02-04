#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - generates random number and prints text according to value
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
