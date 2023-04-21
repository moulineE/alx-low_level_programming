#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything.
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...);
{
	va_list ap;
	unsigned int i;
	char *str;
	char separator = "";

	va_start(ap, format);
	if (format > 0)
	{
		for (i = 0; format[i] > 0; i++)
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c,", separator va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d,", separator va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f,", separator va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char*);
					if (str != NULL)
					{
						str = "(nil)";
					}
					printf("%s%s,", separator str);
					break;
			}
			separator = ", ";
			i++;
		}
	printf("\n");
	va_end(ap);
}
