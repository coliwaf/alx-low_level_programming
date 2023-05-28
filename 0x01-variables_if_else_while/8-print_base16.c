#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int numb;
	char chr;

	for (numb = 48; numb <= 57; numb++)
		putchar(numb);
	for (chr = 'a'; chr <= 'f'; chr++)
		putchar(chr);
	putchar('\n');
	return (0);
}
