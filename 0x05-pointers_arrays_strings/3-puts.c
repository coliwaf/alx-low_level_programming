#include "main.h"

/**
  * _puts - prints a string followed by new line
  * @str: the string arg
  *
  * Returns: void
  */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
