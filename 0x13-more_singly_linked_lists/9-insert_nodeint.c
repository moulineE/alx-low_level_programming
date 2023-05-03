#include "lists.h"

listint_t *_add_nodeint(listint_t **head, const int n);
listint_t *_add_nodeint_end(listint_t **head, const int n);
listint_t *_insert_nodeint(listint_t **head, listint_t **prev, const int n);

/**
 * insert_nodeint_at_index -  function that inserts a new node
 * at a given position.
 * @head: pointer to the first node of the list
 * @idx: the index of the node, starting at 0
 * @n: the new node data
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;
	listint_t *prev;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = (*head);
	if (idx == 0)
	{
		new = _add_nodeint(&temp, n);
		*head = new;
		return (new);
	}
	while (idx > i && temp->next != NULL)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	if (idx == i + 1)
	{
		new = _add_nodeint_end(&temp, n);
		return (new);
	}
	else if (idx == i)
	{
		new = _insert_nodeint(&temp, &prev, n);
		return (new);
	}
	else
	{
		return (NULL);
	}
	return (new);
}

/**
 * _insert_nodeint - function that adds a new node
 * between two node of a listint_t list.
 * @head: a pointer to the head of the list
 * @n: the data of the new node
 * @prev: the node before the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *_insert_nodeint(listint_t **head, listint_t **prev, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	(*prev)->next = new;
	return (new);
}

#include "lists.h"

/**
 * _add_nodeint - function that adds a new node
 * at the beginning of a listint_t list.
 * @head: a pointer to the head of the list
 * @n: the data of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *_add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	return (new);
}

#include "lists.h"

/**
 * _add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * @head: a pointer to the head of the list
 * @n: the data of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *_add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
