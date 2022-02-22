#include "main.h"

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
	char asdf = '\0';
	char *null = &asdf;

	if (*needle == '\0' || *haystack == '\0')
		return (null);

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *(needle))
		{
			for (j = 1; ; j++)
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
	return (null);
}
