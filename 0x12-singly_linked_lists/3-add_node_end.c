#include "lists.h"

/**
* add_node_end - prints all elements of list_t list
* @head: pointer to first node
* @str: string with name
*
* Return: address
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node, *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	(*new_node).str = strdup(str);
	(*new_node).len = strlen(str);
	(*new_node).next = NULL;


	if (*head != NULL)
	{
		last_node = *head;

		while ((*last_node).next != NULL)
			last_node = (*last_node).next;

		(*last_node).next = new_node;

	}
	else
		*head = new_node;

	return (new_node);
}
