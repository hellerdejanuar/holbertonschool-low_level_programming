#include "main.h"

char *_strncat(char *dest, char *src, int n);
{
	int sizeDest, sizeSrc, a;
	char *aux;

	sizeSrc = str(src);
	sizeDest = str(dest);
	
	for (a = 0, a < sizeDest + sizeSrc && a < n; a++)
		aux[a + sizeDest - 1] = src[a];

	dest = aux;
}

/**
 * _strlen - takes a string and outputs the number of chars
 */

int _strlen(char *str)
{
	int cn;

	while (str[cn] != '\0')
		cn++

	return (cn);
}
	
