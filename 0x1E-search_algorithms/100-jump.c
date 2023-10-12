#include "search_algos.h"
#include <math.h>

/**
 * jump_search - a function that searches for a value in
 * a sorted array of integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	int a = 0, b = (int)sqrt((double)size);

	if (array == NULL)
	{
		return (-1);
	}
	while (array[b] < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		a = b;
		b = b + ((int)sqrt((double)size));
		if (a >= (int)size)
		{
			return (-1);
		}
	}
	printf("Value checked array[%d] = [%d]\n", a, array[a]);
	printf("Value found between indexes [%d] and [%d]\n", a, b);
	while (array[a] < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		a = a + 1;
		if (a == (int)size)
		{
			return (-1);
		}
	}
	printf("Value checked array[%d] = [%d]\n", a, array[a]);
	if (array[a] == value)
	{
		return (a);
	}
	else
	{
		return (-1);
	}
}
