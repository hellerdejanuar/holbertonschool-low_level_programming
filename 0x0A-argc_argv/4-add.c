#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - multiplies two numbers passed by the args
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 Success, 1 error (args not numbers)
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;
	char *str;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			str = argv[j];

			for (i = 0; str[i] != '\0'; i++)
			{
				if (isdigit(str[i]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

		sum += atoi(argv[j]);
		}

		printf("%i\n", sum);
		return (0);
	}

	printf("0\n");
	return (0);
}
