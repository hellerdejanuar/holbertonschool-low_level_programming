#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory
 *
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
