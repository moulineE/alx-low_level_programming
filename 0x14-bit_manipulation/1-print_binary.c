#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the digit to print in binary
 */
void print_binary(unsigned long int n)
{
	int i = (8 * (sizeof(unsigned long int)) - 1);
	int flag = 0;
	unsigned long int binary_check;

	while (i >= 0)
	{
		binary_check = n >> i;
		if (binary_check & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag > 0)
		{
			_putchar('0');
		}
		i--;
	}
	if (flag == 0)
	{
		_putchar('0');
	}
}
