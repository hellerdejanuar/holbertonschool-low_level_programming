#include "lists.h"
/**
 * get_dnodeint_at_index - gets elements from list at index
 * @head: list
 * @index: index
 * Return: element at index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *c_node;
	unsigned int cn;

	if (!h)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	c_node = *h;
	for (cn = 0; cn < idx; cn++)
	{
		if (c_node->next == NULL)
		{
			break;
		}
		c_node = c_node->next;
	}
	
	if (cn <= idx)
	{	
		
		return (insert_dnodeint(&c_node, n));
	}
	else if (cn == idx + 1)
	{	
		return (add_dnodeint_end(&c_node, n));
	}
	else
	{	
		return (NULL);
	}
}

/**
 *
 */
dlistint_t *insert_dnodeint(dlistint_t **h, int n)
{
	dlistint_t *new_node;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = (*h);
	new_node->prev = (*h)->prev;
	if ((*h)->prev != NULL)
		(*h)->prev->next = new_node;
	(*h)->prev = new_node;

	new_node->n = n;
	return (new_node);
}
