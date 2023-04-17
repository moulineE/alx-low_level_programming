#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
