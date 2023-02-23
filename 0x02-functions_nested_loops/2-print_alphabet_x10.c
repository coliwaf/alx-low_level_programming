#include "main.h"

/**
  * print_alphabet_x10 - prints alphabet x10
  */

void print_alphabet_x10(void)
{
	int counter;
	char alpha;

	for (counter = 0; counter < 10; counter++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');

	}
}
