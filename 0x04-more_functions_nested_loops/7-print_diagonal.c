#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal
 * followed by a new line.
 * @n: is the number of times the character \ should be printed
 *
 */
void print_diagonal(int n)
{
	int i;
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		a = 1;
		while (a < i)
		{
			_putchar(' ');
			a++;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
