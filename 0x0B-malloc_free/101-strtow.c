#include <stdlib.h>
#include "main.h"

/**
 * count_word - helps in counting the number of words in string
 * @s: target string
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int indicator, a, b;

	indicator = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			indicator = 0;
		else if (indicator == 0)
		{
			indicator = 1;
			b++;
		}
	}

	return (b);
}
/**
 * **strtow - splits string into two or more words
 * @str: target to be splited
 * Return: pointer to strings
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **array, *t;
	int n, m = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	array = (char **) malloc(sizeof(char *) * (words + 1));
	if (array == NULL)
		return (NULL);

	for (n = 0; n <= len; n++)
	{
		if (str[n] == ' ' || str[n] == '\0')
		{
			if (c)
			{
				end = n;
				t = (char *) malloc(sizeof(char) * (c + 1));
				if (t == NULL)
					return (NULL);
				while (start < end)
					*t++ = str[start++];
				*t = '\0';
				array[m] = t - c;
				m++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = n;
	}

	array[m] = NULL;

	return (array);
}
