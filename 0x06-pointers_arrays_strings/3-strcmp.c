#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: source 1
 * @s2: source 2
 * Return: 0 if both sources are equal, negative int if s1 is less than s2, 
 * positive if it's greater.
 */

char *_strncpy(char *s1, char *s2)
{
	int s1sz, s2sz;

	s1sz = _strlen(s1);
	s2sz = _strlen(s2);

	return (s1sz - s2sz);
}

/**
 * _strlen - takes a string and outputs the number of chars
 * @str: string to be counted
 * Return: number of chars
 */
int _strlen(char *str)
{
	int cn = 0;

	while (str[cn] != '\0')
		cn++;

	return (cn);
}
