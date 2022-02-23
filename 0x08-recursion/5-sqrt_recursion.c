#include "main.h"

/**
 * _sqrt_recursion - calculates the natural square root of n
 * @n: number to find its square root
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (iterate (0, n));
}

int iterate(int x, int n)
{
	if (x * x < n)
		return (iterate (x + 1, n));

	else if (x * x == n)
		return (x);

	else
		return (-1);
}
