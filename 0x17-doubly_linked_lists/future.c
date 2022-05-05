#include "lists.h"
/**
 * iadd_dlistint - adds elements in a dlistint_t list
 * @h: list
 * @n: index
 * Return: number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	int cn;
	dlistint_t *node, *new_node;

	if (!head)
		return (NULL);

	node = *head;
	for (cn = 0; node->next != NULL; cn++)
	{
		if (cn == 0)
			break;
		node = node->next;
	}
	if (cn == 0)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);
		new_node->next = node->prev;
		node->prev = node;
		new_node->n = n;
	}
	return (new_node);
}
