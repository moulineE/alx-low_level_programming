#include "main.h"

int secondaryfonc(char *n, int i, int b, int r);
int stringlent(char *a, int i);
/**
 * is_palindrome - function that returns 1 if string is a palindrome & 0 if not
 * @s: the string to check
 *
 * Return: 1 is palindrom, 0 if not
 */
int is_palindrome(char *s)
{
	int c;
	int r;

	c = stringlent(s, 0);
	r = (secondaryfonc(s, c - 1, 0, 1));
	return (r);
}
/**
 * secondaryfonc - check if de array n[0} to n[i - 1] == n[i - 1] to n[0]
 * @n: the strig to check
 * @i: the count of char of the string a
 * @b: the inisialisation of the array
 * @r: the result of the check
 *
 * Return: r
 */
int secondaryfonc(char *n, int i, int b, int r)
{

	if (i >= 0)
	{
		if (n[b] == n[i])
		{
			r = r * 1;
		}
		if (n[b] != n[i])
		{
			r = r * 0;
		}
		r = r * (secondaryfonc(n, i - 1, b + 1, r));
	}
	return (r);
}
/**
 * stringlent - a fonction that count the lenth of a string
 * @a: the string to count
 * @i: the inisialisation of the array
 *
 * Return: i, the count of char
 */
int stringlent(char *a, int i)
{
	if (a[i] == 0)
	{
		return (i);
	}
	return (stringlent(a, i + 1));
}
