#include <stdlib.h>

/**
 * string_nconcat - concatenates two strins
 * @s1: string 2
 * @s2: string 1
 * @n: number of chars of string 2 to be concatenated
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, x;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	do {
		i++;
	} while (s1[i - 1]);

	do {
		j++;
	} while (s2[j - 1]);

	str = malloc(sizeof(char) * (i - 1 + j));
	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < i; x++)
	{
		str[x] = s1[x];
	}
	for (x = 0; x < j && x < n; x++)
	{
		str[x + i - 1] = s2[x];
	}
	return (str);
}

