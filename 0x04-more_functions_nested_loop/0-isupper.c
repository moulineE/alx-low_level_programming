#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: the character to check
 *
 * Return: 1 if uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	int i;

	if (c <= 90)
	{
		i = 1;
	}
	else if (c >= 97)
	{
		i = 0;
	}

	return (i);
}
