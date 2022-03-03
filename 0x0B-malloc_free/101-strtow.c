#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to be splitted
 * Return: pointer to array of pointers to chars
 */
char **strtow(char *str)
{
	char **ar;
	int i = 0, j = 0, x = 0, w = 0, wordc, wsize;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			wordc++;
	}
	wordc++;

	ar = malloc(wordc * sizeof(char *)); /* allocates array of words */
	if (ar == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] == ' ')
		{
			w++;
			wsize++;
			ar[w] = malloc(wsize * sizeof(char));
			if (ar[w] == NULL)
				return (NULL);

			wsize = 0;
		}

		wsize++;
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		for (i = 0; str[j + i] != ' '; i++)
		{
			ar[w][i] = str[j + i];
		}

		ar[w][i] = '\0';
		j += i;
	}
		return (ar);
}
