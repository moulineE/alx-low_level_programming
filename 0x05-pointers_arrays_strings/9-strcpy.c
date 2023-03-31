#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byteto the buffer pointed to by dest.
 * @dest: the destionation to copie
 * @src: the string to copy
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) >= 0; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
