#include <stdio.h>

/**
 * main - Printing the name of the file of the program
 * was compiled from, followed by a new line.
 * printstring: prints string to stdout
 * str: string to be printed
 * Return: 0
 */
void printString(const char *str)
{
	int i;
{
	for (i = 0; str[i] != '\0'; i++)
		putchar(str[i]);
}
int main(void)

{
	 printString(__FILE__);
	 putchar('\n')
return (0);
}
