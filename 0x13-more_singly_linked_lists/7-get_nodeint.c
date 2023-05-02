#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer to the first node of the list
 * @index: the index of the node, starting at 0
 *
 * Return: the data at the nth noode
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;
	while (index > i && temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (index != i)
	{
		return (NULL);
	}
	return (temp);
}
