#include "main.h"
#include <stdio.h>

/**
 * print_binary - function which Print a binary representation of a number.
 * @n: Number to printed in binary state
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar(('0') + (n & 1));
}
