#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: source 1
 * @s2: source 2
 * Return: 0 if both sources are equal, negative int if the first distinct
 * char is is less than that of 2, positive if it's greater.
 */
int _strcmp(char *s1, char *s2)
{

	for (; *s1 == *s2; s1++, s2++)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
	}
	return (*s1 - *s2);
}
