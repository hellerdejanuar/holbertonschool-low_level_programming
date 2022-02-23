#include "main.h"

/**
 * _sqrt_recursion - calculates the natural square root of n
 * @n: number to find its square root
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (iterate(0, n));
}

/**
 * iterate - iterates through ints untill it reaches n
 * @x: numbers to multiply together
 * @n: target number
 * Return: -1 for non existent, x for natural square root
 */
int iterate(int x, int n)
{
	if (x * x < n)
		return (iterate(x + 1, n));

	else if (x * x == n)
		return (x);

	else
		return (-1);
}
