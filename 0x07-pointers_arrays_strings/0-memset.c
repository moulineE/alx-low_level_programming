#include "main.h"
/**
 * *_memset - fills the first n bytes of the memory area pointed to by 
 * s with the constant byte b
 * @s: the arrey to fill
 * @b: the byte to fill the memory by
 * @n: the number of element if the array to fill
 *
 * Return: n
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
