#include <stdio.h>
/**
  * main - Entry point.
  *
  * Return: 0 on success
  */
int main(void)
{
	int i;
	int j;
	int x;

	for (j = '0'; j <= '9'; j++)
	{
		for (x = j + 1; x <= '9'; x++)
		{
			for (i = x + 1; i <= '9'; i++)
			{
				if (x != i)
				{
					putchar(j);
					putchar(x);
					putchar(i);
					if (!(i == '9' && x == '8' && j == '7'))
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
