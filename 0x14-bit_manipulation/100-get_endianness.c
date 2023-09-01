#include "main.h"

/**
 * get_endianness - this consider the machine to be little
 * big endian
 * Return: 0 as big, 1 as little.
 */
int get_endianness(void)
{
	unsigned int d = 1;
	char *endian = (char *) &d;

	if (*endian == 1)
	{
	return (1);
	}

	return (0);
}
