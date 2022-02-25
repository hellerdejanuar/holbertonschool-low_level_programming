#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers passed by the args
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 Success, 1 error (args not numbers)
 */
int main(int argc, char *argv[])
{
	int sum, x, y, i, j;
	char *str;

	for (j = 1; j < argc; j++)
	{
		str = argv[j];

		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] < '0' || str[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		sum = x + y;
		printf("%i\n", sum);
		return (0);
	}

	printf("0\n");
	return (0);
}
