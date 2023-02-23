#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer arg
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = (n % 10);

	if (lastDigit >= 0)
		return (lastDigit);
	else
		return (-1 * lastDigit);

	_putchar(lastDigit + '0');

	return (lastDigit);
}
