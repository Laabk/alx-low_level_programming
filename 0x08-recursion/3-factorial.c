#include "main.h"

/**
 * factorial - it returns the factorial of a number
 * @n: the number to find its factorial
 * Return: 0 is success and 1 is error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
