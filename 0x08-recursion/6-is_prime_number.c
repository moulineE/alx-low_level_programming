#include "main.h"

int secondaryfonc(int n, int i);
/**
 * is_prime_number - function that returns
 * 1 if the input integer is a prime number, otherwise return 0
 * @n: the imput integer
 * Return: 1 if prime or 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (secondaryfonc(n, 2));
}
/**
 * secondaryfonc - the fonction that cherche for divider
 * @n: the imput integer
 * @i: the the tested divider
 *
 * Return: 1 if prime or 0 if not
 */
int secondaryfonc(int n, int i)
{
	if (i >= n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (secondaryfonc(n, i + 1));
}
