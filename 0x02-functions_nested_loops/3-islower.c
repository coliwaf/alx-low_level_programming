#include "main.h"

/**
 * _islower - returns 1 if c is lowercase, 0 otherwise
 * @c: integer to be tested
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
