#include "lists.h"
/**
 * add_dnodeint - adds elements in a dlistint_t list
 * @head: list
 * @n: index
 * Return: number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);


	if (*head)
	{
		(*head)->prev = new_node;
		/*new_node->prev = (*head)->prev;*/
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		new_node->prev = NULL;
	}
	new_node->prev = NULL;
	new_node->n = n;
	*head = new_node;
	return (new_node);
}
