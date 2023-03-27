#include "main.h"
/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 *
 */
void print_triangle(int size)
{
	int i;
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		a = 1;
		while (a <= (size - i))
		{
			_putchar(' ');
			a++;
		}
		for (b = 1; b <= i; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
