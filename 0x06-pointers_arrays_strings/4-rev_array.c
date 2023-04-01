#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: the int array to inverse
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		b = a[i];
		a[i] = a[n - 1];
		a[n - 1] = b;
		i++;
		n--;
	}
}
