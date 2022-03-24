#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: binary number in string
 * Return: number in int or 0 if failed or result = 0;
 */
unsigned int binary_to_uint(const char *b)
{
	size_t dgts = 0, pos, exp, x;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	/* digits counter and bin checker*/
	while (b[dgts] != '\0')
	{
		dgts++;
		if (b[dgts] != 0 && b[dgts] != 1)
			return (0);
	}

	dgts--;

	/* chars iterator */
	for (pos = 0; dgts > 0; pos++, dgts--)
	{
		/* power */
		exp = dgts;
		x = b[pos];

		for (n = 0, result = x; n < exp; n++)
		{
			result = result * x;
		}
	
		sum += result;
	}

	return (sum);
}
