#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function which  prints numbers follow by a line.
 * @n: arguments involve
 * @separator: the string to prints between the numbers
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vals;
	unsigned int list;

	va_start(vals, n);
		for (list = 0; list < n; ++list)
	{
		printf("%d", va_arg(vals, int));

		if (list < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(vals);
}
