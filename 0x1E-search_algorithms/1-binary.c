#include "search_algos.h"
/**
 * binary_search - this funct searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer of given array
 * @size: size of elements in array
 * @value: the value to be searched
 * Return: Value, or -1 for the value not present
 */
int binary_search(int *array, size_t size, int value)
{
	int d;
	int side_l, side_r;

	if (!array)
	return (-1);
	for (side_l = 0, side_r = (int)size - 1; side_r >= side_l;)
	{
	printf("Searching in array: ");
	for (d = side_l; d < side_r; d++)
	printf("%d, ", array[d]);
	printf("%d\n", array[d]);
	d = side_l + (side_r - side_l) / 2;
	if (array[d] == value)
	return (d);
	if (array[d] > value)
	side_r = d - 1;
	else
	side_l = d + 1;
	}
	return (-1);
}
