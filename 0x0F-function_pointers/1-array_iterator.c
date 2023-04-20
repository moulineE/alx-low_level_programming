#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 * @array: the array that contain the parameter of th action fonction
 * @size: the size of the array "array"
 * @action: the fonction executed with the parameters from the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
