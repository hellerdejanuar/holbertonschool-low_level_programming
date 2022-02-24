#include "main.h"

/**
 * is_prime_number - calculates if int n is prime
 * @n: number to be evaluated
 * Return: 1 if it is prime, 0 if it doesn't
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	else
		return (iterate_prime(2, n));
}

/**
 * iterate_prime - iterates through ints untill it
 * reaches a prime or end of list
 * @i: number being tested to be a divisor of n
 * @n: number to evaluate
 * Return: 1 for prime 0 otherwise -1 error
 */
int iterate_prime(int i, int n)
{
	if (n % i == 0)
		return (0);

	else if (i >= n / 2)
		return (1);

	else if (n % i != 0)
		return (iterate_prime(i + 1, n));

	else
		return (-1);
}
