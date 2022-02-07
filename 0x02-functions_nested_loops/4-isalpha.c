#include "main.h"

/**
 * _islower - checks if char is alphabetic
 * @c: character (in int) input to be checked
 * Return: 1 True. 0 False
 */


int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
	_putchar('\n');
}
