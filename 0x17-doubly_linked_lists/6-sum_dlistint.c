#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: a pointer to the linked list
 *
 * Return: the sum or f the list is empty, 0
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *current = head;

	if (head == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		i += current->n;
		current = current->next;
	}
	return (i);
}
