#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses array of ints
 * @a: array to be reversed
 * @n: number of elements to be printed
 */
void reverse_array(int *a, int n)
{
	int cn1;
	int tmp;

	for (cn1 = 0; cn1 < n / 2; cn1++)
	{
		tmp = a[cn1];
		a[cn1] = a[n - cn1 - 1];
		a[n - cn1 - 1] = tmp;
	}
}

