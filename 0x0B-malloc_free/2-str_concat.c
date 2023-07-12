#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concartenates and add strings together for the size
 * @s1: target one to concat
 * @s2: target two to concat
 * Return: concat  s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int a, m
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n = m = 0;
	while (s1[n] != '\0')
		n++;
	while (s2[ci] != '\0')
		m++;
	concat = malloc(sizeof(char) * (n + m + 1));

	if (concat == NULL)
		return (NULL);
	n = m = 0;
	while (s1[n] != '\0')
	{
		concat[n] = s1[n];
		i++;
	}

	while (s2[m] != '\0')
	{
		concat[n] = s2[m];
		n++, m++;
	}
	conct[n] = '\0';
	return (concat);
}

