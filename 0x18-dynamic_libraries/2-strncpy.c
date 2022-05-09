#include "main.h"

/**
 * _strncpy - copies source to dest strin. n sets limit
 * @dest: destination
 * @src: source
 * @n: max number of chars to be printed
 * Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int sizeSrc, a;

	sizeSrc = _strlen(src);

	for (a = 0; a < n; a++)
	{
		if (a <= sizeSrc)
			dest[a] = src[a];

		else
			dest[a] = '\0';
	}

	return (dest);
}

