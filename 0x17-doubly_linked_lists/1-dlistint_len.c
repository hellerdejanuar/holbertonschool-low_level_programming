#include "lists.h"
/**
 * dlistint_len - counts all te elements of a dlistint_t list
 * @h: list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cn;

	if (!h)
		return (0);

	for (cn = 0; h->next != NULL; cn++)
	{
		h = h->next;
	}
	cn++;
	return (cn);
}
