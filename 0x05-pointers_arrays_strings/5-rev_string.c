#include "main.h"
#include <string.h>

/**
 * rev_string - reverses string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int a, b;
	int size = _strlen(s);
	char *str;

	str = s;

	for (b = 0, a = size - 1; s[b] != '\0' ; a--, b++)
	{
		str[a] = s[b];
	}
	s = str;
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
