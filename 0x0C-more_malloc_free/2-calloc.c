#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills the @s memory with a bytes
 * @s: area to fill with constant bite
 * @b: character to be copied
 * @n: number of b to be copied
 * Return: pointer to the @s memory location
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int a;

	for (a = 0; a < n; ++a)
		s[a] = b;
	return (s);
}

/**
 * *_calloc - allocates memory for the specific array
 * @nmemb: the amount of elements in the specific array
 * @size: each element sizes
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pr;

	if ((nmemb == 0) && (size == 0))
	{
		return (NULL);
	}
	pr = malloc(size * nmemb);

	if (pr == NULL)
	{
		return (NULL);
	}
	_memset(pr, 0, nmemb * size);

	return (pr);
}
