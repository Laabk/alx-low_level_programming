#include "search_algos.h"

/**
 * linear_search - this function searches for a value
 * in an array of integers.
 * @array: pointer of given array
 * @size: size of elements in the array
 * @value: value to be searched
 * Return: Value, or -1 for value not present
 */
int linear_search(int *array, size_t size, int value)
{
	int d;

	if (array == NULL)
	return (-1);
	while (d < (int)size)
	{
	printf("Value checked array[%d] = [%d]\n", d, array[d]);
	if (array[d] == value)
	return (d);
	d++;
	}
	return (-1);
}
