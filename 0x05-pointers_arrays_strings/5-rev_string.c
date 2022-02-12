#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int a;
	int size = _strlen(s);

	for (a = size - 1, b = 0; a >= 0; a--, b++)
	{
		*s[b] = a;
	}
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
