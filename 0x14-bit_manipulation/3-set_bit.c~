#include "main.h"

/**
  * set_bit - to set index bit to 1
  * @n: pointer
  * @index: index
  *
  * Return: 1 or -1
  *
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if(index > (8 * sizeof(*n)) - 1)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}
