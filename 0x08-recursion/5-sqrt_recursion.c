#include "main.h"

/**
  * _sqrt_recursion - returns natural square root of a number
  * @n: number
  * Return: natural squareroot of given number
  *
  */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt_recursion(n, 1));
}
