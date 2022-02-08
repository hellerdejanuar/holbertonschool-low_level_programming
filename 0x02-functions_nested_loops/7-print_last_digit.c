#include "main.h"

/**
 * print_last_digit - outputs absolute value of n
 * @n: character (in int) input to be checked
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int lastD;

	if (n >= 0)
	{
		lastD = n % 10;
	}
	else
	{
		lastD = -n % 10;
	}

	_putchar(lastD + '0');
	return(lastD);
}
