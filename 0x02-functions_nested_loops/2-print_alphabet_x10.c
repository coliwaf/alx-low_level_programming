#include "main.h"

/**
 * print_alphabet_x10 - prints 10 lines of the alphabet
 */
void print_alphabet_x10(void)
{
	char alph;
	int numb;

	for (numb = 48; numb <= 57; numb++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}
