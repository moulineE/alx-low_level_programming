#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position
 * @h: the pointer to the head of a linked list
 * @idx: the new node index
 * @n: the new node data
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new;
	unsigned int i;
	unsigned int l;

	if ((current == NULL) && (idx > 0))
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (current != NULL)
	{
		l += 1;
		current = current->next;
	}
	current = *h;
	if (idx - 1 == l)
	{
		return (add_dnodeint_end(h, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	for (i = 0; (i < idx) && (current->next != NULL); i++)
	{
		current = current->next;
	}
	if (i != idx)
		return (NULL);
	new->next = current;
	new->prev = current->prev;
	current->prev->next = new;
	current->prev = new;
	return (new);
}
