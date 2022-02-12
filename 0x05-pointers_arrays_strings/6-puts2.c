#include "main.h"

/**
 * puts2 - ptrints every other character of string
 * @s: string to be printed backwards
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != 0; a + 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
