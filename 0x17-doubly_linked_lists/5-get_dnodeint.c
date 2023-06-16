#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 * @head: a pointer to the linked list
 * @index: the index of the node, starting from 0
 *
 * Return: the nth node or f the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index && (current->next != NULL); i++)
	{
		current = current->next;
	}
	if (i != index)
		return (NULL);
	else
		return (current);
}
