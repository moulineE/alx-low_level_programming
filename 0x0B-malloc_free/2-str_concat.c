#include "main.h"
#include <stdlib.h>
/**
 * *str_concat -  function that concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the seconde string to concatenate
 *
 * Return: str or NULL if error
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int y;
	int z;
	char *str;

	i = 0;
	y = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] > 0)
	{
		i++;
	}
	while (s2[y] > 0)
	{
		y++;
	}
	z = i + y + 1;
	str = malloc(sizeof(char) * z);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] > 0; i++)
	{
		str[i] = s1[i];
	}
	for (y = 0; s2[y] > 0; y++)
	{
		str[i] = s2[y];
		i++;
	}
	str[i] = 0;
	return (str);
}
