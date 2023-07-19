#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name required by the function
 * @name: pointer to the name to print
 * @f: the pointer to the function to print
 */

void print_name(char *name, void (*f)(char *))
{
	if (!(name && f))
		return;
	{
		f(name);
	}
}
