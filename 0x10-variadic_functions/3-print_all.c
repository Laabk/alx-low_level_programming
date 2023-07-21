#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print anything
 * @format: list of all the target arguments passed to function
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list numbs;
	char *s, *sep;

	va_start(numbs, format);
	sep = "";

	if (format)
	{
		while (format[i])
	{
		switch (format[i])
		{
			case 'c':
			printf("%s%c", sep, va_arg(numbs, int));
			break;
			case 'i':
			printf("%s%d", sep, va_arg(numbs, int));
			break;
			case 'f':
			printf("%s%f", sep, va_arg(numbs, double));
			break;
			case 's':
			s = va_arg(numbs, char *);
			if (s == NULL)
			s = "(nil)";
			printf("%s%s", sep, s);
			break;
		default:
			i++;
			continue;
		}
		sep = ", ";
		i++;
	}
	}
	va_end(numbs);
	printf("\n");
}
