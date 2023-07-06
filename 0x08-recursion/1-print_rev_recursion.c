#include "main.h"

/**
 * _print_rev_recursion(char *s) - prints out string in the reverse
 * @s: string to print
 *
 * Return 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
