#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates string one to string two
 * @s1: string one to join
 * @s2: string two to concatenate
 * @n: amount in bytes from string to string one
 *
 * Return: pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *str;
	unsigned int a = 0, m = 0, size1 = 0, size2 = 0;

	while (s1 && s1[size1])
		size1++;
	while (s2 && s2[size2])
		size2++;

	if (n < size2)
	{
		str = malloc(sizeof(char) * (size1 + n + 1));
	}
	else
	{
		str = malloc(sizeof(char) * (size1 + size2 + 1));
	}

	if (!str)
	{
		return (NULL);
	}
	while (a < size1)
	{
		str[a] = s1[a];
		a++;
	}

	while (n < size2 && a < size1 + n)
		str[a++] = s2[m++];

	while (n >= size2 && a < (size1 + size2))
		str[++a] = s2[++m];

	str[a] = '\0';

	return (str);
}
