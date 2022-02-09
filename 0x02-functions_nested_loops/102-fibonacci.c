#include <stdio.h>


/**
 *
 */
void main(void)
{
	long unsigned a, b, s, cn;

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
			printf("%lu", s);
			printf("\n");
		}
		
	}
}
