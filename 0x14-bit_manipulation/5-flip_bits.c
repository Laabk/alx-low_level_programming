#include "main.h"

/**
 * flip_bits - checks number of bits thats required to
 * change from a number to another
 * @n: number to be chaned
 * @m: number to change into
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int binum = 0;
	unsigned long int bixor = n ^ m;

	while (bixor > 0)
	{
	binum += (bixor & 1);
	bixor >>= 1;
	}
	return (binum);
}
