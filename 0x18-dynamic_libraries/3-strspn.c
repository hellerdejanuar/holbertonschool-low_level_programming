#include "main.h"

/**
 * _strspn - counts the amount of chars in s that are part from accept
 * @accept: contains the reference characters.
 * @s: characters to be compared.
 * Return: number of coincidences.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int span = 0, i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				span++;
				break;
			}
		}

		if (*(accept + j) ==  '\0')
			break;
	}

	return (span);
}
