#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- prints the sum of the two diagonals of a square matrix
 * @a: matrix
 * @size: size for the matrix
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, x, y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			if (y == x)
			{
				sum1 += *(a + x + (size * y));
			}

			if (y == (size - 1) - x)
			{
				sum2 += *(a + x + (size * y));
			}
		}
	}

	printf("%i, %i\n", sum1, sum2);
}

