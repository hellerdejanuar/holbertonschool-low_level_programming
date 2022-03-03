#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory
 * @nmemb: number of bytes to allocate
 * @size: element size
 * Return: Pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return(NULL);
	
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
