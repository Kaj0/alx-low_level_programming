#include "main.h"
/**
 * flip_bits - calculates no of needed bits
 * from one number to another
 * @n: initial number
 * @m: transformed number
 * Return: number of needed bit transformations
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, rds;

	rds = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			rds++;
	return (rds);
}
