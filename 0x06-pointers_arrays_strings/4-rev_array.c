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

/**
 *  * _strlen - takes a string and outputs the number of chars
 *   * @str: string to be counted
 *    * Return: number of chars
 *     */
int _arrlen(int *arr)
{
	    int cn = 0;

		    while (str[cn] != '\0')
