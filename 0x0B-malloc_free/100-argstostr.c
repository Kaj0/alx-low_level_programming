#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * argstostr - converts parameters passed to the program to str
  * @ac: counter argument
  * @av: vector argument
  * Return: NULL or pointer to a new string
  *
  */
char *argstostr(int ac, char **av)
{
	char *ar;
	int i;
	int j;
	int k = 0;
	int n;
	int m;
	int counter = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			counter++;

		counter++;
	}
	counter++; /* to account for \n that needs to be added later */
	ar = malloc(sizeof(char) * counter);
	if (ar == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m] != '\0'; m++)
		{
			ar[k] = av[n][m];
			k++;
		}
		ar[k] = '\n';
		k++;
	}
	ar[k] = '\0';
	return (ar);
}
