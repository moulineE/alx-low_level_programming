#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: agrc
 * @av: argv[]
 *
 * Return: r if success, NULL if not
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int f = 0;
	int len = 0;
	char *r;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] > 0; j++)
		{
			len++;
		}
	}
	r = malloc(sizeof(char) * (len + ac) + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		if (f > 0)
		{
			r[f] = '\n';
			f++;
		}
		for (j = 0; av[i][j] > 0; j++)
		{
			r[f] = av[i][j];
			f++;
		}
	}
	r[f] = '\n';
	r[f + 1] = '\0';
	return (r);
}
