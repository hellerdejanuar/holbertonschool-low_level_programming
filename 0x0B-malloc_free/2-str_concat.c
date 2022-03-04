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
	char *str;
	int i = 0, j = 0, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	do {
		i++;
	} while (s1[i]);

	do {
	   j++;
	} while (s2[j]);

	str = malloc((i + j + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (x = 0; x < i; x++)
	{
		str[x] = s1[x];
	}

	for (x = 0; x < j; x++)
	{
		str[x + i - 1] = s2[x];
	}

	return (str);
}
