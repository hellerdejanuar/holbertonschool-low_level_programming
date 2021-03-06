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
	unsigned int i, j;

	if (*haystack == '\0' || *needle == '\0')
		return ('\0');

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *(needle))
		{
			for (j = 1; *(haystack + i + j) != '\0' ; j++)
			{

				if (*(needle + j) == '\0')
					return (haystack + i);

				else if (*(haystack + i + j) == *(needle + j))
					continue;

				else
					break;
			}
		}
	}
	return ('\0');
}
