/*
 * C - Even more pointers, arrays and strings
 */
#include "main.h"
#include "stdio.h"
/**
 * _memset -  fills memory block with a constant value.
 * @s: adress of memory to be filed 
 * @b desired  byte
 * @n: buffer size
 * Return: a array refrance
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
