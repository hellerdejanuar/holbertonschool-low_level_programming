#include "lists.h"

/**
 * pop_listint - deletes the first node and returns its value
 * @head: pointer to the first node
 */
void pop_listint(listint_t **head)
{
	listint_t *aux;
	int n;

	if (head == NULL)
		return;

	n = (**head).n;
	aux = *head;
	*head = (**head).next;
	free(aux);
	return (n)
}
