#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strdup - copies string to newly dinamically allocated array
 * @str: string to be copied
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *ar;

	if (str == NULL)
		return (NULL);

	else
	{
		for (size = 0; str[size] != '\0'; size++)

		ar = malloc(size * sizeof(char) + 1);

		if (ar == NULL)
			return (NULL);

		else
		{
			for (i = 0; i <= size ; i++)
				ar[i] = str[i];

			return (ar);
		}
	}
}
