#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Finds the first occurance of value in array
 * @array: array
 * @size: size of the array
 * @value: value to search for
 * Return: Index if found. -1 if Failure
 */   
int recursive_binsearch(int *array, size_t lower, size_t upper, int value)
{
	size_t i, j;

	if (upper >= lower)
	{
		for (j = lower; j < upper ; j++)
                {
			printf("%d", array[j]);
			if (j < upper - 1)
                                printf(", ");
                        else
                                printf("\n");
                }
		i = lower + (upper - lower ) / 2;
		if (array[i] == value)
			return i;
		if (array[i] > value)
			return recursive_binsearch(array, lower, i - 1, value);
		return recursive_binsearch(array, i + 1, upper, value);
	}
	return -1;
}

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (recursive_binsearch(array, 0, size, value));
}
