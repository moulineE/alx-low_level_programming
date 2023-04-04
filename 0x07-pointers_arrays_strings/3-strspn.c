#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the string to search in
 * @accept: the list of byte to count
 *
 * Return: a the number of recurence of accept byte
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int m;
	unsigned int a;

	a = 0;
	for (i = 0; s[i] != 32; i++)
	{
		for (m = 0; accept[m] > 0; m++)
		{
			if (s[i] == accept[m])
			{
				a = a + 1;
			}
		}
	}
	return (a);
}
