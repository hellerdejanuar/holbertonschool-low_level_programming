#include "lists.h"

/**
 * list_len - prints out a list of strings
 * @h: list
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n_cn = 0;

	while (h != NULL)
	{
		h = (*h).next;
		n_cn++;
	}

	return (n_cn);
}
