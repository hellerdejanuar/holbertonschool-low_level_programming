#include "main.h"

/**
 * puts_half - prints half of string
 * @str: string to be printed
 */
void puts2(char *str)
{
	int a;
	int size = 0;

	while (str[a] != '\0')
	{
		size++
	}

	

	for (a = 0; a < (size + 1) / 2; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\0');
	_putchar('\n');
}
