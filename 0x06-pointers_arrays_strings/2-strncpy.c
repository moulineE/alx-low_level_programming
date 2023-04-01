#include "main.h"
/**
 * *_strncpy - a function that copies a string.
 * and should work exactly like strncpy frome std library
 * @dest: the destination to copy to
 * @src: the source of the string to be copied
 * @n: bytes from src to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
