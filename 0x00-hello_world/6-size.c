#include <stdio.h>

/**
 * main - prints Variable Type sizes
 *
 * Return messages
 * Return: 0 success
 */

int main(void)
{
	char charSize;
	int intSize;
	long int longSize;
	long long int longlongSize;
	float floatSize;

	printf("Size of a char: %lu byte(s)\n", sizeof(charSize));
	printf("Size of an int: %lu byte(s)\n", sizeof(intSize));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longSize));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longlongSize));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatSize));

	return (0);
}
