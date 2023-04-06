#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: the string to count
 *
 * Return: the count
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s > 0)
	{
		i++;
		i = _strlen_recursion(s + 1) + i;
	}
	return (i);
}
