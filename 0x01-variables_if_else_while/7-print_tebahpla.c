#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * declare variable c && assign 'z' to c
 *
 * while structure with putchar to prints the lowercase alphabet in reverse
 *
 * assign '\n' to c
 *
 * print a newligne with putchar
 *
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c = c - 1;
	}
	c = '\n';
	putchar(c);

	return (0);
}
