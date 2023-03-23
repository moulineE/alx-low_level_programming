#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number n
 * @n: the number to print the last digit
 *
 * Return: the last digit of n
 */
int print_last_digit(long int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;
	_putchar(a + '0');

	return (a);
}
