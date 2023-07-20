#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints the strings and  followed by a new line
 * @separator: string to print in between the strings
 * @n: the argument involved
 * @...: Atarget variable strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *pt;
	unsigned int list;

	va_start(strings, n);

	for (list = 0; list < n; list++)
	{
		pt = va_arg(strings, char *);
		if (pt == NULL)
		{
		printf("(nil)");
		}
		else
		printf("%s", pt);
		if (list < n - 1 && separator != NULL)
		{
		printf("%s", separator);
		}
		printf("\n");
	}
	va_end(strings);
}
