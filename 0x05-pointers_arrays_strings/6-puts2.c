#include "main.h"

/**
 * puts2 - ptrints every other character of string
 * @str: string to be printed
 */
void puts2(char *str)
{
	int a,b;

	while (str[a] != '\0')
		a++;

	for (b = 0; b <= a; b++)
	{
		if (2 % b == 0)
			_putchar(str[b]);
	}
	_putchar('\n');
}
