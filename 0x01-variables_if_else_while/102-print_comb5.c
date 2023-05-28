#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int numb1, numb2;

	for (numb1 = 0; numb1 <= 98; numb1++)
	{
		for (numb2 = numb1 + 1; numb2 <= 99; numb2++)
		{
			putchar((numb1 / 10) + 48);
			putchar((numb1 % 10) + 48);
			putchar(' ');
			putchar((numb2 / 10) + 48);
			putchar((numb2 % 10) + 48);
			if (numb1 != 98 || numb2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

