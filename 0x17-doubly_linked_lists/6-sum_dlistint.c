#include "lists.h"
/**
 * sum_dlistint - gets the sum of all elements
 * @head: list
 * Return: sum of all elements
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *c_node;
	int sum = 0;

	if (!head)
		return (0);

	for (c_node = head; c_node->next != NULL;)
	{
		sum += c_node->n;
		c_node = c_node->next;
	}
	sum += c_node->n;

	return (sum);
}
