#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all the parameters given in a function
 * @n: the arguments involve
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vals;
	unsigned int list, sum;

	sum = 0;
	if (n == 0)
	{
	return (0);
	}
	va_start(vals, n);
	for (list = 0; list < n; ++list)
		sum += va_arg(vals, int);
	va_end(vals);
	return (sum);
}
