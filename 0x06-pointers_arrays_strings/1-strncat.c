#include "main.h"
/**
 * *_strncat - a function that concatenates two strings.
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: the destionation to concatenates
 * @src: the string to copy
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int m;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	m = 0;
	while (m < n && src[m] != '\0')
	{
	dest[i] = src[m];
	i++;
	m++;
	}
	dest[i] = '\0';


	return (dest);
}
