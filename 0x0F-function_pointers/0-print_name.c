#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that prints a name.
 * @name: the name to print
 * @f: the fcontion to use to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
