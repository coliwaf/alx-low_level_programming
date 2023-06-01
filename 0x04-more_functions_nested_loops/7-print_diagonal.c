#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: char representing number of times
 * Return: 0
 */

void print_diagonal(int n)
{
	int ln, spc;

	if (n > 0)
	{
		for (ln = 0; ln < n; ln++)
		{
			for (spc = 0; spc < ln; spc++)
				_putchar(' ');
			_putchar('\\');

			if(ln == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
