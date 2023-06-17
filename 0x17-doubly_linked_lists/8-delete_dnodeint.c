#include "lists.h"

dlistint_t *del_dnodeint(dlistint_t **head);
dlistint_t *del_dnodeint_end(dlistint_t **head);

/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: the pointer to the head of a linked list
 * @index: the node index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;
	unsigned int l = 0;

	if (*head == NULL)
		return (-1);
	if (current == NULL)
		return (-1);
	if ((current->next == NULL) && (index == 0))
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	if (index == 0)
	{
		*head = del_dnodeint(head);
		return (1);
	}
	while (current != NULL)
	{
		l += 1;
		current = current->next;
	}
	if (index >= l)
		return (-1);
	current = *head;
	if (index == l - 1)
	{
		*head = del_dnodeint_end(head);
		return (1);
	}
	for (i = 0; (i < index) && (current->next != NULL); i++)
	{
		current = current->next;
	}
	if (i != index)
		return (-1);
	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);
	return (1);
}
/**
 * del_dnodeint - delete the node at the beginning of a dlistint_t list.
 * @head: the pointer to the head of a linked list
 *
 * Return: the head
 */
dlistint_t *del_dnodeint(dlistint_t **head)
{
	dlistint_t *current = *head;

	if (current->next == NULL)
	{
		free(current);
		*head = NULL;
		return (NULL);
	}
	else
	{
		current->next->prev = current->prev;
		*head = current->next;
		free(current);
		return (*head);
	}
}
/**
 * del_dnodeint_end - delete the node at the end of a dlistint_t list.
 * @head: the pointer to the head of a linked list
 *
 * Return: the head
 */
dlistint_t *del_dnodeint_end(dlistint_t **head)
{
	dlistint_t *current = *head;

	if (current->next == NULL)
	{
		free(current);
		*head = NULL;
		return (NULL);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	if (current->prev != NULL)
	{
		current->prev->next = NULL;
	}
	else
		*head = NULL;
	free(current);
	return (*head);
}
