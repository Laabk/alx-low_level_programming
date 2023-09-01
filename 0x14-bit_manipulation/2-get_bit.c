#include "main.h"

/**
 * get_bit - takes any value of bit at a target index in decimal number
 * @n: the bit involved
 * @index: the value to get from
 * Return: value of the bit or erro --1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bnum;

	if (index > 63)
	{
	return (-1);
	}
	bnum = (n >> index) & 1;
	return (bnum);
}
