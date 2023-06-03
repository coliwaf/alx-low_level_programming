#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string param
 */

void print_rev(char *s)
{
	int idx = 0;

	while (s[idx])
		idx++;

	while (idx--)
		_putchar(s[idx]);
	_putchar('\n');
}
