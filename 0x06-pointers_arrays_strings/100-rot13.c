#include "main.h"

/**
 * rot13 - encodes text into rot13
 * @str: string to be modified
 * Return: string with rot13 encoding
 */
char *rot13(char *str)
{
	int n, x;
	char alph = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
	'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}
	char rot13 = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
	'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

	for (n = 0; str[n] != '\0'; n++)
	{
		for (a = 0; str[n] != alph[a]; a++)

		str[n] = rot13[a];
	}

	return (str);
}
