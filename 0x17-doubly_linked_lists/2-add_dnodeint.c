#include "lists.h"
/**
 * add_dnodeint - adds elements in a dlistint_t list
 * @head: list
 * @n: index
 * Return: number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->next = *head;
	*head = new_node;
	new_node->prev = NULL;
	new_node->n = n;
	return (new_node);
}
