#include "main.h"

/**
 * puts_half - prints half of string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int a;
	int size = 0;

	while (str[size] != '\0')
	{
		size++;
	}

	for (a = (size + 1) / 2; a < size; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
