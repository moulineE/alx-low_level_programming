#include "main.h"
/**
 * _strcmp -  function that compares two strings
 * function should work exactly like strcmp
 * @s1: 1st string to compar
 * @s2: 2nd string to compar
 *
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
