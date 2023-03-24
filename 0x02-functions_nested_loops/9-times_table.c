#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int h;
	int m;
	int a;
	int b;
	int c;

	for (h = 0; h <= 9; h++)
	{
		_putchar('0');
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');
			a = h * m;
			b = a / 10;
			c = a % 10;
			if (a <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(b + '0');
			}
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
