#include "3-calc.h"

/**
 * op_add - adds
 * @a: left operand
 * @b: right operand
 *
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts
 * @a: left operand
 * @b: right operand
 *
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul
 * @a: left operand
 * @b: right operand
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides
 * @a: left operand
 * @b: right operand
 *
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates module
 * @a: left operand
 * @b: right operand
 *
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
