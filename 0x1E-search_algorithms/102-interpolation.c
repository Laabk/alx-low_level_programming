#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - this func searches for a value in sorted array
 * lst of int using interpolation between gaps of index
 * @array: pointer of given array
 * @size: sssize of elements in the array
 * @value: thevalue to be searched
 * Return: Value, or -1 for value not present
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, d, high;

	if (!array)
	return (-1);
	for (low = 0, high = size - 1; high >= low;)
	{
	d = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
	if (d < size)
	printf("Value checked array[%ld] = [%d]\n", d, array[d]);
	else
	{
	printf("Value checked array[%ld] is out of range\n", d);
	break;
	}
	if (array[d] == value)
	return (d);
	if (array[d] > value)
	{
	high = d - 1;
	}
	else
	{
	low = d + 1;
	}
	}
	return (-1);
}
