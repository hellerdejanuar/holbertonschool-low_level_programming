#include "lists.h"

/**
* add_nodeint_end - adds node at the end of the list
* @head: pointer to first node
* @n: number
*
* Return: address
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	
	(*new_node).n = n;
	(*new_node).next = NULL;

	if (*head != NULL)
	{
		last_node = *head;
		while ((*last_node).next != NULL)
			last_node = (*last_node).next;
		
		(*last_node).next = new_node;
	}
	else
	{
		*head = new_node;
	}


	return (new_node);
}
