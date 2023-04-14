#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the length of s2 to concatenates
 *
 * Return: str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int y;

	i = 0;
	while (s1[i] > 0)
	{
		i++;
	}
	y = 0;
	while (s2[y] > 0)
	{
		y++;
	}
	if (y < n)
	{
		n = y;
	}
	str = malloc(sizeof(char) * (i + n + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] > 0; i++)
	{
		str[i] = s1[i];
	}
	for (y = 0; y < n; y++)
	{
		str[i] = s2[y];
		i++;
	}
	str[i] = '\0';
	return (str);
}

