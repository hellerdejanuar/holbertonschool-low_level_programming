#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed into the function
 * Return: 0 Success
 */
int main(int argc ,char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
