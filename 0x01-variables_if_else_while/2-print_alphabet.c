#include <stdio.h>
#include <ctype.h>
/**
 * main - Data entry point
 * Return: Always 0 (successful)
 */
int main(void)
{
int lowercase = 'a';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase += 1;
}
putchar('\n');
return (0);
}
