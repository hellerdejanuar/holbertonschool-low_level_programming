#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: string to be modified
 * Return: string with all uppers
 */
char *string_toupper(char *str)
{
	int n = 0,x;
	char sepr[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	if (str[n] >= 'a' && str[n] <= 'z')
		strn[n] = str[n] - 32;

	else 
		for (n = 1; str[n] != '\0'; n++)
		{
			for (x = 0; x < 13; x++)
			{
				if (str[n - 1] == x)
				{
					if (str[n] >= 'a' && str[n] <= 'z')
					{
						strn[n] = str[n] - 32;
					}
					continue
				}
			}
		}

	return (str);
}
