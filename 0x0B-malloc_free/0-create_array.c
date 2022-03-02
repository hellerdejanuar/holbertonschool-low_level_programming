#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array using malloc
 * @size: size of array
 * @c: character to init array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	else
	{
		ar = malloc(size * sizeof(char));

		if (ar == NULL)
			return (NULL);

		else
		{
			for (i = 0; i < size; i++)
				ar[i] = c;

			return (ar);
		}
	}
}
