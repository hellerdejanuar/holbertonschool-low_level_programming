#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the given list
 * @head: list
 * @index: node number
 *
 * Return: node. NULL if node noesnt exist
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cn = 0;
	listint_t *new_node, *last_node;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;

	if (head == NULL)
		return (NULL);

	/* if head points to null (empty list) */
	if (*head == NULL)
	{
		if (idx == 0)
		{
			new_node->next = NULL;
			*head = new_node;
			return (new_node);
		}
		else
			return (NULL);
	}

	last_node = *head;

	/* find idx th node */
	while (cn < idx)
	{
		if ((*last_node).next != NULL)
		{
			last_node = (*last_node).next;
			cn++;
		}
		else
			return (NULL);
	}

	new_node->next = last.node->next;
	last_node->next = new_node;

	return (new_node);
}
