#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int numb;

	for (numb = 48; numb <= 57; numb++)
	{
		putchar(numb);
		if (numb != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
