#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: the string to rev
 */
void rev_string(char *s)
{
	int i;
	int c = 0;
	char b[1000];
	int d;

	for (i = 0; *(s + i) > 0; i++)
	{
	}
	d = i;
	while (i > 0)
	{
		i--;
		*(b + c) = (*(s + i));
		c++;
	}
	for (i = 0; i < d; i++)
	{
		*(s + i) = *(b + i);
	}
}
