#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 */
char *string_toupper(char *str)
{
	int n;

	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
			str[n] = str[n] + 32;
	}

	return (str);
}
