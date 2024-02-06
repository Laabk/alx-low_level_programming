#include "search_algos.h"
#include <math.h>

/**
 * jump_search - this funct searches for a value in a sorted array
 * of int using n jumps
 * @array: pointer of given array
 * @size: size of elements in the array
 * @value: the value to be searched
 * Return: Value, or -1 for value not present
 */

int jump_search(int *array, size_t size, int value)
{
	size_t d = 0, n;
	size_t ju;

	if (!array || size == 0)
	return (-1);

	for (n = sqrt(size); d < size; d += n)
	{
	if (array[d] >= value)
	break;
	printf("Value checked array[%lu] = [%d]\n", d, array[d]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", d - n, d);
	ju = d - n;

	while (ju < size && ju <= d)
	{
	printf("Value checked array[%lu] = [%d]\n", ju, array[ju]);
	if (array[ju] == value)
	return (ju);
	ju++;
	}
	return (-1);
}
