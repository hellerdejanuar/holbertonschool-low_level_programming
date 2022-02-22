#include "main.h"

/**
 * _strpbrk - compares a string to a set of chars and
 * outputs a pointer to the first coincidence
 * @accept: contains the reference characters.
 * @s: characters to be compared.
 * Return: pointer to first coincidence. Null if none
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	if (*s == '\0')
	   return ('\0');

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}

	if (*(s + i) == '\0')
		return ('\0');
}
