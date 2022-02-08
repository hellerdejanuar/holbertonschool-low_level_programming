#include "main.h"

/**
 * print_last_digit - outputs absolute value of n
 * @n: character (in int) input to be checked
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	if (n >= 0)
	{
		return (n % 10);
	}
	else
	{
		return ((n % 10) * -1);
	}
}
