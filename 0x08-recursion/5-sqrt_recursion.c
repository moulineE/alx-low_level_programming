#include "main.h"

int secondaryfonc(int n, int i);
/**
 * _sqrt_recursion - main fonction that
 * returns the natural square root of a number.
 * @n: the number to find the square root
 *
 * Return: i or -1 if the natural square root of n does no exist or != N
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (secondaryfonc(n, 0));
}
/**
 * secondaryfonc - the fonction that cherche for the sqrt root
 * @n: the number to find the square root
 * @i:  the natural square root of n
 *
 * Return: i or -1 if the natural square root of n does no exist
 */
int secondaryfonc(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (secondaryfonc(n, i + 1));
}
