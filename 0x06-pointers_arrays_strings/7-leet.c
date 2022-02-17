#include "main.h"

/**
 * cap_string - changes first word's lowercase letters to uppercase
 * @str: string to be modified
 * Return: string with all uppers
 */
char *cap_string(char *str)
{
	int n = 0, x;
	char lat[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet[] = {4, 3, 0, 7, 1}

	for (n = 1; str[n] != '\0'; n++)
	{
		for (x = 0; x < 13; x++)
		{
			if (lat[x] == str[n])
			{
				str[n] = leet[x / 2];
			}
		}
	}

	return (str);
}
