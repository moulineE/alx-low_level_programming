#include "main.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: the searched string
 * @accept: the liste of byte to locate
 *
 * Return: a pointer to the first occurence of accept, or null if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int m;

	for (i = 0; s[i] > 0; i++)
	{
		for (m = 0; accept[m] > 0; m++)
		{
			if (s[i] == accept[m])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
