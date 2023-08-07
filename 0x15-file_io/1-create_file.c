#include "main.h"

/**
 * create_file - creates files
 * @filename: pointer to file to creat
 * @text_content: content required in file.
 * Return: 1 on success. -1 on fails.
 */
int create_file(const char *filename, char *text_content)
{
	int n;
	int filn;
	int let;

	if (!filename)
	{
	return (-1);
	}
	filn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filn == -1)
	{
	return (-1);
	}
	if (!text_content)
	text_content = "";
	for (let = 0; text_content[let]; let++)
		;

	n = write(filn, text_content, let);

	if (n == -1)
	{
	return (-1);
	}
	close(filn);
	return (1);
}
