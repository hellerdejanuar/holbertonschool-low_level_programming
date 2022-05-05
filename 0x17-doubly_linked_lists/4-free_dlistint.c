#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *c_node, *aux_ptr;

	if (!head)
		return;

	if (head)
	{
		for (c_node = head; c_node->next != NULL;)
		{
			aux_ptr = c_node->next;
			free(c_node);
			c_node = aux_ptr;
		}
		free(c_node);
	}
}
