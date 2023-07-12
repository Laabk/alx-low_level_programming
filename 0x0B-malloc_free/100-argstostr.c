#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int n, m, a, arr;
	char *arg;

	arr = 0;
	a = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	n = 0;
	while (n < ac)
	{
		m = 0;

		while (av[n][m])
		{
			arr++;
			m++;
		}
		arr++;
		n++;
	}
	arg = malloc((sizeof(char) * arr) + 1);
	if (arg == NULL)
	return (NULL);
	n = 0;
	while (n < ac)
	{
		m = 0;
		while (av[n][m])
		{
			arg[a] = av[n][m];
			m++;
			a++;
		}
		arg[a] = '\n';
		a++;
		n++;
	}
	arg[a] = '\0';
	return (arg);
}
