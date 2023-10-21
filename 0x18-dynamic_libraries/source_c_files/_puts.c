#include "main.h"

/**
 * _puts - prints a line to stdout
 * @str: string param
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
