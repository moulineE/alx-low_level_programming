#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list.
 * @head: a pointer to the head of the list
 * @n: the data of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = (NULL);
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
		new->prev = current;
	}
	return (new);
}
