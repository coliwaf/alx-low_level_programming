#include "main.h"

/**
 * times_table -  Prints the 9 times table
 * Return: n/a
 */
void times_table(void)
{
	int k, l, m;

	for (k = 0; k < 10; k++)
	{
		_putchar('0');
		for (l = 1; l < 10; l++)
		{
			m = k * l;
			if (m < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
