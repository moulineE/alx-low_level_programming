#include "main.h"
/**
 * *_memcpy - a function that copies memory area.
 * @dest: the arrey to copy to
 * @src: the byte to copy from
 * @n: the number of element to copy frome
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int m;

	m = 0;
	for (i = 0; i < n; i++)
	{
		*(dest + m) = src[i];
		m++;
	}
	return (dest);
}
