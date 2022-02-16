#include "main.h"

/**
 * reverse_array - reverses array of ints
 * @s: string to be reversed
 */
void rev_string(int *s, int n)
{
	int a, b = 0;
	int tmp;

	while (s[b] != '\0')
		b++;
	b--;
	for (a = 0; a < b && a < n; b--, a++)
	{
		tmp = s[a];
		s[a] = s[b];
		s[b] = tmp;
	}
}
