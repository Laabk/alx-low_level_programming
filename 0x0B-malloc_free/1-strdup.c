#include <stdlib.h>
#include "main.h"

/**
 * *_strdup -duplicate the given string to a new area
 * @str: string to be copied
 * Return: return the pointer to the copied string (Success)
 * otherwise NULL (Error)
 */
char *_strdup(char *str)
{
	char *cop;
	unsigned int n, size;

	n = 0;
	size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size])
		size++;

	cop = malloc(sizeof(char) * (size + 1));

	if (cop == NULL)
	{
		return (NULL);
	}
	while ((cop[n] = str[n]) != '\0')
		n++;

	return (cop);
}
