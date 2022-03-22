#include "lists.h"

/**
* add_nodeint - adds node at the beginning
* @head: pointer to first node
* @n: number
*
* Return: address
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	(*new_node).n = n;
	(*new_node).next = *head;
	*head = new_node;

	return (new_node);
}
