#include "main.h"

/**
 * _pow_recursion - returns x raiseto the power of y
 * @x: number to be multiplied by itself
 * @y: amount of times to multiply x by itself
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y >= 1)
		return (x * _pow_recursion(x, y - 1));

	else if (y == 0)
		return (1);

	else
		return (-1);
}
