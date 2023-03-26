#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the last number to print
 *
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
	{
		printf("%d, ", i);
	}
	for (i = n; i > 98; i--)
	{
		printf("%d, ", i);
	}
	printf("98\n");
}
