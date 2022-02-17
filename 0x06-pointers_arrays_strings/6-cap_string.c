#include "main.h"

/**
 * cap_string - changes first word's lowercase letters to uppercase
 * @str: string to be modified
 * Return: string with all uppers
 */
char *cap_string(char *str)
{
	int n = 0, x;
	char sepr[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
	'"', '(', ')', '{', '}'};

	if (str[n] >= 'a' && str[n] <= 'z')
		str[n] = str[n] - 32;

	for (n = 1; str[n] != '\0'; n++)
	{
		for (x = 0; x < 13; x++)
		{
			if (str[n - 1] == sepr[x])
			{
				if (str[n] >= 'a' && str[n] <= 'z')
				{
					str[n] = str[n] - 32;
				}
			}
		}
	}

	return (str);
}
