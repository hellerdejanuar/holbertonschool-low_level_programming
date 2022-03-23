#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the given list
 * @head: list
 * @index: node number
 *
 * Return: node. NULL if node noesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
{
	unsigned int cn = 0;

	if (head == NULL)
		return (NULL);

	while (cn < index)
	{
		if ((*head).next != NULL)
			head = (*head).next;
			cn++;
		else
			return (NULL);
	}

	
	return (head);
}
