#include "lists.h"

/**
 *  * free_listint - frees all nodes of a list
 *   * @head: pointer to the first node
 *    */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = (*head).next;
		free(aux);
	}
	free(head);
}
