#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value);
hash_node_t *chaine_node(const char *key, const char *value);

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: a pointer to the hash table
 * @key: is the key
 * @value: is the value
 *
 * Return:1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current;

	if (key == NULL || *key == '\0' || ht == NULL || value == NULL || 
			(strdup(value) == NULL))
	{
		return (0);
	}
	index = key_index((const unsigned char *) key, ht->size);
	current = (ht->array[index]);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = chaine_node(key, value);
		if (ht->array[index] == NULL)
		{
			free(ht->array[index]);
			return (0);
		}
		return (1);
	}
	else
	{
		(ht->array[index]) = current;
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = strdup(value);
				return (1);
			}
			if (current->next == NULL)
			{
				current->next = chaine_node(key, value);
				if (current->next == NULL)
					return (0);
				return (1);
			}
			current = current->next;
		}
	}
	return (0);
}

/**
 * chaine_node - creat the data node
 * @key: the key
 * @value: the value
 *
 * Return: a pointer to the new node
 */

hash_node_t *chaine_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	return (new);
}
