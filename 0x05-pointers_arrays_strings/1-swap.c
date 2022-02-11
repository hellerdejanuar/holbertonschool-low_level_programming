#include "main.h"

/**
 * swap_int - swaps the value of to int variables
 * @a,b: ints to be swapped
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
