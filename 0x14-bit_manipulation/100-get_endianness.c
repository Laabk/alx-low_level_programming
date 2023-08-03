#include "main.h"

/**
 * get_endianness - consider a machine to be a little
 * big endian
 * Return: 0 as big, 1 as little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *endian = (char *) &a;

	if (*endian == 1)
	{
	return (1);
	}

	return (0);
}
