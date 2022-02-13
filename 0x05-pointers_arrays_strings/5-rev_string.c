#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int a, b = 0;
	char tmp;

	while (s[b] != '\0')
		b++;
	b--;
	for (a = 0; a < b; b--, a++)
	{
		tmp = s[a];
		s[a] = s[b];
		s[b] = tmp;
	}
}
