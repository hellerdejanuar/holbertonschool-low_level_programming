#include "3-calc.h"

/**
 * main - main
 * @argv: argv
 * @argc: argc
 */
int main (int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
		return (-1);

	if 
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", ((*get_op_func(argv[2]))(a, b)));
	return (0);
}
