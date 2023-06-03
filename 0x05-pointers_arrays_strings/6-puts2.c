#include "main.h"

/**
 * puts2 - prints even chars in a string
 * @str: string
 */

void puts2(char *str)
{
	int idx = 0;

	while (str[idx] != '\0')
	{
		if (idx % 2 == 0)
			_putchar(str[idx]);
		idx++;
	}
	_putchar('\n');
}
