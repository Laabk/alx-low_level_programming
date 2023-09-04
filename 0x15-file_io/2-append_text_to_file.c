#include "main.h"

/**
 * append_text_to_file - the text to be added at the end of a file
 * @filename: the pointer to file name
 * @text_content: the string to be addd at the end of another
 * Return: 1 if the file exists. -1 if the fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int n, filen, lette;

	if (!filename)
	{
	return (-1);
	}

	filen = open(filename, O_WRONLY | O_APPEND);

	if (filen == -1)
	{
	return (-1);
	}
	if (text_content)
	{
	for (lette = 0; text_content[lette]; lette++)
			;

	n = write(filen, text_content, lette);

	if (n == -1)
	{
	return (-1);
	}
	}
	close(filen);
	return (1);
}
