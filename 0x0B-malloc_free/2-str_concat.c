#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies string to newly dinamically allocated array
 * @str: string to be copied
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size;
	char *ar;

/*
 *	*blank = '\0'
 *
 * 	if (s1 == NULL)
 * 	s1 = blank
 */
		for (size = 0; s1[size] != '\0'; size++)
		
		for (; s2[size] != '\0'; size++)

		size++;

		ar = malloc((size + 1) * sizeof(char));

		if (ar == NULL)
			return (NULL);

		else
		{
			for (i = 0; s1[i] != '\0'; i++)
				ar[i] = s1[i];

			for (j = 0; i < size; i++, j++)
				ar[i] = s2[j];

			return (ar);
		}
}
