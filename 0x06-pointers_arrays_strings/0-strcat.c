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
