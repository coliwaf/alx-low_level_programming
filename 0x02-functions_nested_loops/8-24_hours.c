#include "main.h"

/**
 * jack_bauer - printsall minutes of a 24 hour timer in hr:min
 */

void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar('0' + (hr / 10));
			_putchar('0' + (hr % 10));
			_putchar(':');
			_putchar(min / 10 + 48);
			_putchar(min % 10 + 48);
			_putchar('\n');
		}
	}
}
