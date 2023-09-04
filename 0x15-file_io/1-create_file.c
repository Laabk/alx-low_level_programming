#include "main.h"

/**
 * create_file - this func creates files
 * @filename: pointer to the file to create
 * @text_content: the contents which are required in file.
 * Return: 1 on success. -1 on fails.
 */

int create_file(const char *filename, char *text_content)
{
	int n;
	int filen, lette;

	if (!filename)
	{
	return (-1);
	}
	filen = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filen == -1)
	{
	return (-1);
	}
	if (!text_content)
	text_content = "";
	for (lette = 0; text_content[lette]; lette++)
		;

	n = write(filen, text_content, lette);

	if (n == -1)
	{
	return (-1);
	}
	close(filen);
	return (1);
}
