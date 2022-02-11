#include "main.h"

/**
 * _puts - ptrint string
 * @str: string to be printed
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\0');
}
