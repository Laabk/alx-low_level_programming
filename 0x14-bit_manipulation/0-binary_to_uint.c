#include "main.h"

/**
 * binary_to_uint - converts binary number to an
 * unsigned integer
 * @b: pointer to the involved string
 * with that binary number
 * Return: converted number of binary val.
 */

unsigned int binary_to_uint(const char *b)
{
        unsigned int d = 0;
        int m = 0;

        if (!b)
        {
        return (0);
        }
        while (b[m]
        {
        if (b[m] < '0' || b[m] > '1')
        {
        return (0);
        }
        d = 2 * d + (b[m] - '0');
        m++;
        }
        return (d);
}
