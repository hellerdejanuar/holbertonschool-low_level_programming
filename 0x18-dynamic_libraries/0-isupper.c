#include "main.h"

/**
 * _isupper - checks if input is in range A to Z
 * @c: input to be checked
 * Return: 1 True 0 False
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
