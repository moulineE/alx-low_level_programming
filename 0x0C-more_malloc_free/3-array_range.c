#include "main.h"
#include <stdlib.h>
/**
 * *array_range - function that creates an array of integers
 * @min: 1st value
 * @max: last value
 *
 * Return: r or NULL
 */
int *array_range(int min, int max)
{
	int *r;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	r = malloc(sizeof(int) * (max - min + 1));
	if (r == NULL)
	{
		return (NULL)
	}
	for (i = 0; min <= max; i++)
	{
		r[i] = min;
		min = min + 1
	}
	return (r);
}
