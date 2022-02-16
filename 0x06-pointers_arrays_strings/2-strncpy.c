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

	for (a = 0; a <= sizeSrc && a < n; a++)
	{
		dest[a] = src[a];
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
