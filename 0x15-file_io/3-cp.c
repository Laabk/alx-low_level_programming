#include "main.h"
#include <stdlib.h>
#include <stdio.h>


char *create_cont(char *file);
void close_file(int fld);

/**
 * create_cont - the reserve 1024 bytes for cont.
 * @file: name of the file
 * Return: the pointer
 */

char *create_cont(char *file)
{
	char *numb;

	numb = malloc(sizeof(char) * 1024);

	if (numb == NULL)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't write to %s\n", file);
	exit(99);
	}

	return (numb);
}

/**
 * close_file - this func exits the file descriptors.
 * @filn: file to be close
 */

void close_file(int fld)
{
	int a;

	a = close(fld);

	if (a == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fld %d\n", fld);
	exit(100);
	}
}

/**
 * main - this Copies files to another
 * @argc: arguments involved in program.
 * @argv: ther pointers to the arguments involved
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int a, z;
	int n, i;
	char *numb;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}

	numb = create_cont(argv[2]);
	n = open(argv[1], O_RDONLY);
	a = read(a, cont, 1024);
	z = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
	if (n == -1 || a == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't read from file %s\n", argv[1]);
	free(numb);
	exit(98);
	}

	i = write(z, numb, a);
	if (z == -1 || i == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't write to %s\n", argv[2]);
	free(numb);
	exit(99);
	}

	a = read(n, numb, 1024);
	z = open(argv[2], O_WRONLY | O_APPEND);
	} while (a > 0);
	free(numb);
	close_file(n);
	close_file(z);
	return (0);
}
