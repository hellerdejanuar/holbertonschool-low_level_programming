#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array with all the values from min to max, ordered
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array. NULL if fail or if min > max.
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc((max - min + 1) * sizeof(int));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i + min <= max; i++)
		ar[i] = i + min;

	return (ar);
}
