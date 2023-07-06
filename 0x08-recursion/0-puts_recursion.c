#include "main.h"

/**
 * _puts_recursions - prints a string, followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar(*s)
		_puts_recursions(s + 1)
	}
	putchar('\n')
}
