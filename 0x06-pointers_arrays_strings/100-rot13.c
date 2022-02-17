#include "main.h"

/**
 * rot13 - encodes text into rot13
 * @str: string to be modified
 * Return: string with rot13 encoding
 */
char *rot13(char *str)
{
	int n, a;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (n = 0; str[n] != '\0'; n++)
	{
		if ((str[n] >= 'a' && str[n] <= 'z') || (str[n] >= 'A' && str[n] <= 'Z'))
		{
			for (a = 0; str[n] != alph[a]; a++)
			{}

			str[n] = rot13[a];
		}
	}

	return (str);
}
