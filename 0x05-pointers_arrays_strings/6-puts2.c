#include "main.h"

/**
 * puts2 - ptrints every other character of string
 * @str: string to be printed
 */
void puts2(char *str)
{
	int a;

	for (a = 0; a < 1000 ; a += 1)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
