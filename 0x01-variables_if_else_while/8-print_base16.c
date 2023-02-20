#include <stdio.h>
/**
  * main - Entry point.
  *
  * Return: 0 on success
  */
int main(void)
{
	char an;

	for (an = '0'; an <= '9'; an++)
	{
		putchar(an);
	}
	for (an = 'a'; an <= 'f'; an++)
	{
		putchar(an);
	}
	putchar('\n');
	return (0);
}
