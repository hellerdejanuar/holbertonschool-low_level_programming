#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * str_concat - concatenates string to newly dinamically allocated array
 * @s2: string 2
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 1, j = 1, x;
	char *ar;

	if (s1 == NULL)
		s1 = "";

	else
		for (i = 0; s1[i] != '\0'; i++)

	if (s2 == NULL)
		s2 = "";

	else
		for (j = 0; s2[j] != '\0'; j++)


	ar = malloc((i + j + 1) * sizeof(char));

	if (ar == NULL)
		return (NULL);

	else
	{
		for (x = 0; s1[x] != 0; x++)
			ar[x] = s1[x];
		
		for (x = 0; s2[x] != 0; x++)
			ar[x + i] = s2[x];

		ar[j + i] = '\0';

		return (ar);
	}
}
