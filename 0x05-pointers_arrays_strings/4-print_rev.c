#include "main.h"

/**
 * print_rev - ptrint string backwards
 * @s: string to be printed backwards
 */
void print_rev(char *s)
{
	int a;
	int size = _strlen(s);

	for (a = size - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}

/**
 * _strlen - returns length of string
 * @s: string to be evaluated
 * Return: string length
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{}
	return (a);
}
