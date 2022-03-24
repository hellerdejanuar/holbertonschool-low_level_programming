#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: binary number in string
 * Return: number in int or 0 if failed or result = 0;
 */
unsigned int binary_to_uint(const char *b)
{
	int dgts = 0;
	unsigned int pos, exp, base;
	unsigned int sum = 0, result, n;

	if (b == NULL)
		return (0);

	/* digits counter and bin checker*/
	while (b[dgts] != '\0')
	{
		if (b[dgts] != '0' && b[dgts] != '1')
			return (0);
		dgts++;
	}

	dgts--;

	/* chars iterator */
	for (pos = 0; dgts >= 0; pos++, dgts--)
	{
		/* power */
		exp = dgts;
		base = 2;
		
		if (exp == 0)
			result = 1;
		else
		{
			for (n = 0, result = base; n < exp - 1; n++)
			{
				result = result * base;
			}
		}

		sum += (b[pos] - '0') * result;
	}

	return (sum);
}
