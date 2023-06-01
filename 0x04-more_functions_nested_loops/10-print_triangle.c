#include "main.h"

/**
 * print_triangle - Prints a triangle using #
 * @size: the triangle size
 * Return: 0
 */

void print_triangle(int size)
{
	int symb, idx;

	if (size > 0)
	{
		for (symb = 1; symb <= size; symb++)
		{
			for (idx = size - symb; idx > 0; idx--)
				_putchar(' ');
			for (idx = 0; idx < symb; idx++)
				_putchar('#');
			if (symb == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
