#include "main.h"

/**
 * _strncat - concatenates strings. src after dest. n sets limit
 * @dest: destination
 * @src: source
 * @n: number of chars to be printed maxs
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int sizeDest, sizeSrc, a;

	sizeSrc = _strlen(src);
	sizeDest = _strlen(dest);

	for (a = 0; a <= sizeSrc && a <= n; a++)
	{
		dest[sizeDest + a] = src[a];
	}

	return (dest);
}

/**
 * _strlen - takes a string and outputs the number of chars
 * @str: string to be counted
 * Return: number of chars
 */
int _strlen(char *str)
{
	int cn = 0;

	while (str[cn] != '\0')
		cn++;

	return (cn);
}
