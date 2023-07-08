#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value);
hash_node_t *chaine_node(char *key, char *value);

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
	hash_node_t *current, *new;
	char *val_copy, *key_copy;

	if (key == NULL || *key == '\0' || ht == NULL || value == NULL)
	{
		return (0);
	}
	val_copy = strdup(value);
	key_copy = strdup(key);
	if (val_copy == NULL || key_copy == NULL)
	{
		free(val_copy);
		free(key_copy);
		return (0);
	}
	index = key_index((const unsigned char *) key, ht->size);
	current = (ht->array[index]);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = chaine_node(key_copy, val_copy);
		if (ht->array[index] == NULL)
		{
			free(ht->array[index]);
			free(val_copy);
			free(key_copy);
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
				current->value = val_copy;
				free(key_copy);
				return (1);
			}
			if (current->next == NULL)
			{
				new = chaine_node(key_copy, val_copy);
				if (new == NULL)
				{
					free(current->next);
					free(val_copy);
					free(key_copy);
					free(new);
					return (0);
				}
				new->next = ht->array[index];
				ht->array[index] = new;
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

hash_node_t *chaine_node(char *key, char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		free(value);
		free(key);
		return (NULL);
	}
	new->key = key;
	new->value = value;
	new->next = NULL;
	return (new);
}
