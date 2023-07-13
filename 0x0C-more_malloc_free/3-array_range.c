#include <stdlib.h>
#include "main.h"

/**
  *array_range - creates integers in array
  *@min: the mininum value of integer
  *@max: maximum value of integer
  *Return: return pointer to new array.
  *NULL: malloc fails.
  */

int *array_range(int min, int max)
{
	int array, a;
	int *pt;

	array = 0;

	if (min > max)
	{
		return (NULL);
	}
	array = ((max + 1) - min);

	pt = malloc(array * sizeof(int));

	if (pt == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < array; ++a)
	{
		*(pt + a) = min + a;
	}

	return (pt);
}
