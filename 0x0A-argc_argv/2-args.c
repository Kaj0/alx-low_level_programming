#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: counter argument
 * @argv: vector argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);

	return (0);
}
