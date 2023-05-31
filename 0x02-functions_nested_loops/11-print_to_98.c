#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers from n up to 98
 * @n: integer param
 * Return: n/a
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	printf("%d\n", n);
}
