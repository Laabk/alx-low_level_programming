#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - searches and executes a function in a given
 * parameter to an array elements
 * @array: the array for the iteration
 * @size: the size of the array
 * @action: the functions pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int a = 0;

	if (!(action || array))
	{
		return;
	}

	while (a < size)
	{
		action(array[a]);
		++a;
	}
}
