#include "main.h"

/**
 * read_textfile - reads a text file and letters 
 * involve and prints to stdout
 * @filename: filename of the tevt involved
 * @letters: numbers of letters involve to print 
 *
 * Return: numbers of letters printed. or returns 0 if fail.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *cont;
	int filn;
	ssize_t n;
	ssize_t a;

	if (!filename)
	{
	return (0);
	}
	filn = open(filename, O_RDONLY);

	if (filn == -1)
	{
	return (0);
	}
	cont = malloc(sizeof(char) * (letters));
	if (!cont)
	return (0);

	n = read(filn, cont, letters);
	a = write(STDOUT_FILENO, cont, n);

	close(filn);
	free(cont);
	return (a);
}
