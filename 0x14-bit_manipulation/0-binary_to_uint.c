#include "main.h"

unsigned int binary_to_uint(const char *b);
int _strlen(const char *s);
int _pow_recursion(int x, int y);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 1 and 0
 *
 * Return: the converted number or 0 if failure
 */
unsigned int binary_to_uint(const char *b)
{
	int i, c, d = 0;

	c = _strlen(b);
	for (i = 0; i < c; i++)
	{
		if (b == 0 || !(b[i] == '0' || b[i] == '1'))
		{
			return (0);
		}
		if (b[i] == '1')
		{
			d = d + _pow_recursion(2, (c - 1 - i));
		}
	}
	return (d);
}
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(const char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
#include "main.h"
/**
 * _pow_recursion - function that returns the value of
 * x raised to the power of y
 * @x: the value to raise
 * @y: the power factor
 *
 * Return: x^y or if y < 0, -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
