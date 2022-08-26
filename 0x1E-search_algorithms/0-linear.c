#include "search_algos.h"

/**
 * linear_search - Finds the first occurance of value in array
 * @array: array
 * @size: size of the array
 * @value: value to search for
 * Return: Index if found. -1 if Failure
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned long int i;

	if (!array)
		return (-1);

	for (i = 0; i <= size; i++)
	{
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
