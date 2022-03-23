#include "lists.h"

/**
 * sum_listint - returns the sum of the data of a list
 * @head: list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	size_t sum = 0;

	while (head != NULL)
	{
		sum += (*head).n;
		head = (*head).next;
	}

	return (sum);
}
