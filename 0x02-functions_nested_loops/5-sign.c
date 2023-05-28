#include "main.h"

/**
 * print_sign - prints sign against a number
 * @n: the number to check
 * Return: 1 and + if n ia greater than 0,
 * 0 and 0 if n is zero,
 * -1 and - if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putcha(48);
		return (0)
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
