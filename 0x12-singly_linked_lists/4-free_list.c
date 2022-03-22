#include "lists.h"

/**
 * free_list - frees all nodes of a list
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = (*head).next;
		free(aux);
	}

	free(head);
}
