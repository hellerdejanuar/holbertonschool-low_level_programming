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
		printf("Not HEAD\n");
		return (NULL);
	}

	if (*h == NULL)
	{
		printf("empty list\n");
		return (add_dnodeint(h, n));
	}

	c_node = *h;
	for (cn = 0; cn < idx; cn++)
	{
		if (c_node->next == NULL)
		{
			printf("Met resistance (Last node)\n");
			break;
		}
		c_node = c_node->next;
		printf("Try: %d\n", cn);
	}

	printf("exited loop. trying inserting before position %d\n", cn);	
	if (cn <= idx)
	{	
		printf("indexing before last\n");
		return (add_dnodeint(&c_node, n));
	}
	else if (cn == idx + 1)
	{	
		printf("indexing at last position\n");
		return (add_dnodeint_end(&c_node, n));
	}
	else
	{	
		printf("failed\n");
		return (NULL);
	}
}
