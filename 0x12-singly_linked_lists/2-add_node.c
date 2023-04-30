#include "lists.h"

int _strlen(char *s);

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

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(strdup(str));
	new->next = (*head);
	(*head) = new;
	return (*head);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
