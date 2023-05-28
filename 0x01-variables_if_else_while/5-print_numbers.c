#include <stdio.h>

/**
 * main - prints all single digit numbers
 * Return: 0
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
		printf("%d", numb);
	printf("\n");
	return (0);
}
