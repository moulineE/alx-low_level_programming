#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string to print
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) > 0; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
