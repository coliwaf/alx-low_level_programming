#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int numb1, numb2;

	for (numb1 = 48; numb1 <= 57; numb1++)
	{
		for (numb2 = 48; numb2 <= 57; numb2++)
		{
			putchar(numb1);
			putchar(numb2);
			if (numb1 != 57 || numb2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
