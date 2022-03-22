#include "lists.h"

/**
 * listint_len - returns the number of nodes on a list
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
