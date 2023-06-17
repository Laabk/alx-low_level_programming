#include <stdio.h>

/**
* main - A code printing the size of types
* Return: 0
*/
int main(void)
{
	int l;
	long int a;
	long long int b;
	char g;
	float d;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(g));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));
	return (0);
}
