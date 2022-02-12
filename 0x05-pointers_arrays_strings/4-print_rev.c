#include "main.h"

/**
 * print_rev - ptrint string backwards
 * @s: string to be printed backwards
 */
void print_rev(char *s)
{
	int a;
	size_t size = _strlen(s);

	for (a = size; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
