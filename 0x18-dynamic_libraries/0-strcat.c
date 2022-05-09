#include "main.h"

/**
 * _strcat - concatenates strings. src after dest
 * @dest: destination string
 * @src: source string
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int sizeDest, sizeSrc, a;

	sizeSrc = _strlen(src);
	sizeDest = _strlen(dest);

	for (a = 0; a <= sizeSrc; a++)
	{
		dest[sizeDest + a] = src[a];
	}

	return (dest);
}

