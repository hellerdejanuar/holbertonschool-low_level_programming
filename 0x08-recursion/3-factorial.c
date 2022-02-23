#include "main.h"

/**
 * factorial - returns length of string using recursion
 * @n: number to be factorial'd
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n >= 1)
		return (n * factorial(n - 1));

	else if (n == 0)
		return (1);

	else
		return (-1);
}
