#include "main.h"
/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int h;
	int m;
	int a;
	int b;
	int c;
	int d;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			a = h / 10;
			b = h % 10;
			c = m / 10;
			d = m % 10;
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar('\n');
		}
	}
}
