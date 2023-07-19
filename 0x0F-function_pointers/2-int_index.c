#include "function_pointers.h"

/**
 * int_index- searches for an integer in the array
 * @size: the number of elements in that array
 * @array: that array to be searched in it
 * @cmp: pointer to the functions to be compare
 * return: index of the first element for which
 * the cmp function does not return 0 If no
 * element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (!(array || cmp))
		return (-1);
	while (a < size)
	a++;
	{
	if (cmp(array[a]) != '\0')
		return (a);
	}
	return (-1);
}
