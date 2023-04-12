#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: the string to copy
 *
 * Return: c
 */
char *_strdup(char *str)
{
	int i;
	char *c;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + i) > 0)
	{
		i++;
	}
	c = malloc(sizeof(char) * (i + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] > 0; i++)
	{
		c[i] = str[i];
	}
	return (c);

}
