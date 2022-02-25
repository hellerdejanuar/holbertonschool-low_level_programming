#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers passed by the args
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 Success, 1 error (not enough/ too many args)
 */
int main(int argc, char *argv[])
{
	int mul, x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		mul = x * y;
		printf("%i \n", mul);
		return (0);
	}

	printf("\n");
	return (1);
}
