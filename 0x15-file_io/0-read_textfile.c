#include "main.h"

/**
 * read_textfile - reads any involved text file and letters
 * and prints to stdout
 * @filename: filename of any text involved
 * @letters: numbers of letters to be print 
 * Return: numbers of letters printed. or returns 0 if fail.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *numb;
	int filen;
	ssize_t n, b;

	if (!filename)
	{
	return (0);
	}
	filen = open(filename, O_RDONLY);

	if (filen == -1)
	{
	return (0);
	}
	numb = malloc(sizeof(char) * (letters));
	if (!numb)
	return (0);

	n = read(filen, numb, letters);
	b = write(STDOUT_FILENO, numb, n);

	close(filen);
	free(numb);
	return (b);
}
