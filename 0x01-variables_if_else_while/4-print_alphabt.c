#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		if (chr != 'e' || chr != 'q')
		{
			putchar(chr);
		}
	}
	putchar("\n");
	return (0);
}

