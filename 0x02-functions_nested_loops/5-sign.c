#include "main.h"
/**
 * print_sign - checks  prints the sign of a number n
 * @n: the checked character
 *
 * Return: result 1 if positif, 0 if = 0, -1 if negatif
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
