#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - Write a function that allocates memory for an array, using malloc
 * @nmemb: nmbr of elements
 * @size: size of the element
 *
 * Return: r or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	r = malloc(size * nmemb);
	if (r == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		r[i] = 0;
	}
	return (r);
}
