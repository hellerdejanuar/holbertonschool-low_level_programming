#include "3-calc.h"

/**
 * op_add - adds
 * @a: left operand
 * @b: right operand
 */
int op_add (int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts
 * @a: left operand
 * @b: right operand
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_sub - mul
 * @a: left operand
 * @b: right operand
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides
 * @a: left operand
 * @b: right operand
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates module
 * @a: left operand
 * @b: right operand
 */
int op_mod(int a, int b)
{
	return (a % b);
}
