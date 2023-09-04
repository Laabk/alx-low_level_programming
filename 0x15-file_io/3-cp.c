#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - this Allocates 1024 bytes for a container.
 * @file: name of file container is storing chars for.
 * Return: pointer to newly-allocated buffer.
 */

char *create_container(char *file)
{
	char *container;

	container = malloc(sizeof(char) * 1024);

	if (container == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (container);
}

/**
 * close_file - this Closes file descriptors involved
 * @fd: file descriptor to be closed.
 */
void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - this Copies the contents of a file to that of another file.
 * @argc: number of arguments applied to the program.
 * @argv: array of pointers to arguments.
 * Return: 0 on success.
 * Description: so if the argument count is incorrect - exit code 97.
 */

int main(int argc, char *argv[])
{
	int from, to, a, b;
	char *container;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	container = create_container(argv[2]);
	from = open(argv[1], O_RDONLY);
	a = read(from, container, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(container);
			exit(98);
		}

		b = write(to, container, a);
		if (to == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(container);
			exit(99);
		}

		a = read(from, container, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (a > 0);

	free(container);
	close_file(from);
	close_file(to);

	return (0);
}
