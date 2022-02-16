#include "main.h"

/**
 * _strcat - concatenates src after dest
 */
char *_strcat(char *dest, char *src)
{
	int sizeDest, sizeSrc, a;

	sizeSrc = _strlen(src);
	sizeDest = _strlen(dest);
	
	for (a = 0; a < sizeDest + sizeSrc; a++)
		dest[a + sizeDest - 1] = src[a];

	return(dest);
}

/**
 * _strlen - takes a string and outputs the number of chars
 */

int _strlen(char *str)
{
	int cn;

	while (str[cn] != '\0')
		cn++;

	return (cn);
}
	
