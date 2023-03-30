#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: the string to rev
 */
void rev_string(char *s)
{
	int i;
	char b[10];
	int c = 0;

	for (i = 0; *(s + i) > 0; i++)
	{
	}
	while (i > 0)
	{
		i--;
		*(b + c) = (*(s + i));
		c++;
	}
	for (i = 0; i < 10; i++)
	{
		*(s + i) = *(b + i);
	}
}
