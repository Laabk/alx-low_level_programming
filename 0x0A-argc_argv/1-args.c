#include <stdio.h>

/**
* main - this prints the number of arguments
*@argc: number of arguments involved
 *@argv: arrays of the arguments
 *Return: the arguments
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
