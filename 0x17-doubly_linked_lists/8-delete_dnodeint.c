#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: head of the doubly linked list
 * @index: index
 * Return: 1 success, -1 failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *c_node = NULL;
	unsigned int cn = 0;

	if (!head)
		return (-1);

	if (*head == NULL) /* try to delete index 0 */
		return (-1);

	c_node = *head;
	for (cn = 0; cn < index; cn++) /* iterate until index*/
	{
		if (c_node->next == NULL)
			break;
		c_node = c_node->next;
	}

	if (cn == index) /* delete at index */
	{
		if (c_node->prev != NULL) /* not first node */
			c_node->prev->next = c_node->next;
		else
			*head = c_node->next; /* first node */

		if (c_node->next != NULL) /* not last node */
			c_node->next->prev = c_node->prev;

		free(c_node);
	}
	else
		return (-1);

	return (1);
}
