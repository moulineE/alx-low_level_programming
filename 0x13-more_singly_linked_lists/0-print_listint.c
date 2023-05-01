#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: a pointer to the head of the list
 *
 * Return: the number of node
 */
size_t print_listint(const listint_t *h)
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
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	h = temp;
	return (i);
}
