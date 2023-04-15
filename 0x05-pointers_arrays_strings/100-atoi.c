#include "main.h"

int _pow_recursion(int x, int y);

/**
 * _atoi - function that convert a string to an integer.
 * @s: the char to convert
 *
 * Return: r
 */
int _atoi(char *s)
{
	int negf = 0;
	int i;
	int n = 0;
	int r = 0;
	int df = 0;

	for (i = 0; (s[i] > 0 && ((s[i] >= 48 && s[i] <= 57) || df == 0)); i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			n++;
			df++;
		}
	}
	for (i = 0; s[i] < 48; i++)
	{
		if (s[i] == 45)
		{
			negf++;
		}
	}
	for (i = 0; (s[i] > 0); i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			r = r - ((s[i] - 48) * _pow_recursion(10, n - 1));
			n--;
		}
	}
	if (negf % 2 == 0)
	{
		r = r * -1;
	}
	return (r);
}
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
		return (0);
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
