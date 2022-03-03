#include <stdio.h>

/**
 *
 */
void main(void)
{
	int i, j, x = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j > i)
			{
				if (x == 0)
					printf("%i %i",i ,j);
					x = 1;
				else
					printf(", ");
					printf("%i %i", i, j);
			}
		}
	}
}
