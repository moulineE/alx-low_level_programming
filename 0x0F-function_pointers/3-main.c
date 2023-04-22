#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that performs simple operations.
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *op;
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
