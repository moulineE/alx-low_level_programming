#include "main.h"
/**
 * *_strchr - function that locates a character in a string.
 * @s: the string search in
 * @c: the character to locate
 *
 * Return: s ot null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] > 0; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
