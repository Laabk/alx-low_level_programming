#include "main.h"

/**
 * append_text_to_file - text to added at the end of a file
 * @filename: pointer to file name
 * @text_content: string to be addd at the end of another
 * Return: 1 if the file exists. -1 if the fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int n;
	int filn;
	int let;

	if (!filename)
	{
	return (-1);
	}

	filn = open(filename, O_WRONLY | O_APPEND);

	if (filn == -1)
	{
	return (-1);
	}
	if (text_content)
	{
	for (let = 0; text_content[let]; let++)
			;

	n = write(filn, text_content, let);

	if (n == -1)
	{
	return (-1);
	}
	}
	close(filn);
	return (1);
}
