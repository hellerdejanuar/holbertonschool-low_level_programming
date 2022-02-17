#include "main.h"

/**
 * cap_string - capitalize leters
 * @str: string assigned
 * Return: a number je je
 */
char *cap_string(char *str)
{
	char SP[15] = {32, 44, 46, 59, 33, 63, '"', 40, 41, 123, 125,
	 '\n', '\t', '\0'};
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; SP[j] != '\0'; j++)
		{
			if (str[0] > 96 && str[0] < 123)
				str[0] -= 32;

			else if (str[i] == SP[j])
			{
				if (str[i + 1] > 96 && str[i + 1] < 123)
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}
return (str);
}
