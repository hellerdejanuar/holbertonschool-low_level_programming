#include "main.h"
#include "stdio.h"

/**
 * add - adds a to b
 * @a: number 1
 * @b: number 2
 *
 * Return Messages
 * Return: n numbers a and b added together
 */

void print_to_98(int n)
{
		int cn;
		int targ = 98;

		if (n < targ)
		{
			for (cn = n; cn < targ; cn++)
				{
					printf("%i, ", cn);
				}
		}

		else if (n > targ)
		{
			for (cn = n; cn > targ; cn--)
				{
					printf("%i, ", cn);
				}
		}

		if (n == 98 || cn == 98)
		{
			printf("98\n");
		}
}
