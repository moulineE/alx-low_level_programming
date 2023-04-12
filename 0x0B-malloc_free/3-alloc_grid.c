#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: the withe of the 2d array
 * @height: the height of the 2d array
 *
 * Return: a or NULL
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i;
	int j;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * height);

	if (a == NULL)
	{
		return (NULL);
		free(a);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
