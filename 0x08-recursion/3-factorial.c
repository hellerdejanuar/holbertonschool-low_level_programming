#include "main.h"

/**
 * factorial - returns length of string using recursion
 * @n: number to be factorial'd
 * Return: factorial of n
 */
int factorial(int n)
{
	int f = 0;

	if (n > 0)
	{
		f = f * n;
		n = factorial(n - 1);
		return (n);
	}
	return (f);
}
