#include <stdio.h>
#include <stdlib.h>
/**
 * main - Enrty point
 *
 * declare int i
 *
 * for structure with printf to
 * prints all single digit numbers of base 10 starting from 0
 *
 * print a new line
 *
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	int i;

	for (i = 0; i  < 10; ++i)
	{
		printf("%d", i);
	}
	printf("\n");

	return (EXIT_SUCCESS);
}
