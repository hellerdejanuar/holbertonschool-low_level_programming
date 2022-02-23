#include "main.h"

/**
 * factorial - returns length of string using recursion
 * @n: number to be factorial'd
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n != 0)
	{
		n = factorial(n - 1) * n;
		return (n);
	}
	return (n);
}
