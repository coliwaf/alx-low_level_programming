#include "main.h"

/**
 * more_numbers - prints 0-14 (10 times)
 * Return: 0
 */
void more_numbers(void)
{
	int ln, num;

	for (ln = 0; ln < 10; ln++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
