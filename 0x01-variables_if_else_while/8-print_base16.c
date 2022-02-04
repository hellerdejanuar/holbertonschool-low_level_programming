#include <stdio.h>

/**
 * main - Print reverse alphabet
 *
 * Return: (0) success
 */

int main(void)

{
	char n;

	for (n = 0; n <= 9; n++)
	{
		/* this converts from number to ascii char*/
		putchar(n + '0');
	}
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);

	putchar('\n');
	return (0);
}
