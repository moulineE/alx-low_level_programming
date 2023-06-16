#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	dlistint_t *read = (dlistint_t *)h;

	while (read != NULL)
	{
		i += 1;
		read = read->next;
	}
	return (i);
}
