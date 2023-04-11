#include "main.h"
/**
 * _abs - finds the absolute value of an integer
 * @ab: integer input
 * Return: value
 */
int _abs(int ab)
{
	if (ab > 0)
	{
		return (ab * 1);
	}
	else if (ab < 0)
	{
		return (ab * -1);
	}
	else
	{
		return (0);
	}
}
