#include <stdio.h>
#include <stdlib.h>
/**
 * main - Enrty point
 *
 * declare int n
 *
 * while structure with putchar
 * prints all single digit numbers of base 10 starting from 0
 *
 * print a new line
 *
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n = n + 1;
	}
	putchar('\n');

	return (EXIT_SUCCESS);
}
