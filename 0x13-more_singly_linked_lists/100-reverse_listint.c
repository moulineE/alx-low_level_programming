#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to the first node of the list
 *
 * Return: new head of the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		*head = temp;
	}
	*head = prev;
	return (*head);
}
