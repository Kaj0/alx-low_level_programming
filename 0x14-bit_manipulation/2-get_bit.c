#include "main.h"

/**
  * get_bit - returns the value of a bit
  *	at a given index
  * @n: long integer
  * @index: index
  *
  * Return: value of bit at index
  *
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (8 * sizeof(n) - 1))
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
