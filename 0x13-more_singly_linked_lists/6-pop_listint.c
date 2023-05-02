#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * , and returns the head node’s data (n)
 * @head: pointer to the first node of the list
 *
 * Return: n, the head node’s data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
