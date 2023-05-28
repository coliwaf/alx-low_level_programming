#include <stdio.h>

/**
 * main - prints single digit numbers using putchar
 * Return: 0
 */
int main(void)
{
	int numb;

	for (numb = 48; numb <= 57; numb++)
		putchar(numb);
	putchar('\n');
	return (0);
}
