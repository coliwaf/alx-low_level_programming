#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: str param
 */
void puts_half(char *str)
{
	int idx, len, n;

	idx = 0;
	len = 0;
	while (str[idx++])
		len++;

	if ((len % 2) == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}

	for (idx = n; idx < len; idx++)
		_putchar(str[idx]);
	_putchar('\n');
}
