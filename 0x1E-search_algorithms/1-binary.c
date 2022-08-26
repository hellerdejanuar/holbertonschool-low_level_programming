#include "search_algos.h"

/**
 * binary_search - Finds the first occurance of value in array
 * @array: array
 * @size: size of the array
 * @value: value to search for
 * Return: Index if found. -1 if Failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t j; 
	size_t i = 0; 
	size_t upper = size - 1; 
	size_t lower = 0;

	if (!array) 
		return (-1);

	while (lower <= upper)
	{
		printf("Searching in array: ");
		for (j = lower; j <= upper ; j++)
		{
			printf("%d", array[j]);
			if (j <= upper - 1)
				printf(", ");
			else
				printf("\n");
		}

		i = lower + (upper - lower) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] < value)
			lower = i + 1;
		else if (array[i] > value)
			upper = i - 1;
	}
	return (-1);
}
