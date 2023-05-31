#include "main.h"

/**
 * times_table -  Prints the 9 times table
 * Return: n/a
 */
void times_table(void)
{
	int k, l, m;

	for (k = 0; k <= 9; k++)
	{
		_putchar('0');
		for (l = 0; l <= 9; l++)
		{
			m = k * l;
			_putchar(',');
			_putchar(' ');
			if (m <= 9)
			{
				_putchar(' ');
				_putchar(m + '0');
			}
			else
			{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
