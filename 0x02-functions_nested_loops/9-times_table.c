#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int l;
	int c;
	int m;

	for (l = 0; l < 10; l++)
	{
		for (c = 0; c < 10; c++)
		{
			m = l * c;
			if (c == 0)
			{
				_putchar(m + '0');
			}

			if (m < 10 && c != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			} else if (m >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
