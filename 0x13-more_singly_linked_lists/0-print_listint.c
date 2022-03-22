#include "lists.h"

/**
 * print_listint - prints out a list of ints
 * @h: list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n_cn = 0;

	while (h != NULL)
	{
		printf("%i\n", (*h).n);

		h = (*h).next;
		n_cn++;
	}

	return (n_cn);
}
