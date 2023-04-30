#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 * @h: pointer to the head of the list
 *
 * Return: i, the number of node
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
