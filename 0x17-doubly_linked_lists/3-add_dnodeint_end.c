#include "lists.h"
/**
 * add_dnodeint_end - adds elements in a dlistint_t list at the end
 * @head: list
 * @n: value
 * Return: number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *c_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;

	if (*head)
	{
		for (c_node = *head; c_node->next != NULL;)
			c_node = c_node->next;
		new_node->prev = c_node;
		c_node->next = new_node;
		new_node->prev = c_node;
	}

	else
	{
		*head = new_node;
		new_node->prev = NULL;
	}


	new_node->n = n;
	return (new_node);
}
