#include "function_pointers.h"
#include "stdlib.h"
/**
 * int_index - function that searches for an integer.
 * @array: thearray
 * @size: the size of the aray
 * @cmp: the seach fuction
 *
 * Return: 1 or 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
		{
			return (i);
		}
	}
	return (-1);
}
