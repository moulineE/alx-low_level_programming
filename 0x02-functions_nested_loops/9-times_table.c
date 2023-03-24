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
		for (m = 0; m <= 9; m++)
		{
			a = h * m;
			if (a > 9)
			{
				b = a / 10;
				c = a % 10;
				_putchar(b + '0');
				_putchar(c + '0');
				if (m != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(a + '0');
				if (m != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}

		}
		_putchar('\n');
	}
}
