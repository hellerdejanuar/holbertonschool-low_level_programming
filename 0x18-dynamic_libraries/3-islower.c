#include "main.h"

/**
 * _islower - checks if char is lowercase
 * @c: character (in int) input to be checked
 * Return: 1 True. 0 False
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
