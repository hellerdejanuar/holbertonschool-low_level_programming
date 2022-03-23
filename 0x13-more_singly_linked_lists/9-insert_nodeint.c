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

	/* if head points to null (empty list) and idx not 0 */
	if (*head == NULL && idx != 0)
		return (NULL);

	/* if idx == 0 */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	last_node = *head;

	/* find idx th node */
	while (cn < idx - 1)
	{
		if ((*last_node).next != NULL)
		{
			last_node = (*last_node).next;
			cn++;
		}
		else
			return (NULL);
	}

	new_node->next = last_node->next;
	last_node->next = new_node;
	return (new_node);
}
