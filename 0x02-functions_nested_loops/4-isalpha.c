#include "main.h"

/**
  * _isalpha - checks for alphabet characters
  * @c: single letter input
  * Return: 0
  */
int _isalpha(int c)
{
	if (c >= 'a' && c >= 'A' && c <= 'z' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
