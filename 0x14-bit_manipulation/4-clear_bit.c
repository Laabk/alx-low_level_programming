#include "main.h"

/**
 * clear_bit - sets the value to 0 in a given bit
 * @n: The pointer
 * @index: index of bit to set 
 *
 * Return: 1 is success, -1 is error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
	return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}
