#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * r = row, c = column, k = current result
 * Return: output
 * extra space past single digit
 */
void times_table(void)
{
	int r, c, k;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			d = (r * c);
			if ((k / 10) > 0)
			{
				_putchar((k / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((k % 10) + '0');

			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
