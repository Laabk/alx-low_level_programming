#include "main.h"

/**
 * print_binary - this funct prints the binary
 * equivalent of a decimal number
 * @n: the number involved to print in binary
 */

void print_binary(unsigned long int n)
{
	int a = 63, numms = 0;
	unsigned long int curr;

	while (a >= 0)
	{
	curr = n >> a;

	if (curr & 1)
	{
	_putchar('1');
	numms++;
	}
	else if (numms)
	_putchar('0');
	a--;
	}
	if (!numms)
	_putchar('0');
}

