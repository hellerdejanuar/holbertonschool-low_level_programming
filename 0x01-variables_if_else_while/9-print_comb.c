#include <stdio.h>

/**
 * main - Print reverse alphabet
 *
 * Return: (0) success
 */

int main(void)

{
	int n;
	int maxn = 9;
	int aNum;

	for (n = 0; n <= maxn; n++)
	{
		/* this converts from number to ascii char*/
		aNum = n + 48;
		putchar(aNum);

		if (n < maxn)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');

	return (0);
}
