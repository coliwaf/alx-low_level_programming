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
	int x = '0';
	
	for (j = '0'; j <= '9'; j++)
	{
		for (i = x++; i <= '9'; i++)
		{
			if (i != j)
			{
				putchar(j);
				putchar(i);
				if (!(i == '9' && j == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
