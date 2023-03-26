#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 */
void more_numbers(void)
{
	int i;
	int a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			_putchar(a + '0');
			if (a > 9)
			{
				a = a % 10;
				_putchar(a + '0');
			}
		}
		_putchar('\n');
	}
}
