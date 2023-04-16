#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings
  * @s1 - string one
  * @s2 - string two
  * @n - number of bytes
  * Return: pointer that points to a newly allocated space in memory
  *
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k;
	unsigned int l;
	unsigned int m = 0;
	unsigned int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
		j = n;

	len = i + j;

	ar = malloc(sizeof(char) * (len + 1));
	if (ar == NULL)
		return (NULL);

	for (p = 0; l < i; l++)
		ar[m++] = s1[l];
	for (m = 0; k < j; k++)
		ar[m++] = s2[k];

	ar[m] = '\0';
	return (ar);
}
