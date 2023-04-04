#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: the square matrix of integers
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int d;

	d = 0;
	for (i = 0; i < size; i++)
	{
		d = *(a + (i * size + i)) + d;
	}
	printf("%d, ", d);
	d = 0;
	for (i = size - 1; i >= 0; i--)
	{
		d = *(a + ((size - i - 1) * size) + i) + d;
	}
	printf("%d\n", d);
}
