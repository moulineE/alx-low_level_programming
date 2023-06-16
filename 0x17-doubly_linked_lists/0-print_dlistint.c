#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	dlistint_t *read = (dlistint_t *)h;

	while (read != NULL)
	{
		i += 1;
		printf("%d\n", read->n);
		read = read->next;
	}
	return (i);
}
