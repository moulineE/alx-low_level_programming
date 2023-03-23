#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number n
 * @n: the number to print the last digit
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = ((-n) % 10);
		_putchar(n + '0');
		return (n);
	}
}
