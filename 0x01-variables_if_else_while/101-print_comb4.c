#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int numb1, numb2, numb3;

	for (numb1 = 48; numb1 <= 57; numb1++)
	{
		for (numb2 = numb1 + 1; numb2 <= 57; numb2++)
		{
			for (numb3 = numb2 + 1; numb3 <= 57; numb3++)
			{
				if (numb3 > numb2 && numb2 > numb1)
				{
					putchar(numb1);
					putchar(numb2);
					putchar(numb3);
					if (numb1 != 55 || numb2 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
