#include "main.h"

/**
 * print_rev - ptrint string backwards
 * @s: string to be printed backwards
 */
void print_rev(char *s)
{
	int a;
	size_t size = sizeof(s);

	for (a = size - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\0');
	_putchar('\n');
}
