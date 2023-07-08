#include <stdio.h>
#include <stdlib.h>
/**
* main - prints multiplication
*@argc: number of argument
*@argv: array of argument
*Return: returns 0
*/

int main(int argc, char *argv[])
{
	int n, m, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	mul = n * m;

	printf("%d\n", mul);
	return (0);
}
