#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to the first node of the list
 *
 * Return: the sum of n
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int i = 0;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	while (temp != NULL)
	{
		i = temp->n + i;
		temp = temp->next;
	}
	return (i);
}
