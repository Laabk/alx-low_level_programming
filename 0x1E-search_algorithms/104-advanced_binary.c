#include "search_algos.h"

/**
 * binary_seach_recur - this func searches for value in sorted array
 * of integers using recursion
 * @array: pointer of given array
 * @left: size_t element located at right side of array involved
 * @right: size_t element located at right side of array involved
 * @value: the value to search
 * Return: Value, or -1 for value not present
 */

int binary_seach_recur(int *array, size_t left, size_t right, int value)
{
	size_t d;

	if (right < left)
		return (-1);
	printf("Searching in array: ");

	d = left;

	while (d < right)
	{
	printf("%d,", array[d]);
	++d;
	}
	printf("%d\n", array[d]);

	d = left + (right - left) / 2;
	if (array[d] == value)
	return (d);
	if (array[d] > value)
	return (binary_seach_recur(array, left, d - 1, value));
	return (binary_seach_recur(array, d + 1, right, value));
}
/**
 * advanced_binary - the func searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer of given array
 * @size: size of elements in array
 * @value: the value to search
 * Return: Value, or -1 for value not present
 */
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL)
return (-1);
return (binary_seach_recur(array, 0, size - 1, value));
}
