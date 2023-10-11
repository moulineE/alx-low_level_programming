#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in
 * a sorted array of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, L = 0, R = (size - 1), m;

	if (array == NULL)
	{
		return (-1);
	}
	while (L <= R)
	{
		printf("Searching in array:");
		for (i = L; i < R; i++)
		{
			printf(" %d,", array[i]);
		}
		printf(" %d\n", array[i]);
		m = (L + R) / 2;
		if (array[m] < value)
		{
			L = m + 1;
		}
		else if (array[m] > value)
		{
			R = m - 1;
		}
		else if (array[m] == value)
		{
			return (m);
		}
	}
	return (-1);
}
