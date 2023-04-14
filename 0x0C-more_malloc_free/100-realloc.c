#include "main.h"
#include <stdlib.h>
/**
 * *_realloc -  function that reallocates a memory block using malloc and free
 * @ptr: the old memory block
 * @old_size: the size of the old memeory block
 * @new_size: the size to assigne to the new memory block
 *
 * Return: a pointer to the new memory block, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *np;
	char *op = ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (!(ptr == NULL) && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	np = malloc(new_size);
	if (np == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		np[i] = op[i];
	}
	free(ptr);
	return (np);
}
