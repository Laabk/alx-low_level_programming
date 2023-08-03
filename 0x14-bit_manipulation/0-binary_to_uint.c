#include "main.h"

/**
 * binary_to_uint - converts binary numbera to an
 * unsigned integer
 * @b: pointer to the involved string
 * with that binary number
 * Return: converted number of decimal val.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dnum = 0;
	int n;

	if (!b)
	{
	return (0);
	}

	for (n = 0; b[n]; n++)
	{
	if (b[n] < '0' || b[n] > '1')
	{
	return (0);
	}
	dnum = 2 * dnum + (b[n] - '0');
	}
	return (dnum);
}
