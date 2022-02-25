#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed into the function
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 Success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
