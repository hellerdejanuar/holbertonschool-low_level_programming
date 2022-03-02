#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies string to newly dinamically allocated array
 * @str: string to be copied
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, x;
	char *ar;

/*
 *	*blank = '\0'
 *
 * 	if (s1 == NULL)
 * 	s1 = blank
 */
		for (i = 0; s1[i] != '\0'; i++)

		for (j = 0; s2[j] != '\0'; j++)

		j++;

		ar = malloc((i + j + 1) * sizeof(char));

		if (ar == NULL)
			return (NULL);

		else
		{
			for (x = 0; x < i; x++)
				ar[x] = s1[x];

			for (x = 0; x < j; x++)
				ar[x + i] = s2[x];

			return (ar);
		}
}
