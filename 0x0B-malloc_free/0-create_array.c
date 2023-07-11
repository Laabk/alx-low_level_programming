#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: this is the string
 * Return: return 0
 */
char *create_array(unsigned int size, char c)
{

	char *storage;
	unsigned int location;

	if (size == 0)
	{
	return (NULL);
	}
	storage = (char *) malloc(size * sizeof(c));

	if (storage == 0)
	{
	return (NULL);
	}
	else
	{
	location = 0;
	while (location < size)
	{
	*(location + storage) = c;
	location++;
	}
	return (storage);
	}
}
