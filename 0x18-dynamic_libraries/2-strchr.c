#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurance of a character
 * @c: character to be searched for
 * @s: position to start searching
 * Return: position of c
 */
char *_strchr(char *s, char c)
{
	int a;
	char *pos;

	for (a = 0; *(s + a) != c; a++)
	{
		if (*(s + a) == '\0')
			return ('\0');
	}

	pos = (s + a);

	return (pos);
}
