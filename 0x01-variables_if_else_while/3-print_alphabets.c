#include <stdio.h>
/**
 * main - Data entry point
 * Return: Always 0 (successful)
 */
int main(void)
{
int lowercase = 'a';
int uppercase = 'A';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase += 1;
}
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase <= 1;
}
putchar('\n');
return (0);
}
