#include "main.h"

/**
 * _strspn - counts the amount of chars in s that are part from accept
 * @accept: contains the reference characters.
 * @s: characters to be compared.
 * Return: number of coincidences.
 */
unsigned int _strspn(char *s, char *accept)
{
	int span = 0, i, j;

	for(i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(s + i) != *(accept + j))
		{
			span++;
			continue;
		}
	}

	return(span);
}
