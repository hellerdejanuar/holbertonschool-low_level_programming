#include "3-calc.h"

/**
 * main - main
 * @argv: argv
 * @argc: argc
 */
int main (int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
		return (-1);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	return ((*get_op_func(argv[2]))(a, b));
}
