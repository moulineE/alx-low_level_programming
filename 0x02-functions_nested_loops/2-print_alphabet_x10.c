#include <unistd.h>
#include "main.h"
/**
 *  print_alphabet_x10 - prints the alphabet 10x, in lowercase,
 *  followed by a new line
 *
 *  Return: void
 */
void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a < 10; ++a)
	{
		int i = 97;

		while (i <= 122)
		{
			_putchar(i);
			i = i + 1;
		}
		_putchar('\n');
	}
}
