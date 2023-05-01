#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 * @h: a pointer to the head of the list
 *
 * Return: the number of node
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t *temp;


	if (h != NULL)
	{
		temp = h;
	}
	else
	{
		return (0);
	}
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	h = temp;
	return (i);
}
