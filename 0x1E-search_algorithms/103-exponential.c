#include "search_algos.h"

/**
 * search_recursively - this will searc for a value in an array of
 * integers in lst using the Binary search algorithm
 * @array: the array involved
 * @size: the array size
 * @value: value to search
 * Return: index of number
 */
int search_recursively(int *array, size_t size, int value)
{
	size_t h_seac = size / 2, d;

	if (array == NULL || size == 0)
	return (-1);

	printf("Searching in array");

	for (d = 0; d < size; d++)
	printf("%s %d", (d == 0) ? ":" : ",", array[d]);

	printf("\n");

	if (h_seac && size % 2 == 0)
	h_seac--;

	if (value == array[h_seac])
	{
	return ((int)h_seac);
	}
	if (value < array[h_seac])
	return (search_recursively(array, h_seac, value));

	h_seac++;

	return (search_recursively(array + h_seac, size - h_seac, value) + h_seac);
}

/**
 * binary_search_func - this uses the binary_search to return
 * the index of the number
 * @array: array involved
 * @size: the array size
 * @value: value to search
 * Return: index of number
 */
int binary_search_func(int *array, size_t size, int value)
{
	int indx;

	indx = search_recursively(array, size, value);

	if (indx >= 0 && array[indx] != value)
	return (-1);

	return (indx);
}

/**
 * exponential_search - this func searches for the value in array of
 * integers using the Exponential search algorithm
 * @array: array involved
 * @size: the arrays size
 * @value: value to search
 * Return: index of number
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t idx;
	size_t next;
	int all;

	if (array == NULL)
	return (-1);

	if (array[0] == value)
	return (0);

	idx = 1;

	while (array[idx] < value && idx < size)
	{
	printf("Value checked array[%d] = [%d]\n", (int)idx, array[idx]);
	idx *= 2;
	}
	next = (idx >= size) ? (size - 1) : idx;
	idx /= 2;

	printf("Value found between indexes [%d] and [%d]\n", (int)idx, (int)next);

	all = binary_search_func(array + idx, (next + 1) - idx, value);

	if (all >= 0)
	all += idx;
	return (all);
}
