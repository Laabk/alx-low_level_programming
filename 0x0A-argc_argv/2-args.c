#include <stdio.h>

/**
* main - prints every received arguments
*@argc: the argument count
*@argv: the argument vector
*Return: Always 0
*/

int main(int argc, char *argv[])
{
int n;

for (n = 0; n < argc; n++)
printf("%s\n", argv[n]);

return (0);
}
