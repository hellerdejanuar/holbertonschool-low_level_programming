#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates strings. src after dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int sizeDest, sizeSrc, a;
	
	sizeSrc = _strlen(src);
	sizeDest = _strlen(dest);
	
	for (a = 0; a < sizeSrc && a < n; a++)
	{
		dest[sizeDest + a] = src[a];
	}
	if (a == sizeSrc)
		dest[sizeDest + a] = '\0';

	return (dest);
}

/**
 * _strlen - takes a string and outputs the number of chars
 */
int _strlen(char *str)
{
	int cn = 0;

	while (str[cn] != '\0')
		cn++;

	return (cn);
}
