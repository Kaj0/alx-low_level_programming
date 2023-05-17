#include "main.h"

/**
 * error_file - function to check if file can be opened.
 * @file_from: location of file
 * @file_to: destination of file
 * @argv: vector argument.
 *
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
