#include "main.h"

/**
 * swap_int - swaps the value of to int variables
 * @a: int a to be swapped
 * @b: int b to be swapped
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
