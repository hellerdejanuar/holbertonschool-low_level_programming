#include "main.h"

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
