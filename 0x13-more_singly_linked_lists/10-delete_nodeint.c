#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index "index" of a listint_t linked list.
 * @head: pointer to the first node of the list
 * @index: the index of the node, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it faile
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *prev;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = (*head);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (index > i && temp->next != NULL)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	if (temp->next == NULL)
	{
		free(temp);
		prev->next = NULL;
		return (1);
	}
	else
	{
		prev->next = temp->next;
		free(temp);
		return (1);
	}

}
