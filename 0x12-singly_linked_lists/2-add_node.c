#include "lists.h"

/**
 * *add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to the adress of the firs node
 * @str: the data of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len;

	for (len = 0; str[len] > 0; len++)
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (*head);
}
