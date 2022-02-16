#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: string to be modified
 * Return: string with all uppers
 */
char *string_toupper(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] >= 'a' && str[n] <= 'z')
			str[n] = str[n] - 32;
	}

	return (str);
}
