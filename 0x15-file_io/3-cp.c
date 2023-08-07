#include "main.h"
#include <stdlib.h>
#include <stdio.h>


char *create_cont(char *file);
void close_file(int fld);

/**
 * create_cont - reserve 1024 bytes for cont.
 * @file: The name of the file
 * Return: pointer
 */
char *create_cont(char *file)
{
	char *cont;

	cont = malloc(sizeof(char) * 1024);

	if (cont == NULL)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't write to %s\n", file);
	exit(99);
	}

	return (cont);
}

/**
 * close_file - exits the file descriptors.
 * @filn: The file to close
 */
void close_file(int fld)
{
	int n;

	n = close(fld);

	if (n == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fld %d\n", fld);
	exit(100);
	}
}

/**
 * main - Copies files to another
 * @argc: The arguments involved in program.
 * @argv: pointers to the arguments involved
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int a, z;
	int n, i;
	char *cont;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}

	cont = create_cont(argv[2]);
	a = open(argv[1], O_RDONLY);
	n = read(a, cont, 1024);
	z = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
	if (a == -1 || n == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't read from file %s\n", argv[1]);
	free(cont);
	exit(98);
	}

	i = write(z, cont, n);
	if (z == -1 || i == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't write to %s\n", argv[2]);
	free(cont);
	exit(99);
	}

	n = read(a, cont, 1024);
	z = open(argv[2], O_WRONLY | O_APPEND);
	} while (n > 0);
	free(cont);
	close_file(a);
	close_file(z);
	return (0);
}
