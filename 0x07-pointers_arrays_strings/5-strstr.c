#include "main.h"
#include <stdio.h>

/**
 * _strstr - returns pointer to first occurance of substring needle
 * in string haystack
 * @needle: contains the reference characters.
 * @haystack: characters to be compared.
 * Return: pointer to first occurance of needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned long int i, j;
	
	if (*needle == '\0')
		return ('\0');

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *(needle))
		{
			for (j = 1; ; j++)
			{
				if (*(haystack + i + j) == *(needle + j))
					continue;

				else if (*(needle + j) == '\0')
					return (haystack + i);

				else
					break;
			}
		}
	}

	return ('\0');
}
