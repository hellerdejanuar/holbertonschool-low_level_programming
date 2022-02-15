#include "main.h"

char *_strcat(char *dest, char *src);
{
	int sizeDest, sizeSrc, a;
	char *aux;

	sizeSrc = str(src);
	sizeDest = str(dest);
	
	for (a = 0, a < sizeDest + sizeSrc; a++)
		aux[a + sizeDest] = src[a];

	dest = aux;
}

/**
 * _strlen - takes a string and outputs the number of chars
 */

int _strlen(char str[])
{
	int cn;

	while (str[cn] != '\0')
		cn++

	return (cn);
}
	
