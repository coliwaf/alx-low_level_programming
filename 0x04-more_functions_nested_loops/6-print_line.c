#include "main.h"

/**
 * print_line - print a straight line
 * Return: 0
 */

void (print_line(int n))
{
	int ln;
	if (n > 0)
	{
		for (ln = 0; ln < n; ln++)
			_putchar('_');
	}
	_putchar('\n');
}
