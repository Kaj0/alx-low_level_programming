#include "main.h"

/**
  * print_alphabet_x10 - prints the alphabet in lower case ten times
  */
void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
	}
}
