#include <stdio.h>

/**
 * print_name - prints name based on the function it's passed
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
