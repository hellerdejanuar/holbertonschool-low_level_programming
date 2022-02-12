#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of ints
 * @a: array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int cn;
	int size = 0;

	while (a[size] != '\0')
	{
		size++;
	}

	for (cn = 0; cn < size && cn < n; cn++)
	{
		printf("%i", a[cn]);
		if (cn < size - 1 && cn < n - 1)
			printf(", ");
	}

	printf("\n");
}
