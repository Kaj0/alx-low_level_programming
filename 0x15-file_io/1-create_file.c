#include "main.h"

/**
 * create_file - function to create file
 * @filename: file name
 * @text_content: NULL terminated string
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nlet, rwr;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	for (nlet = 0; text_content[nlet]; nlet++)
		;
	rwr = write(fd, text_content, nlet);

	if (rwr == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
