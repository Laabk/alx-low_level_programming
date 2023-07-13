#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - change memory area with malloc and free
 * @ptr: pointer to the @old memory areaa
 * @old_size: amount of memory allocated for the pointer
 * @new_size: amount of size for the new memory area
 * Return: pointer to the new allocated memory area
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	char *old_ptr;
	unsigned int a;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		return (malloc(new_size));
	}
	pt = malloc(new_size);

	if (!pt)
	{
		return (NULL);
	}
	old_ptr = ptr;

	if (new_size < old_size)
	{
	for (a = 0; a < new_size; a++)
	pt[a] = old_ptr[a];
	}

	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			pt[a] = old_ptr[a];
	}

	free(ptr);
	return (pt);
}
