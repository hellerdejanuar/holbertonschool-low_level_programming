#include "lists.h"
/**
 * get_dnodeint_at_index - gets elements from list at index
 * @head: list
 * @index: index
 * Return: element at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *c_node;
	unsigned int cn;

	if (!head)
		return (NULL);


	for (cn = 0, c_node = head; c_node->next != NULL; cn++)
	{
		if (cn == index)
			break;
		c_node = c_node->next;
	}

	if (cn == index)
		return (c_node);
	else
		return (NULL);
}
