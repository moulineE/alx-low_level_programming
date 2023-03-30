#include "main.h"
/**
 * puts_half -  print the second half of the string
 * @str: the string to print the second half of
 */
void puts_half(char *str)
{
	int i;
	int a;

	i = 0;
	while (*(str + i) > 0)
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (a = (i / 2); a < i; a++)
		{
			_putchar(*(str + a));
		}
	}
	else if (i % 2 != 0)
	{
		for (a = (i - 1) / 2; a < i; a++)
		{
			_putchar(*(str + a));
		}
	}
	_putchar('\n');
}
