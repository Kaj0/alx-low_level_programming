#include "main.h"

/**
 * read_textfile - reads and prints textfile to the standard output
 * @filename: file name
 * @letters: number of letters
 *
 * Return: read and printed number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int txtfile;
	ssize_t nrd, nwr;
	char *buffer;

	if (filename == NULL)
		return (0);

	txtfile = open(filename, O_RDONLY);
	if (txtfile == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters));

	if (buffer == NULL)
	{
		return (0);
	}
	nrd = read(txtfile, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(txtfile);
	free(buffer);
	return (nwr);
}
