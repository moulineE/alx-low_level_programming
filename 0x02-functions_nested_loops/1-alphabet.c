#include <unistd.h>
#include "main.h"
/**
 *  print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 *  Return: void
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i = i + 1;
	}
	_putchar('\n');
}
