#include "main.h"

/**
 * flip_bits - it checks number of bits thats required to
 * change from a number to another number
 * @n: number involved to be changed
 * @m: the number to change into
 * Return: the number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bn = 0, bx = n ^ m;

	while (bx > 0)
	{
	bn += (bx & 1);
	bx >>= 1;
	}
	return (bn);
}
