#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int row, col, num;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			num = row * col;

			if (col == 0)
			{
				_putchar('0' + num);
				continue;
			}
			_putchar(',');
			_putchar(' ');
			if (num >= 10)
			{
				_putchar('0' + (num / 10));
				_putchar('0' + (num % 10));
			}
			else
			{
				_putchar(' ');
				_putchar('0' + num);
			}
		}
	_putchar('\n');
	}
}
