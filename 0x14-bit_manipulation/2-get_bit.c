#include "main.h"

/**
 * get_bit - take value of bit at a target index in decimal number
 * @n: bit involved
 * @index:value to get from
 * Return: value of the bit or erro --1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int binum;

	if (index > 63)
	{
	return (-1);
	}
	binum = (n >> index) & 1;
	return (binum);
}
