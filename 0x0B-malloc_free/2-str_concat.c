#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * str_concat - concatenates string to newly dinamically allocated array
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, x;
	char *ar;


	for (i = 0; s1[i] != '\0'; i++)

	for (j = 0; s2[j] != '\0'; j++)

	j++;

	ar = malloc((i + j + 1) * sizeof(char));

	if (ar == NULL)
		return (NULL);

	else
	{
		for (x = 0; x < i; x++)
		{
			printf("debug\n");
		/*	ar[x] = s1[x];*/
		}

		for (x = 0; x < j; x++)
			ar[x + i] = s2[x];

		return (ar);
	}
}
