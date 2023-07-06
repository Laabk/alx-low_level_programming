#include "main.h"

/**
 * _strlen_recursion - it returns the lenth of the string
 * @s: string that calculate the length
 * Return: 0
 */
int _strlen_recursion(char *s)

{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
