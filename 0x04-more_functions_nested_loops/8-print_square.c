#include "main.h"

/**
 * print_square - prints a square
 * @size: the size param
 * Return: 0
 */

void print_square(int size)
{
	int hgt, wdth;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (wdth = 0; wdth < size; wdth++)
				_putchar('#');

			if (hgt == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
