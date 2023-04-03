#include "main.h"
/**
 * *cap_string - Write a function that
 * changes all lowercase letters to uppercase.
 * @s: the string to change
 *
 * Return: the string in uppercase
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] > 0; i++)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] = (s[i] - 32);
		}
	}

	return (s);
}
