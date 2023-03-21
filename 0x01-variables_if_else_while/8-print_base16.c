#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * declare variable n and i, assign 0 to n and 48 to i
 *
 * while structure with putchar to prints all the numbers of base 16 in lowercase
 *
 * if, else structure to exclude ascii character 58 to 96
 *
 * assign '\n' to n
 *
 * print a newligne with putchar
 *
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	int n;
	int i;

	n = 0;
	i = 48;

	while ((i + n) <= 102)
	{
		putchar(i +  n);
		if (!((((i + n) > 56)) && ((i + n) < 96)))
		{
			n = n + 1;
		}
		else
		{
			n = n + 40;
		}
	}
	n = '\n';
	putchar(n);

	return (0);
}
