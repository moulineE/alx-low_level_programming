#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);
int _isdigit(int c);
int digiteste(char *s);

/**
 * main - program that adds positive numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 if success, 1 if fail
 */
int main(int argc, char *argv[])
{
	int i;
	int m = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (digiteste(argv[i]))
		{
			m = m + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", m);
	return (0);
}
/**
 * digiteste - teste if s is composed of digits
 * @s:  the char array tested
 *
 * Return: 1 if digfit, 0 if not
 */
int digiteste(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		if (!(_isdigit(s[i])))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the character to check
 *
 * Return: 1 if digit, 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
