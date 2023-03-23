#include "main.h"
/**
 * _abs -  computes the absolute value of an integer
 * @n: the checked integer
 *
 * Return: result n if positif, 0 if = 0, -n if negatif
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-n);
	}
}
