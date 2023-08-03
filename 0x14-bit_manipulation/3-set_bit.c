#include "main.h"

/**
 * set_bit - sets a bit at 1 as given index
 * @n: bit pointer
 * @index: index of bit to set an an indices
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
	return (-1);
	}
	*n = ((1UL << index) | *n);
	return (1);
}
