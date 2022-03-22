#include "lists.h"

/**
 * free_list - frees all nodes of a list
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *aux;

	if (head != NULL)
	{
		aux = head;

		while (aux != NULL)
		{
			free((*aux).str);
			free(aux);
			aux = (*aux).next;
		}

	}
	else
		free(head);
}
