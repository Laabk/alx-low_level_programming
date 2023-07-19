#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print opcodes
 * @argc: Number of arguments involve
 * @argv: Argument array
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	char *arr;
	int n, bytes;

	if (argc != 2)

	{
		printf("%s\n", "Error");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("%s\n", "Error");
		exit(2);
	}
	arr = (char *)main;
	for (n = 0; n < bytes; ++n)
	{
		printf("%02hhx", arr[n]);
		if (n == bytes - 1)
		printf("\n");
		else
		printf(" ");
	}
	return (0);
}
