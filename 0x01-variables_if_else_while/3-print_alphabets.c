#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * declare variable c, C && assign 'a' to c and 'A' to C
 *
 * while structure with putchar to prints the alphabet in lowercase
 *
 * while structure with putchar to prints the alphabet in uppercase
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
	char C;

	c = 'a';
	C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C = C + 1;
	}
	c = '\n';
	putchar(c);

	return (0);
}
