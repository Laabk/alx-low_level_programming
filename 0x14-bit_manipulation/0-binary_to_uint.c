#include "main.h"

/**
 * binary_to_uint - it converts a binary numbers to an unsigned intergers
 * @b: the pointer string containing the binary number
 * Return: the converted number of the binary
 */

unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int d = 0;

	if (!b)
	return (0);

	for (m = 0; b[m]; m++)
	{
	if (b[m] < '0' || b[m] > '1')
	return (0);
	d = 2 * d + (b[m] - '0');
	}

	return (d);
}

