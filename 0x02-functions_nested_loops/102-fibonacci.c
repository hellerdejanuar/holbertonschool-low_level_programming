#include <stdio.h>


/**
 * main - prints 50 fibonacci numbers
 *
 * Return: 0 success
 */
int main(void)
{
	unsigned long a, b, s, cn;

	for (a = 0, b = 1, cn = 0; cn < 50; cn++, a = b, b = s)
	{
		s = a + b;
		printf("%lu", s);

		if (cn != 50)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		
	}
	return (0);
}
