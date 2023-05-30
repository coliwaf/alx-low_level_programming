#include "mwin.h"

/**
 * print_last_digit - prints last digit
 * @n: number in question
 * Return: last digit
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;

	if (a < 0)
	{
		_putchar(-a + 48);
		return (-a);
	}
	_putchar(a + 48);
	return (a);
}
