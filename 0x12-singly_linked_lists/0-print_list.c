#include "lists.h"

/**
 * print_list - prints out a list of strings
 * @h: list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n_cn = 0;

	while (h != NULL)
	{
		if ((*h).str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", (*h).len, (*h).str);

		h = (*h).next;
		n_cn++;
	}

	return (n_cn);
}
