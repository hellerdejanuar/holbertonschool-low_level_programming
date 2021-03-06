#include "lists.h"

/**
 * free_listint2 - frees all nodes of a list
 * @head: pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		aux = *head;
		*head = (**head).next;
		free(aux);
	}
}
