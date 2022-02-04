#include <stdio.h>

/**
 * main - prints alphabet in this order a-z A-Z
 *
 * Return values
 * Return: (0) success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		putchar(c);
	}

	putchar(10);
	return (0);
}
