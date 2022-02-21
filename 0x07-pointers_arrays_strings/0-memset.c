#include "main.h"

/**
 * _memset - sets the first n bytes of memory area pointed to by s with
 * constant byte b.
 * @s: pointer
 * @b: filler byte
 * @n: number of bytes to fill
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}
	return (&*s);
}
