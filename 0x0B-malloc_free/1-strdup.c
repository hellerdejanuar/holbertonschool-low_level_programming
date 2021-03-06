#include <stdlib.h>
#include "main.h"

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

		size++;

		ar = malloc((size + 1) * sizeof(char));

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
