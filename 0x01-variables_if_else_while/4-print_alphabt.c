#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * declare variable c, assign 'a' to c
 *
 * while structure with putchar to prints the alphabet in lowercase
 *
 * if, else structure to exclude 'e' and 'q'
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

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		if (!((c == 'd' || c == 'p')))
		{
			c = c + 1;
		}
		else
		{
			c = c + 2;
		}
	}
	c = '\n';
	putchar(c);

	return (0);
}
